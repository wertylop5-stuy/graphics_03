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
	
	print_matrix(m);

	ident(m);
	print_matrix(m);

	free_matrix(m);
	
	return 0;
}
