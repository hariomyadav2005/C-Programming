#include<stdio.h>
#include<string.h>

void length( char x)
{ int k;
  k= strlen('x');
  printf("the length of number is %d",k);
}
int main ()
{ int i,n,k,count=0,c;
   printf("enter any number :");
   scanf ("%d",&n);
   length (n);
   printf("enter any digit to count frequency :");
   scanf ("%d",&c);
   
   printf("\n\n");
   
    for (i=0;i<k;i++)
    { if ( i==c)
	   count =count + 1;  
    }
    
    printf ("\n\n  frequency of digit %d is : %d",c,count );
 
  return 0;
}
