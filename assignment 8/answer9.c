  #include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=0;i<=3;i++)
    { k=1;
        for(j=0;6-i>=j;j++)
        {
           if(i<=j )
           { 
             printf("%d",k);
             if(j<3)
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
