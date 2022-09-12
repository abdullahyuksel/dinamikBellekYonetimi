#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *ptr;

  int n;
  n=5;
  int i;
  printf("Girdigimiz sayi degeri %d\n",n);

  ptr=(int*)calloc(n,sizeof(int));

  if(ptr==NULL)
  {
      printf("Hafiza bolunmedi\n");
  }

  else
  {
      for(i=0;i<n;i++)
      {
          ptr[i]=i+1;
      }

      printf("Elemanlarim\n");
      for(i=0;i<n+5;i++)
      {
          printf("%d, ",ptr[i]);
      }
      free(ptr);

  }
    return 0;
}
