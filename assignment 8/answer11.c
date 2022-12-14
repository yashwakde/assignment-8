#include<stdio.h>
int main()
{
    int i,j,k='A';
    for(i=0;i<=4;i++)
    { k='A';
        for(j=0;j<=8;j++)
        {
          if(j>=4-i && 4+i>=j)
         {
          printf("%c",k);
          if(j<4)
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
