#ifndef MATRIX_H
#define MATRIX_H

struct matrix {
	float **m;
	int rows;
	int cols;
};

void printMatrix(struct matrix *m);

void indent(struct matrix *m);

void matrixMult(struct const matrix *a, struct matrix *b);

#endif
