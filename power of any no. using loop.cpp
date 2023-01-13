#include<stdio.h>
int main()
{  int i,a,b, total =1 ;
 printf("enter any number :");
 scanf("%d",&a);
 printf("enter power of %d :",a);
 scanf("%d",&b);
for (i=0;i<b;i++)
 {  total = total*a; 
 } 
  printf(" %d to the power %d is : %d",a,b,total);
 return 0; 
}
