//*WAP TO Separate individual characters from string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a word/sentence : \n");
    fgets(str,sizeof str,stdin);
    int i;
    printf("\n");
    for(i=0;i<strlen(str);i++)
    {
        printf("%c ",str[i]);
    }
}