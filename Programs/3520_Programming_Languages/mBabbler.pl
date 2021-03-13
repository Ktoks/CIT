# Markov Babbler
# usage:
# perl *program.pl* *suffix_len* *max_words* *filetobabble.txt*

use strict;         # this catches all errors
use warnings;       # this catches warnings and displays them as errors

my @words;          # array-> a line of text
my %wordlist;       # hash-> key: prefix: array of possible suffixes

# get inputed suffix length or default to 2
my $preferred_length = shift @ARGV || 2; 

# get inputed maximum number of words or default to 10000
my $maxwords = shift @ARGV || 10000;

# while arguments
while(<>) {
    # push the first arg into @words
    push @words, split;

    # while @words array is larger than the preferred length
    while(@words > $preferred_length){
        
        # build a prefix of the preferred length
        my $pref = join(' ', @words[0..($preferred_length-1)]);

        # push words of preferred length into wordlist
        push @{ $wordlist{$pref} }, $words[$preferred_length];

        # go to next word
        shift @words;
    }
    #add suffix to the list
}

# keys-> returns all keys in %wordlist,
# rand-> assigns a random key to the wordlist.
my $pref = (keys %wordlist)[rand keys %wordlist];

print "$pref";

# For loop from 0 to maxwords - 1
for (0..($maxwords-1)) {
    
    # if wordlist predicate at pref not defined, 
    last if not defined($wordlist{$pref});  # go to the last one
    
    # index = random value in wordlist
    my $index = rand @{ $wordlist{$pref} };

    # suffix = wordlist at pref sub index
    my $suffix = $wordlist{$pref}[$index];

    # print a space + suffix
    print ' '. $suffix;

    # print a newline if array mod 10 = 0.
    print '\n' if ( $_ % 10 == 0);

    # does pref match any of the symbols in the regular expression below?
    # if so, pref = pref[1 to pref's length] + suffix;
    $pref =~ s/^[^ ]+ (.+)$/$1 $suffix/;
}