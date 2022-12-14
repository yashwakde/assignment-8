#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=0;i<=3;i++)
    { k=1;
        for(j=0;j<=6;j++)
        {
           if( j<=4-i && j<=i  )
           { 
             printf("%d",k);
             if(j==3-i)
             {
                k++;
             }
             else
             {
               k--;
             }
           }
             else
            printf(" ");
        }
            printf("\n");
    }
      return 0;
 }
