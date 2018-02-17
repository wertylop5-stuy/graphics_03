#ifndef MATRIX_H
#define MATRIX_H

#include<stdio.h>
#include<stdlib.h>

struct matrix {
	float **m;
	int rows;
	int cols;
};

struct matrix* new_matrix(int r, int c);

void print_matrix(struct matrix *m);

//turns m into an indentity matrix
void ident(struct matrix *m);

//b will be modified with the result
void matrix_mult(struct matrix const *a, struct matrix *b);

void free_matrix(struct matrix *m);

//doubles the amount of columns
void resize(struct matrix *m);

#endif
