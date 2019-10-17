#include<stdio.h>
void swap(int x, int y);
int main()
{
	int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
	swap(a,b);
	printf("a=%d b=%d\n",a,b);
}

void swap(int x, int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("a=%d b=%d \n",x,y);
}
