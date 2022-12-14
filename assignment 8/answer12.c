#include<stdio.h>
int main()
{
    int i,j,k='A';
    for(i=0;i<=4;i++)
    { k='A';
        for(j=0;j<=6;j++)
        {
          if(j<=6-i && i<=j)
         {
          printf("%c",k);
          if(j<3)
          k++;
          else
          k--;
         }
         else 
          printf(" ");
        }
            printf("\n");
    }
      return 0;
 }
