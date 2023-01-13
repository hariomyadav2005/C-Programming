#include<stdio.h>
int main ()
{ int i,j,n,sum=0;
   printf("enter last number of series :");
   scanf ("%d",&n);
   printf("\n\n");
    for (i=1;i<=n;i++)
    { if ( i%2==0)
	{
	printf("%d\t",i);
	sum =sum + i;
    }
    }
    
    printf ("\n\n   sum of this series is : %d",sum );
 
  return 0;
}
