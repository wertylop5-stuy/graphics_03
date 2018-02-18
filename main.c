#include"include/draw.h"
#include"include/output.h"
#include"include/matrix.h"

//how big to make the "pixels"
#define PIXEL_WIDTH	20

//offset from lower left corner
#define OFFSET		50

//(x, y) is the top left of the pixel
void fill_pixel(Frame f, struct Pixel *p, int x, int y) {
	int a, b;
	for (a = x+1; a < x+PIXEL_WIDTH; a++) {
	for (b = y-1; b > y-PIXEL_WIDTH; b--) {
		plot_point(f, a, b, p);
	}
	}
}

//pushes the pixel border into the frame, and fills in the pixel
//note: the borders arent drawn immediately
void place_pixel(struct Matrix *m, Frame f, struct Pixel *p, int x, int y) {
	push_edge(m, x, y, 0, x+PIXEL_WIDTH, y, 0);
	push_edge(m, x, y, 0, x, y-PIXEL_WIDTH, 0);
	push_edge(m, x, y-PIXEL_WIDTH, 0, x+PIXEL_WIDTH, y-PIXEL_WIDTH, 0);
	push_edge(m, x+PIXEL_WIDTH, y, 0, x+PIXEL_WIDTH, y-PIXEL_WIDTH, 0);

	fill_pixel(f, p, x, y);
}

int main() {
	struct Matrix *a = new_matrix(1, 5);
	struct Matrix *b = new_matrix(3, 1);
	struct Matrix *i = new_matrix(3, 3);
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

	free_matrix(a);
	free_matrix(b);
	free_matrix(i);
	a = b = i = 0;

	printf("drawing mario!\n");
	//setup
	Frame f;
	memset(f, 255, sizeof(Frame));
	struct Pixel p;
	a = new_matrix(3, 1);
	
	//the good stuff
	
	//place cream colored pixels
	//the head
	pixel_color(&p, 255, 235, 205);
	place_pixel(a, f, &p, 5+OFFSET, 14+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);

	//the body
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);
	place_pixel(a, f, &p, 0+OFFSET, 0+OFFSET);


	draw_lines(f, a, &p);

	write_to_file(f);
	
	return 0;
}

