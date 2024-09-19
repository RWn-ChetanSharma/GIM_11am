#include<stdio.h>

// 2D Array

main(){
	int a[3][3] = {
					{10, 20, 30},
					{40, 50, 60}, 
					{70, 80, 90}
				};
	int i, j;
	/*	  row, col  => a[0][0] = 10 
					=> a[0][1] = 20 
					=> a[0][2] = 30 
					=> a[1][0] = 40 
					=> a[1][1] = 50 
					=> a[1][2] = 60 
					=> a[2][0] = 70 
					=> a[2][1] = 80 
					=> a[2][2] = 90 
	
	*/
	
//	printf("%d\n", a[0][0]);
//	printf("%d\n", a[0][1]);
//	printf("%d\n", a[0][2]);
//	printf("%d\n", a[1][0]);
//	printf("%d\n", a[1][1]);
//	printf("%d\n", a[1][2]);
//	printf("%d\n", a[2][0]);
//	printf("%d\n", a[2][1]);
//	printf("%d\n", a[2][2]);


	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("a[%d][%d] => %d\n", i,j, a[i][j]);
		}
	}
	
}
