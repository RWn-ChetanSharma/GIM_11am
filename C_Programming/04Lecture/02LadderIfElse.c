#include<stdio.h>

// Ladder if else

main(){
	int age = 10;
	
	if(age < 100 && age > 18){
		printf("You Can Drive.");
	}
	else if(age == 18){
		printf("let's wait for some time.");
	}
	else if (age > 0 && age < 18){
		printf("You can't Drive.");
	}
	else{
		printf("Invalid Age.");
	}
	
}
