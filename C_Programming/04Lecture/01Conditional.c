#include<stdio.h>

/*
	Conditional Statements :- 
		1. if...
		2. if ... else...
		3. if .... else if ....else...   (ladder if else)
		4. Nested If else
		5. Ternary Operator (? , :)
		6. switch case
*/


main(){
//	1. if...

	int a = 10;
	int b = 10;
	int c = 20;
	
//	Syntax  :- 

//	if(condition){
		// code to be executed 
//	}

	if(a == b){
		printf("A is Equal to B.\n");
	}
	
//	2. if ... else...

//	Syntax  :- 

/*	
	if(condition){
	 	code to be executed 
	}
	else{
		code to be executed 
 	}
*/	

	if(a == c){
		printf("A is equal to C.\n");
	}
	else{
		printf("A is not eqaul to C.\n");
	}
}
