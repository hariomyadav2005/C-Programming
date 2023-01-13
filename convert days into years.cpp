#include <stdio.h> 
int main()
{
    int days, years, weeks;

    printf("enter days :");
	scanf("%d",&days); 
	
    years = days/365; 
    weeks = (days % 365)/7;
    printf("\t\t Years: %d\n", years);
    printf("\t\tWeeks: %d\n", weeks);
    
    return 0;
}
