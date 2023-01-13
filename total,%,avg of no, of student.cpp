#include<stdio.h>
int main()
{
	float A,B,C,D,E,F,G,H;
	printf("Numbers in MATHS=");
	scanf("%f",&A);
	printf("Numbers in PHYSICS=");
	scanf("%f",&B);
	printf("Numbers in CHEMISTRY=");
	scanf("%f",&C);
	printf("Numbers in ENGLISH=");
	scanf("%f",&D);
	printf("Numbers in HINDI=");
	scanf("%f",&E);
	F=A+B+C+D+E;
	printf("TOTAL NO.=%f\n",F);
	G=(A+B+C+D+E)*100/500;
	printf("PERCENTAGE=%f\n",G);
	H=(A+B+C+D+E)/5;
	printf("AVERAGE NO.=%f\n",H);
	if (F >450)
	{ printf(" GRADE = A");
	  }
    else 
    {  if ( 350<F>450)
          { printf(" GRADE = B");
		  }
	   else
	   { printf(" GRADE = C");
	   }
	}
   return 0;	
}

