#include<stdio.h>
typedef struct point{
	int x;
	int y;
}pixel;

void main(){
	pixel xy[4] = {{99, 85}, {65, 78}, {50, 95}, {75, 95}};
	pixel *p;
	p = xy;
	p = p + 3;
	printf("%d %d\n", p->x, p->y);
	p = p - 1;
	printf("%d %d\n", p->x, p->y);
	printf("%d %d\n\n", xy[0].x, xy[0].y);
} 
