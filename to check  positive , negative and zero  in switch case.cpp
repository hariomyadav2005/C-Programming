#include<stdio.h>
int main()
{
	int a;
	printf("Enter any Number: ");
	scanf("%d",&a);

	switch(a > 0)
	{
	case 1 : printf("\n  Number is Positive");
				 break;

	case 0 : if(a < 0)
				 {
				 	printf("\n  Number is Negative");
				 }
				 else
				 {
				 	printf("\n  Number is Zero");
				 }
				 break;
	}

	return 0;
}
