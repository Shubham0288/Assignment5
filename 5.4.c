// Write a program to print the first N odd  natural numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number u want to print N odd numbers \n");
    scanf("%d",&n);
    for(int i=1 ; i<=2*n ; i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}