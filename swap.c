#include<stdio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
        *y=temp
}
void main()
{
	int x=10;
	int y=15;
	printf("\n Values before swapping");
	printf("\n X: %d\n Y: %d\n",x,y);
        swap(&x,&y);
	printf("\n Values after swapping");
	printf("\n X: %d\n Y: %d \n",x,y);
}

