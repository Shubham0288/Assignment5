//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number u want to print N natural numbers\n");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d\n",n);
    }
    return 0;
}