//*WAP TO FIND LENGTH OF A STRING
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     char str[50];       //*String is a Character Array
    printf("Enter a String : \n");
    fgets(str, sizeof str,stdin);
    printf("The entered String is as follows : \n");
    puts(str);
    int i=0;
    while(str[i] !='\0')
    {
        i++;
    }    
    printf("Length of the String : %d\n",i-1);
    //*Using String Function
    printf("Length of the string using strlen function : %d\n",strlen(str));//*Includes Null character
    fflush(stdin);
    char s[50] = "Aditi Shah";
    printf("\n %d",strlen(s));      //*Does not include NULL Value
    char t[]= {'t','r','e','e','\0'};
     printf("\n %d",strlen(t));     //*Does not include null value
}