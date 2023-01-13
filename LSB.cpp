#include<stdio.h>
int main ()
{ int x,a;
printf("enter any no.=");
scanf("%d",&x);
a=x&1;
if(a==1)
{ printf("set LSB");}
  else{ printf("unset");
}

return 0;
}
