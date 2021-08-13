//*WAP TO INPUT A STRING AND PRINT IT
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];       //*String is a Character Array
    printf("Enter a String : \n");
    scanf("%s",str);    //*We dont use & here bcz string is character array, using str without[] gives
                        //*base address of the character array
    puts(str);
    printf("\n %s\n",str);

    //*To take a sentance as an input : 
    printf("Enter a sentence : \n");
    fflush(stdin);
    fgets(str, sizeof str, stdin);
    puts(str);
}
