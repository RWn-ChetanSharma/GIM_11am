#include<stdio.h>

// Pattern using Loop

main(){
	int i, j, k;
	
	
//	Without Space 


	for(i=1; i<=5; i++){   // row
//		printf("%d\n", i);
		for(j=5; j>=i; j--){
			printf("%d", j);   // col
//			printf("*");
		}
		printf("\n");
	}


}
