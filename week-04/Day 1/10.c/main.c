#include <stdio.h>

void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;

    printf("After Swapping\nx = %d\ny = %d\n", *a, *b);
}

int main()
{
	int x, y;
	x = 5;//0x20
	y = 8;//0x10
	printf("Before Swapping\nx = %d\ny = %d\n", x, y);

	//TODO: write a function which swaps the values of x and y. Then print out the values of x and y.

    swap(&x, &y);

	return 0;
}
