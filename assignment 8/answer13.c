#include<stdio.h>
int main()
{
    int i,j,n='A';
    for(i=0;i<=6;i++)
    {
        n='A';
       
        for(j=0;j<=12;j++)
        {
            if( j==7 && i==0)
          {  n=n-2;
            printf("%c",n);
          }
            else if( j>=0 && j<=6-i)
            printf("%c",n++);
            else if(j>=6+i && j<=12)
            printf("%c",--n);
            else
            printf(" ");
        }      
        printf("\n");
    }
    }