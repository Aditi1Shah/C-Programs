//*WAP TO COUNT TOTAL NUMBER OF WORDS IN A STRING
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a sentence : \n");
    fgets(str, sizeof str, stdin);
    int count=0,i=0;
    while(str[i]!='\0')
    {
        if (str[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("No of words : %d\n",count+1);
}