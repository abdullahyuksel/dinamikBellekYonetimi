#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[10];
    int *p=(int*)calloc(10,sizeof(int));

    a[3]=5;
    p[3]=5;


    printf("%d\n",a[3]);
    printf("%d",p[3]);
    return 0;
}
