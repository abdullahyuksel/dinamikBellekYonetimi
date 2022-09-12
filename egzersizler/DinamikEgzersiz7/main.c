#include <stdio.h>
#include <stdlib.h>


void dizi_olustur(int *e,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        e[i]=rand()%50;
        printf("%d  ",e[i]);
    }
}

void dizi_sirala(int *e,int n)
{
    int i,j;
    int gecici;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {

            if(e[j]>e[j+1])
            {
                gecici=e[j];
                e[j]=e[j+1];
                e[j+1]=gecici;
            }
        }
    }
    printf("\nDizinin siralanmis hali:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",e[i]);
    }

}

void dizi_buyuk(int *e,int n)
{
    int i;
    int enb;
    enb=e[0];

    for(i=1;i<n;i++)
    {
        if(enb<e[i])
        {
            enb=e[i];
        }
    }

    printf("\nEn Buyuk :%d",enb);
}

int main()
{
    /*Bilgisayar tarafından N adet rastgele sayı üretilmesi,üretilen tamsayıların küçükten büyüğe doğru sıralanması
    için aşağıda verilenfonksiyon prototipleri kullanılmaktadır.Buna göre verilen fonksiyon prototiplerinden yarar
    lanarak ve dinamik bellek kullanarak uygun C programını yazınız.

    void dizi_olustur(int *,int );
    void dizi_sirala(int *,int);
    void dizi_buyuk(int *,int);*/

    int N;
    int *p;
    printf("Lutfen kac adet sayi uretilecigini giriniz\n");
    scanf("%d",&N);

    srand(time(0));

    p=(int *)malloc(N*sizeof(int));
    dizi_olustur(p,N);
    dizi_sirala(p,N);
    dizi_buyuk(p,N);
    free(p);

    return 0;
}
