#include<stdio.h>
int main ()
{ int i,j,a,b,sum =0;
  printf("enter no. of row :");
  scanf ("%d",&a);
  printf("enter no. of coloum :");
  scanf("%d",&b);
  int arr[a][b];
  for(i=0;i<a;i++)
  { for(j=0;j<b;j++)
     {   printf("enter element :");
	      scanf("%d",&arr[a][b]);
		  sum =sum + arr[a][b]; 
    }
  }
  
  printf("the sum this array is :%d",sum);
  
  return 0;
  
 } 
