#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    //p=(int *)malloc(10*sizeof(int));
   // p=(int *)malloc(40);
    p=(int *)calloc(10,sizeof(int));
    printf("%d\n",p[0]);

    p[0]=4;
    printf("%d\n",p[0]);
    free(p);


    return 0;
}



int a[10];
int *p=(int *)calloc(10,sizeof(int));


a[3]=5;
p[3]=5;








