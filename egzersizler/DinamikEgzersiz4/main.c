#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Bilgisayar tarafından rastgele üretilen N adet tamsayının belleğe,ardından bellekten okunan değerlerin
   sayi.txt text dosyasına yazılmasını ve dosyadan okunan değerlerin ekrana listelenmesini sağlayan C programını
   yazınız.*/


   FILE *dosya;
   int *p,N,i,c;

   printf("Kac adet tamsayi girilecek\n");
   scanf("%d",&N);
   p=(int *)malloc(N*sizeof(int));
   dosya=fopen("sayi.txt","w");
   srand(time(0));
   printf("Uretilen sayilar\n");

   for(i=0;i<N;i++)
   {
       *(p+i)=rand()%100;
       fprintf(dosya,"%d ",*(p+i));
       printf("%d ",*(p+i));
   }
   fclose(dosya);
   printf("Okunan sayılar\n");

   dosya=fopen("sayi.txt","r");
   do
   {
       c=getc(dosya);
       if(c !=EOF)
       {
           putchar(c);
       }

   }while(c != EOF);
   fclose(dosya);
   free(p);

    return 0;
}
