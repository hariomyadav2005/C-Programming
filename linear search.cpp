#include<stdio.h>
int main()
{ int a[100],size,find,count=0;
 printf("enter the size: ");
 scanf("%d",&size);
 
 for (int i=0;i<size;i++)
 {printf("enter the elements:");
  scanf("\t%d",&a[i]);
 }
 printf("\n enter the element wants to find :");
 scanf("%d",&find);
 for (int i=0;i<size;i++)
  { if (a[i]==find)
  {
  	printf("\n\t\t find at index :%d",i);
  	count++;
  }
  }
  if (count==0)
  { printf("\n\t element not found");
  }
  else
  { printf("\n\t\t element frequency of %d is %d ", find,count);
  }
  
}
