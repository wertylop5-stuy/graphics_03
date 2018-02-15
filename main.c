#include"include/draw.h"
#include"include/output.h"
#include"include/matrix.h"

int main() {
	/*
	Frame test;
	memset(test, 0, sizeof(test));
	
	struct Pixel p;
	pixelColor(&p, 0, 255, 0);
	
	writeToFile(test);
	*/
	
	struct matrix *m = new_matrix(4, 4);
	
	printf("%d, %d\n", m->rows, m->cols);
	print_matrix(m);
	
	return 0;
}
