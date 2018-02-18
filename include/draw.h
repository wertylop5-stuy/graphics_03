#ifndef DRAW_H
#define DRAW_H

#include<stdio.h>

#include"dimen.h"
#include"matrix.h"

struct Pixel {
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

typedef struct Pixel Frame[IMG_HEIGHT][IMG_WIDTH];

//writes a pixel value to a spot on the grid
//(0, 0) is the bottom left of the grid
void plotPoint(Frame grid, int x, int y, struct Pixel *p);

//pixel is for custom colors
void drawLine(Frame grid, struct Pixel *p, int x1, int y1, int x2, int y2);

void pixelColor(struct Pixel *p, unsigned char r, unsigned char g, unsigned char b);

void push_point(struct matrix *m, float x, float y, float z);

void push_edge(struct matrix *m, float x1, float y1,
		float z1, float x2, float y2, float z2);

#endif
