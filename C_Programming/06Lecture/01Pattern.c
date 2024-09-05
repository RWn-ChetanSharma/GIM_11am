#include<stdio.h>

// Pattern 

main(){
	int i,j;
	
	for(i=1; i<=5; i++){
		for(j= 1; j <= i; j++){
//			printf("Inner Loop");
			printf("%d", j);
		}
//		printf("outer Loop\n");
		printf("\n");
	}
	
	
}
