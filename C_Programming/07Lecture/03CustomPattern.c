#include<stdio.h>

//Custom Pattern 


main(){
	
	int i, j;
	
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
//			printf("%d", j);
			printf("*");
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){
//			printf("%d", j);
			printf("*");
		}
		printf("\n");
	}
//	
	
	
	
//	*
//	**
//	***
//	****
//	*****
//	*****
//	****
//	***
//	**
//	*


//for(i=1; i<=5; i++){
//		for(j=1; j<=i; j++){
//			printf("%d", j);
////			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=1; i<=5; i++){
//		for(j=1; j<=5; j++){
//			printf("%d", j);
////			printf("*");
//		}
//		printf("\n");
//	}
	
	
	
	
}
