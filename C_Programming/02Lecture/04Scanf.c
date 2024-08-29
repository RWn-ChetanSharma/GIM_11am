#include<stdio.h>

/*
	scanf  :- The scanf() is a function used for take input from the user on console.
*/

main(){
	int a, b, sum;
	
	printf("Enter value of a : ");
	scanf("%d", &a);   // &a => address of a
	printf("\nEnter value of b : ");
	scanf("%d", &b);
	
	sum = a + b;
	printf("\nSum of %d and %d is : %d", a, b, sum);
	
	
	
}
