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
	
	/*
	struct matrix *m = new_matrix(4, 4);

	ident(m);
	print_matrix(m);

	resize(m);
	print_matrix(m);

	m->m[0][5] = 9.0f;
	print_matrix(m);

	struct matrix *a = new_matrix(1, 4);
	a->m[0][0] = 1.0f;
	a->m[0][1] = 2.0f;
	a->m[0][2] = 3.0f;
	a->m[0][3] = 4.0f;


	struct matrix *b = new_matrix(4, 2);
	b->m[0][0] = 5.0f;
	b->m[1][0] = 3.0f;
	b->m[2][0] = 1.0f;
	b->m[3][0] = 0.0f;
	b->m[0][1] = 20.0f;
	b->m[1][1] = 24.0f;
	b->m[2][1] = 0.5f;
	b->m[3][1] = 0.1f;

	print_matrix(b);
	matrix_mult(a, b);
	print_matrix(b);

	push_point(b, 0, 0, 0);
	print_matrix(b);
	
	free_matrix(m);
	free_matrix(a);
	free_matrix(b);
	*/
	
	struct matrix *a = new_matrix(1, 5);
	struct matrix *b = new_matrix(3, 1);
	struct matrix *i = new_matrix(3, 3);
	ident(i);

	printf("empty matrix\n");
	print_matrix(b);
	printf("pushing points\n");
	push_point(b, 1, 2, 3);
	print_matrix(b);
	push_point(b, 4, 5, 6);
	print_matrix(b);
	
	printf("pushing edge\n");
	push_edge(b, 10, 11, 12, 21, 22, 23);
	print_matrix(b);

	printf("back:%d cols:%d\n", b->back, b->cols);
	push_point(b, 4, 5, 6);
	printf("back:%d cols:%d\n", b->back, b->cols);
	print_matrix(b);
	
	a->m[0][0] = 2.0f;
	a->m[0][1] = 3.0f;
	a->m[0][2] = 4.0f;
	a->back = 3;

	printf("matrix mult with [2, 3, 4]\n");
	matrix_mult(a, b);
	print_matrix(b);
	
	return 0;
}

