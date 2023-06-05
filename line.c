#include<stdio.h>
struct point
{
	int x;
	int y;
};
void translation(struct point* point, int dx, int dy)
{
	point->x +=dx;
	point->y +=dy;
}
int main()
{
	struct point p={2,3};
	printf("Before Translation : %d, %d", p.x, p.y);
	translation(&p, 5, 3);
	printf("After Translation : %d, %d", p.x, p.y);
	return 0;
}
