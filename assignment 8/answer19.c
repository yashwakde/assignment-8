#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
       
        for(j=0;j<=18;j++)
        {
            if( (j>=2-i) && (j<=6+i) || (j>=12-i) && (j<=16+i) )
           { 
            printf("*");
           }
            else
            printf(" ");
           
        }
        printf("\n");
    }
     for(i=0;i<=9;i++)
    {
       
        for(j=0;j<=18;j++)
        {
            if(i<=j && j<=18-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}