#include<stdio.h>

main(){
	int i, n;
	
	
	printf("Enter Array Lenght : ");
	scanf("%d", &n);
	
	int arr[n]; 
	for(i=0; i<n; i++){
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	printf("Resulting Array is display below \n");
	for(i=0; i<n; i++){
		printf("Value Stored at arr[%d] => %d\n", i, arr[i]);
	}
}
