#include<stdio.h>
void main()
{
     int i,j,n=5;
     //printf("enter n : ");
     //scanf("%d",&n);
     for(i=1;i<=n;i++)
   {
        // for(j=1;j<=n-1;j++)
            //{
             //  printf(" ");
            // }
         for(j=1;j<=i;j++)
         {
            if(i%2==0){
                printf("#");
            }else{
                printf("*");
            }
         }
         printf("\n");
    }
}
