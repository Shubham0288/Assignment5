// Write a program to print the first N natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number u want to print first N even natural number in reverse order\n");
    scanf("%d",&n);
    for(int i=2 ; i<=n ; n--)
    {
        printf("%d\n",n*2-2);
    }
    return 0;
}