#include<stdio.h>
int main()
{ int a,b,c;
  printf("enter number=",a);
  scanf("%d",&a);
  printf("enter number=",b);
  scanf("%d",&b);
  printf("the number is =%d%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("after swaping the number is=%d%d",a,b);
  return 0;
}
