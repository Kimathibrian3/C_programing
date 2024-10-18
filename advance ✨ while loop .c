// while loop
#include<stdio.h>

int main()
{
  int start,stop;
  int i=start& stop, sum=0;
   
  printf("Choose when to start :",i);
  scanf("%d",&start);
  printf("choose when to stop:",i); //i=0
  scanf("%d",&stop);
  
   do{
   
   printf("%d\n",i);
     i++;
    sum+=i;
    }
         while (i>=start&i<=stop);
         
         printf("The sum is %d",sum);
         

    return 0;
}