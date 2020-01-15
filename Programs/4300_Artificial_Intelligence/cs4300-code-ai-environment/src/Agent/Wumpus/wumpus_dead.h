static int wumpus_dead_width  = 45;
static int wumpus_dead_height = 42;
static unsigned char wumpus_dead_data[] = {
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	208, 207, 199, 255, 
	244, 244, 242, 255, 
	220, 219, 214, 255, 
	159, 158, 143, 255, 
	159, 158, 143, 255, 
	196, 195, 185, 255, 
	111, 110, 86, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	87, 85, 58, 255, 
	196, 195, 185, 255, 
	171, 171, 157, 255, 
	123, 122, 101, 255, 
	171, 171, 157, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	208, 207, 199, 255, 
	208, 207, 199, 255, 
	208, 207, 199, 255, 
	208, 207, 199, 255, 
	171, 171, 157, 255, 
	111, 110, 86, 255, 
	111, 110, 86, 255, 
	147, 146, 129, 255, 
	123, 122, 101, 255, 
	63, 61, 30, 255, 
	111, 110, 86, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	99, 98, 72, 255, 
	63, 61, 30, 255, 
	111, 110, 86, 255, 
	111, 110, 86, 255, 
	63, 61, 30, 255, 
	75, 73, 44, 255, 
	147, 146, 129, 255, 
	171, 171, 157, 255, 
	244, 244, 242, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	99, 98, 72, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	159, 158, 143, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	196, 195, 185, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	87, 85, 58, 255, 
	220, 219, 214, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	87, 85, 58, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	75, 73, 44, 255, 
	244, 244, 242, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	87, 85, 58, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	208, 207, 199, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	75, 73, 44, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	94, 92, 29, 255, 
	156, 155, 28, 255, 
	125, 124, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	78, 76, 29, 255, 
	156, 155, 28, 255, 
	109, 108, 29, 255, 
	70, 68, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	208, 207, 199, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	220, 219, 214, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	86, 84, 29, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	94, 92, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	86, 84, 29, 255, 
	163, 163, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	148, 147, 28, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	69, 58, 29, 255, 
	123, 104, 29, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	134, 80, 28, 255, 
	124, 42, 28, 255, 
	144, 36, 28, 255, 
	137, 38, 28, 255, 
	117, 44, 29, 255, 
	169, 151, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	154, 135, 28, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	171, 171, 157, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	208, 207, 199, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	90, 52, 29, 255, 
	131, 40, 28, 255, 
	165, 30, 28, 255, 
	172, 28, 28, 255, 
	174, 139, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	145, 95, 31, 255, 
	84, 48, 36, 255, 
	76, 50, 37, 255, 
	76, 50, 37, 255, 
	100, 44, 34, 255, 
	158, 142, 30, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	167, 69, 28, 255, 
	172, 28, 28, 255, 
	151, 34, 28, 255, 
	124, 42, 28, 255, 
	76, 56, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	147, 146, 129, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	208, 207, 199, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	131, 40, 28, 255, 
	164, 29, 28, 255, 
	108, 43, 34, 255, 
	68, 52, 37, 255, 
	45, 58, 40, 255, 
	151, 154, 31, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	116, 122, 34, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	116, 122, 34, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	80, 90, 37, 255, 
	52, 56, 39, 255, 
	84, 48, 36, 255, 
	124, 39, 32, 255, 
	165, 30, 28, 255, 
	97, 50, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	75, 73, 44, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	220, 219, 214, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	172, 28, 28, 255, 
	84, 48, 36, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	151, 154, 31, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	116, 122, 34, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	116, 122, 34, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	80, 90, 37, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	140, 35, 31, 255, 
	124, 42, 28, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	244, 244, 242, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	159, 158, 143, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	103, 48, 29, 255, 
	165, 30, 28, 255, 
	140, 35, 31, 255, 
	100, 44, 34, 255, 
	76, 50, 37, 255, 
	151, 154, 31, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	116, 122, 34, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	45, 58, 40, 255, 
	116, 122, 34, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	187, 187, 28, 255, 
	96, 86, 35, 255, 
	84, 48, 36, 255, 
	116, 41, 33, 255, 
	156, 31, 29, 255, 
	151, 34, 28, 255, 
	76, 56, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	123, 122, 101, 255, 
	244, 244, 242, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	75, 73, 44, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	69, 58, 29, 255, 
	103, 48, 29, 255, 
	137, 38, 28, 255, 
	151, 34, 28, 255, 
	180, 117, 28, 255, 
	183, 147, 28, 255, 
	183, 147, 28, 255, 
	183, 147, 28, 255, 
	161, 91, 29, 255, 
	124, 39, 32, 255, 
	108, 43, 34, 255, 
	108, 43, 34, 255, 
	140, 35, 31, 255, 
	161, 91, 29, 255, 
	183, 147, 28, 255, 
	183, 147, 28, 255, 
	181, 127, 28, 255, 
	172, 37, 28, 255, 
	144, 36, 28, 255, 
	124, 42, 28, 255, 
	97, 50, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	135, 134, 115, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	159, 158, 143, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	69, 58, 29, 255, 
	90, 52, 29, 255, 
	90, 52, 29, 255, 
	90, 52, 29, 255, 
	90, 52, 29, 255, 
	117, 44, 29, 255, 
	110, 46, 29, 255, 
	90, 52, 29, 255, 
	90, 52, 29, 255, 
	90, 52, 29, 255, 
	90, 52, 29, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	220, 219, 214, 255, 
	244, 244, 242, 255, 
	75, 73, 44, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	208, 207, 199, 255, 
	171, 171, 157, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	244, 244, 242, 255, 
	111, 110, 86, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	99, 98, 72, 255, 
	255, 255, 255, 0, 
	87, 85, 58, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	111, 110, 86, 255, 
	255, 255, 255, 0, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	135, 134, 115, 255, 
	255, 255, 255, 0, 
	111, 110, 86, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	171, 170, 44, 255, 
	111, 109, 36, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	183, 183, 171, 255, 
	255, 255, 255, 0, 
	111, 110, 86, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	111, 109, 36, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	123, 121, 38, 255, 
	243, 242, 54, 255, 
	75, 73, 31, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	111, 109, 36, 255, 
	183, 182, 46, 255, 
	75, 73, 31, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	99, 97, 34, 255, 
	159, 158, 43, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	208, 207, 199, 255, 
	255, 255, 255, 0, 
	171, 171, 157, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	87, 85, 33, 255, 
	231, 230, 52, 255, 
	231, 230, 52, 255, 
	155, 133, 39, 255, 
	175, 61, 30, 255, 
	186, 61, 30, 255, 
	187, 73, 31, 255, 
	243, 242, 54, 255, 
	153, 121, 38, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	87, 85, 33, 255, 
	195, 194, 47, 255, 
	243, 242, 54, 255, 
	143, 121, 38, 255, 
	165, 61, 30, 255, 
	186, 61, 30, 255, 
	186, 61, 30, 255, 
	160, 97, 34, 255, 
	243, 242, 54, 255, 
	135, 133, 39, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	208, 207, 199, 255, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	75, 73, 44, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	229, 145, 41, 255, 
	253, 242, 54, 255, 
	233, 202, 47, 255, 
	72, 31, 11, 255, 
	203, 182, 42, 255, 
	203, 182, 42, 255, 
	212, 57, 28, 255, 
	155, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	196, 133, 39, 255, 
	255, 255, 56, 255, 
	194, 122, 34, 255, 
	56, 15, 7, 255, 
	104, 63, 18, 255, 
	253, 242, 54, 255, 
	223, 129, 37, 255, 
	155, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	196, 195, 185, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	104, 61, 30, 255, 
	198, 53, 26, 255, 
	46, 35, 8, 255, 
	191, 191, 42, 255, 
	239, 239, 52, 255, 
	223, 223, 49, 255, 
	15, 15, 3, 255, 
	42, 11, 5, 255, 
	227, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	93, 61, 30, 255, 
	198, 53, 26, 255, 
	93, 83, 19, 255, 
	239, 239, 52, 255, 
	127, 127, 28, 255, 
	239, 239, 52, 255, 
	95, 95, 21, 255, 
	42, 11, 5, 255, 
	227, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	147, 146, 129, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	123, 122, 101, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	83, 61, 30, 255, 
	227, 61, 30, 255, 
	70, 19, 9, 255, 
	31, 31, 7, 255, 
	255, 255, 56, 255, 
	255, 255, 56, 255, 
	111, 111, 24, 255, 
	127, 34, 16, 255, 
	206, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	83, 61, 30, 255, 
	227, 61, 30, 255, 
	56, 15, 7, 255, 
	95, 95, 21, 255, 
	255, 255, 56, 255, 
	159, 159, 35, 255, 
	0, 0, 0, 255, 
	99, 26, 13, 255, 
	216, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	232, 231, 228, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	114, 61, 30, 255, 
	216, 61, 30, 255, 
	248, 206, 49, 255, 
	228, 166, 42, 255, 
	203, 89, 31, 255, 
	251, 230, 52, 255, 
	234, 182, 46, 255, 
	105, 73, 31, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	124, 61, 30, 255, 
	218, 73, 31, 255, 
	251, 230, 52, 255, 
	230, 178, 44, 255, 
	253, 242, 54, 255, 
	209, 126, 36, 255, 
	206, 61, 30, 255, 
	93, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	220, 219, 214, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	111, 110, 86, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	147, 145, 41, 255, 
	219, 218, 51, 255, 
	105, 73, 31, 255, 
	104, 61, 30, 255, 
	95, 73, 31, 255, 
	207, 206, 49, 255, 
	219, 218, 51, 255, 
	75, 73, 31, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	219, 218, 51, 255, 
	183, 182, 46, 255, 
	124, 61, 30, 255, 
	140, 97, 34, 255, 
	243, 242, 54, 255, 
	135, 133, 39, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	111, 110, 86, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	220, 219, 214, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	135, 133, 39, 255, 
	243, 242, 54, 255, 
	99, 97, 34, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	183, 182, 46, 255, 
	171, 170, 44, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	183, 182, 46, 255, 
	219, 218, 51, 255, 
	75, 73, 31, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	99, 97, 34, 255, 
	243, 242, 54, 255, 
	135, 133, 39, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	75, 73, 44, 255, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	135, 134, 115, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	123, 121, 38, 255, 
	255, 255, 56, 255, 
	99, 97, 34, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	135, 133, 39, 255, 
	243, 242, 54, 255, 
	75, 73, 31, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	99, 97, 34, 255, 
	135, 133, 39, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	208, 207, 199, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	159, 158, 143, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	87, 85, 33, 255, 
	123, 121, 38, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	171, 170, 44, 255, 
	99, 97, 34, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	159, 158, 143, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	87, 85, 58, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	159, 158, 143, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	111, 110, 86, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	208, 207, 199, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	135, 134, 115, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	159, 158, 143, 255, 
	99, 98, 72, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	208, 207, 199, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	99, 98, 72, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	159, 158, 143, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	183, 183, 171, 255, 
	87, 85, 58, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	183, 183, 171, 255, 
	111, 110, 86, 255, 
	75, 73, 44, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	87, 85, 58, 255, 
	111, 110, 86, 255, 
	135, 134, 115, 255, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	208, 207, 199, 255, 
	135, 134, 115, 255, 
	75, 73, 44, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	63, 61, 30, 255, 
	75, 73, 44, 255, 
	244, 244, 242, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	244, 244, 242, 255, 
	147, 146, 129, 255, 
	63, 61, 30, 255, 
	99, 98, 72, 255, 
	87, 85, 58, 255, 
	111, 110, 86, 255, 
	87, 85, 58, 255, 
	111, 110, 86, 255, 
	75, 73, 44, 255, 
	75, 73, 44, 255, 
	220, 219, 214, 255, 
	244, 244, 242, 255, 
	208, 207, 199, 255, 
	183, 183, 171, 255, 
	244, 244, 242, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	232, 231, 228, 255, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
	255, 255, 255, 0, 
};
