#include<stdio.h>
#include<stdlib.h>



int main()
{

    char name[]="npn";
    char name1[3];
    printf("%s\n",name);

    for(int i=2;i>=0;i--)
    {
        printf("%c",name[i]);
        name1[i]=name[i];
    }
    printf("\n");
    if(strcmp(name,name1))
    {
        printf("String is Palidrome\n");
    }
    return 0;
}

