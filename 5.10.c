// Write a program to print a table of N 
#include<stdio.h>
int main()
{
    int n;
    printf("Table of the N is \n");
    scanf("%d",&n);
    for(int i=1 ; i<=10 ; i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}