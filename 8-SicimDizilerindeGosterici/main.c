#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char *c[10]={"Bir","Iki","Uc"};

    for(i=0;i<3;i++)
    {
        printf("String: %s\n",c[i]);
    }

    return 0;
}
