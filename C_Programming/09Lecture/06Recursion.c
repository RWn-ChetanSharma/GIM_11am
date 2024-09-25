#include<stdio.h>

/*
	Recursion : A function calls it self.
	
		5*4*3*2*1 = 120
		4*3*2*1 = 24
*/

fact(int num){
	if(num < 1){
		return 1;
	}
	else{
		num = num * fact(num -1);
	}
}

main(){
	int n, result;
	
	printf("Enter Any Number : ");
	scanf("%d", &n);
	
	result = fact(n);
	printf("Factorial of %d is %d", n, result);
	
}
