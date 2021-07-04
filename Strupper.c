#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char arr[12]="Hello world";

    //Upper case
    printf("String in upper case : %s\n",strupr(arr));

    //Lower case
    printf("String in lower case : %s\n",strlwr(arr));



    return 0;

}
