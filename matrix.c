#include "include/matrix.h"

struct matrix* new_matrix(int r, int c) {
	struct matrix *res = (struct matrix*)malloc(sizeof(struct matrix));
	res->rows = r;
	res->cols = c;
	
	res->m = (float **)malloc(c*sizeof(float *));
	
	float **pos;
	for (pos = res->m;
			(pos - res->m) < c;
			pos++ ) {
		*pos = (float *)malloc(r*sizeof(float));
	}
	
	return res;
}

void print_matrix(struct matrix *m) {
	float *pos;
	float **temp;
	for (temp = m->m; (temp - m->m) < m->rows; temp++) {
		for (pos = *temp; (pos - *temp) < m->cols; pos++) {
			printf("%.2f\t", *pos);
		}
		printf("\n");
	}
	
	printf("\n");
}

void ident(struct matrix *m) {
	int r = 0, c = 0;
	
	if (m->cols != m->rows) {
		fprintf(stderr, "ident: matrix is not square\n");
		return;
	}
	
	for (; r < m->rows; r++) {
		for (c = 0; c < m->cols; c++) {
			if (r == c) {
				m->m[r][c] = 1.0f;
			}
			else {
				m->m[r][c] = 0.0f;
			}
		}
	}
}

void matrix_mult(struct matrix const *a, struct matrix *b) {
	
}

void free_matrix(struct matrix *m) {
	float **pos;
	for (pos = m->m; (pos - m->m) < m->rows; pos++) {
		free(*pos);
	}
	free(m->m);
	free(m);
}

void resize(struct matrix *m) {
	int counter;
	for (counter = 0; counter < m->rows; counter++) {
		m->m[counter] = realloc(m->m[counter], m->cols*2*sizeof(float));
	}
	m->cols *= 2;
}

