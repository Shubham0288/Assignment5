// Write a program to print N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number u want to print the reverse number from that number\n");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; n--)
    {
        printf("%d\n",n);
    }
    return 0;
}