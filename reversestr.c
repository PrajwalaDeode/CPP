#include<stdio.h>
#include<stdlib.h>


int main()
{

    char name[]="Hello World";
    printf("%s\n",name);

    for(int i=10;i>=0;i--)
    {
        printf("%c",name[i]);

    }
    return 0;
}
