# include <stdio.h>
 
int main()
{
    int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
    scanf("%d",&a) ;
    printf("Enter three numbers : ") ;
    scanf("%d",&b) ;
    printf("Enter three numbers : ") ;
    scanf("%d",&c) ;
 
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", big) ;
    
    return 0;
}
