#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int x, y;
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
	printf("Before swapping\n");
    printf("Value of x = %d \n", x);
    printf("Value of y = %d \n", y);
    swap(&x, &y);
    printf("\nAfter swapping\n");
    printf("Value of x = %d \n", x);
    printf("Value of y = %d \n", y);
}

void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("After swapping\n");
    printf("Value of x = %d \n", *x);
    printf("Value of y = %d \n", *y);
}
