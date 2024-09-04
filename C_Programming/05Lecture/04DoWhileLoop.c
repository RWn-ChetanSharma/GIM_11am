#include<stdio.h>


// do while loop

main(){
	/*
		Syntax :-
	
		initilization
		
		do{
			A block of code to be executed 
		
			progress/process
		}while(condition)
	*/
	
	
	int i = 1;
	
	do{
	
		if(i%2==0){
		printf("%d\n", i);
		}
		i++;
	}
	while(i<=10);
	
}

