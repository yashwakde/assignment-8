#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
       
        for(j=0;j<=7;j++)
        {
            if( j>=4-i && j<=4+i)
            printf("*");
           
            else
            printf(" ");
           
        }
        printf("\n");
    }
     for(i=0;i<=5;i++)
    {
       
        for(j=0;j<=8;j++)
        {
            if(i<=j && j<=8-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

}