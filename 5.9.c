// Write a program to print cubes of the first N natural numbers .
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number u want to print cubes of the N natural numbers\n");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}