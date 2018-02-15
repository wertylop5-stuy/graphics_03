#include "include/matrix.h"

struct matrix* new_matrix(int r, int c) {
	struct matrix *res = (struct matrix*)malloc(sizeof(struct matrix));
	res->rows = r;
	res->cols = c;
	
	res->m = (float **)malloc(c*sizeof(float *));
	
	float *pos;
	for (pos = *(res->m);
			(pos - *(res->m))/sizeof(float *) < c;
			pos += sizeof(float *)) {
		pos = (float *)malloc(r*sizeof(float));
	}
	
	return res;
}

void print_matrix(struct matrix *m) {
	float *pos;
	float **temp;
	for (	temp = m->m;
		(temp - m->m)/sizeof(float *) < m->rows;
		temp += sizeof(float *)) {
		printf("new row\n");
		
		for (pos = *temp; (pos - *temp)/sizeof(float) < m->cols; pos += sizeof(float)) {
			printf("uhh\n");
			printf("%f ", *pos);
		}
		printf("\n");
	}
}

void ident(struct matrix *m) {
	
}

void matrix_mult(struct matrix const *a, struct matrix *b) {
	
}

void free_matrix(struct matrix *m) {
	
}

void resize(struct matrix *m) {
	
}

