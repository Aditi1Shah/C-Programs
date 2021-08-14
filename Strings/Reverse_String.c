//*WAP to Reverse characters of a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a String : \n");
    fgets(str, sizeof str, stdin);
    int i;
    char ar[50];
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c ",str[i]);
    }
}