#include<stdio.h>

/*
	For Loop
*/

main(){
/*	
	Syntax :- 
	
	for(initilization; condition; progress/process){
		A block of code to be executed 
	}
	
*/	

	int i;
	
//	for(i = 1; i<=10; i++){
//		printf("%d\n", i);
//	}

//	even number 

	for(i = 1; i<=10; i++ ){
//		if(i%2 == 0){    // even Number
			if(i%2 != 0){    // odd number
			printf("%d\n", i);
		} 
	}
	
	
}
