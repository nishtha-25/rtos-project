#include<stdio.h>
#include<function.c>   
void main()
{
	int i, j, a, n, number[30];
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    sort(number,n);
	mean(number,n);
	mode(number,n);
	median(number,n);
	max(number,n);
	min(number,n);    		
}