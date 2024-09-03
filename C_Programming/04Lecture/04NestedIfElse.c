#include<stdio.h>

// Nested If... else...

main(){

/*
	Syntax :- 
	
		if(condition){
//			code to be executed
			if(condition){
//				code to be executed
			}
			else{
//				code to be executed
			}
		}
		else{
//				code to be executed
			if(condition){
//				code to be executed
			}
			else{
//				code to be executed
			}
		}
	
*/		
	int a = 0;
	
	
	if(a>0){
		printf("a is greater than zero.");
	}
	else{
		if(a<0){
			printf("a is smaller than zero.");
		}
		else{
			printf("A is equal to zero.");
		}
	}
	
}
