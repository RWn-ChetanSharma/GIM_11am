#include<stdio.h>

// Take Nothing Return Something (TNRS)

// Function Decalration 

void greetSomthing(){
	printf("Before");
	return printf("Namaste Bharat.\n");   
	printf("After");  
//	 After Return Statement Nothing will print or no program will excecute.
}

main(){
//	Function Calling 

	greetSomthing();
}

