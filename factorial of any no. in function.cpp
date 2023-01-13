#include<stdio.h>
int factorial(int n)
{ int i,c=1;
 for ( i=1;i<=n;i++ )
  {  c=c*i;
  }
  printf("factorial of %d is ::::%d",n,c);
  
}
int main()
{ int a;
  printf("enter any number : ");
  scanf("%d",&a);
  
   factorial(a);
   
   return 0;
}
