#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#include <unistd.h>

char *readfile(char *filename) {
    // get the size of the file
    struct stat info;                   // info is a stat struct
    int status = stat(filename, &info); // status = stat struct of filename
    if (status < 0) {
        perror("stat error");
        exit(1);
    }

    // get a buffer of the appropriate size
    int size = (int) info.st_size;
    char *buffer = malloc(size + 1);
    if (buffer == NULL) {
        fprintf(stderr, "malloc error\n");
        exit(1);
    }

    // open the file
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        perror("open error");
        exit(1);
    }

    // read the entire file
    char *ptr = buffer;             // ptr is a pointer to the buffer
    int left = size;                // left is the size to be indexed
    while (left > 0) {              // for what is left of the file
        int chunk = read(fd, ptr, left);    // change starts here //
        if (chunk < 0) {
            perror("read error");
            exit(1);
        } else if (chunk == 0) {
            fprintf(stderr, "ran out of data\n");
            exit(1);
        }
        left -= chunk;
        ptr += chunk;
    }

    // terminate the string with a null
    *ptr = 0;

    // close the file
    status = close(fd);
    if (status < 0) {
        perror("close error");
        exit(1);
    }

    return buffer;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    char *buffer = readfile(argv[1]);   // buffer comes from readfile
    printf("%s", buffer);               // print buffer

    free(buffer);                       // deallocate buffer space
    return 0;
}
