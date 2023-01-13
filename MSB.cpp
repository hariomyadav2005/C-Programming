#include<stdio.h>
int main()
{ int x,a,m,b;
 printf("enter any no.=");
 scanf("%d",&x);
 a=sizeof(int)*8;
 b=1<<(a-1);
 m=b&x;
 if(m)
 {printf("set MSB");
 }
 else{ printf("unset");
 }
 return 0;
 
}
