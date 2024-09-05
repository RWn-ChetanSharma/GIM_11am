#include<stdio.h>


// Break :- break Statement: Terminates the innermost loop or switch statement.

main(){
	
	int i = 0;
	
	while(i<=10){
		if(i==5){
			printf("Hey five \n");
			break;
		}
		printf("%d\n", i);
		i++;
	}
	
}
