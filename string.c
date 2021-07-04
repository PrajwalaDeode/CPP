#include<stdio.h>
#include<stdlib.h>


int main()
{
    char str[7]="ABCDE";    //last character is \0

    char str1[5]={'a','b','c','d','\0'};

    char* str3 = "ABCDE";

    //Dyanamic allocation

    char *str4;
    int size=4;
    str4 = (char*)malloc(sizeof(char)*size);
    *(str4+0)='A';
    *(str4+1)='B';
    *(str4+2)='C';
    *(str4+3)='\0';


    printf("%s\n",str);
    printf("%s\n",str1);
    printf("%s\n",str3);
    printf("%s\n",str4);
    return 0;




}
