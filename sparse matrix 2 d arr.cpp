#include<stdio.h>
int main()
{ int i,j,a,b,zero =0;
 printf("enter no. of rows :");
 scanf("%d",&a);
 printf("enter no. of coloum :");
 scanf("%d",&b);
 int arr[a][b];
  int total = a*b;
  
for (i=0;i<a;i++)
 { for(j=0;j<b;j++)
  { printf(" enter element :");
    scanf("%d",&arr[i][j]);
  }
 }
 for (i=0;i<a;i++)
 { for(j=0;j<b;j++)
  {   if(arr[i][j]==0)
    {  zero=zero+1;
    }
  }
 }
 if (zero>=(total/2))
  { printf("\n  \t sparse matix");
  }
  else
  { printf("\n   \t not sparse matrix");
  }
  
return 0;
}
