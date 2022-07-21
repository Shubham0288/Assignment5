// Write a program to print N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number u want to print first N natural numbers of that number\n");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; n--)
    {
        printf("%d\n",2*n-1);
    }
    return 0;
}