#include<stdio.h>

// Pattern using Loop

main(){
	int i, j, k;
	
//With Space 
		for(i=1; i<=5; i++){   // row	
//			for space 	
			for(k=1; k<=i; k++){   // space
				printf(" ");
			}		
			for(j=5; j>=i; j--){
				printf("%d", j);   // col
			}
			printf("\n");
		}
}
