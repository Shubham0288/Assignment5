//Write a program to print the first N even natural numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number u want to print N even natural number \n");
    scanf("%d",&n);
    for(int i=2 ; i<=2*n ; i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}