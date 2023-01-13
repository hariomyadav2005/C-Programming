#include<stdio.h>
int main()
{ int i,j,a,b;
  printf("enter no. of rows :");
  scanf("%d",&a);
  printf("enter no. of coloum :");
  scanf("%d",&b);
  int arr[a][b];
  for(i=0;i<a;i++)
  { for(j=0;j<b;j++)
   { printf(" enter element :");
   scanf("%d",&arr[i][j]);
  }}
  for(i=0;i<a;i++)
  { for(j=0;j<b;j++)
  
  { printf("%d\t",arr[i][j]);
   }
   printf("\n");
  }
  printf("\n");
  for(i=0;i<b;i++)
   { for( j=0;j<a;j++)
     { printf ("%d\t",arr[j][i]);
	 }
	  printf("\n");
   }
  return 0;
  
}
