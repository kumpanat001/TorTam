#include <stdio.h>
int main(){
	float high, base, A= 0.5 ;
	printf("Triangle Area Calulator\n") ;
	printf("Enter High :") ;
	scanf("%f",&high) ;
	printf("Enter Base :") ;
	scanf("%f",&base) ;
	printf("Area of Triangle = %.2f\n",A*(high*base)) ;
	printf("--------------------------------\n") ;
	
	float P=3.14, R ;
	printf("Circle Area Calulator\n") ;
	printf("Enter Radius :") ;
	scanf("%f",&R) ;
	printf("Area of Circle = %.2f\n",P*(R*R)) ;
	printf("--------------------------------\n") ;

	float Side ;
	printf("Square Area Calulator\n") ;	
	printf("Enter Side :") ;
	scanf("%f",&Side) ;
	printf("Area of Squar = %.2f\n",Side*Side) ;
	printf("--------------------------------\n") ;
	
	
	return 0 ;
	
}
