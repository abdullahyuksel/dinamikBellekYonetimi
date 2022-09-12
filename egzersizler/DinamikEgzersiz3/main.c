#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanıcı tarafından girilen iki adet tamsayı için farklı bellek bölgelerinde yer ayrılmaktadır.Buna
    göre bu iki bellek bölgesinde yer alan sayıların yerlerinin değiştirilmesini sağlayan C programını
    yazınız.*/


    int *p1,*p2,gecici;
    p1=(int *)malloc(sizeof(int));
    p2=(int *)malloc(sizeof(int));

    printf("Birinci sayi\n");
    scanf("%d",&(*p1));

    printf("Ikinci sayi");
    scanf("%d",&(*p2));


    printf("Sayi1 =%d Sayi2 =%d\n ",*p1,*p2);


    gecici=*p1;
    *p1=*p2;
    *p2=gecici;


    printf("Sayi1 =%d Sayi2 =%d",*p1,*p2);

    free(p1);
    free(p2);

    return 0;
}
