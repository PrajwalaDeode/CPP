#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[4]= "abc";
    printf("original string: %s\n",str);

    for(int i=0;i<3;i++)
    {
        printf("%c",str[i]);
        printf("_");
    }

    return 0;
}


