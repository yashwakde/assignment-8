#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
  
        for(j=0;j<=8;j++)
        {
           if(j<=8-i && i<=j)
           { 
            printf("*");
            
           }
            else
           { 
            printf(" ");
           }
        }
        printf("\n");
    }
}