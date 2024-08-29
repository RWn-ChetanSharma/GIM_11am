#include<stdio.h>

/*
	Data type :- Data types are the type of data stored in a C program.
			=> Data types are used while defining a variable or functions in C.
			
		Four types Of Data Type :-
		
			Data Type  =  Format Specifiers
			
			1. int     =    %d
			2. float   =    %f
			3. char    =    %c
			4. string  =    %s
*/

main(){
	
	int a = 10;
	printf("a = %d\n", a);      // a = 10
	float b = 4.5;
	printf("b = %.2f\n", b);    // b = 4.50
	char c = 'A';
	printf("c = %c\n", c);      // c = A
	char str[100] = "Hello";
	printf("str = %s\n", str);  // str = Hello
	
}
