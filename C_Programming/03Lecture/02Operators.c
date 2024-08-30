#include<stdio.h>

/*
	Operator :- An operator is a symbol that represents a specific operation 
			    on one or more operands.
			    
	Types of operator =>	    
		1. Arithmetic Operators: +, -, *, /, %
		2. Unary Operators: ++, - -
		3. Relational Operators: <, < =, >, > =, ==, !=
		4. Logical Operators: &&, ||, !
		5. Assignment Operators: =, +=, -=, *=, /=, %=
		6. Bitwise Operators: &, |, <<, >>, ~, ^
		7. Ternary Operator: ?:
		8. Miscellaneous Operators: sizeof, & (Address of), * (Pointer dereference)		    
*/


main(){
	
	int a, b;
	
	a = 10;
	b = 20;

//	1. Arithmetic Operators: +, -, *, /, %

//	printf("a + b = %d\n", a+b);
//	printf("a + b = %d\n", a-b);
//	printf("a + b = %d\n", a*b);
//	printf("a + b = %d\n", a/b);
//	printf("a + b = %d\n", a%b);
	
	
//	2. Unary Operators: ++, - -

//	printf("Post Increment of a++ = %d and a = %d\n",a++, a);  // Post Increment
//	printf("Pre Increment of ++a = %d and a = %d\n",++a, a);  // Pre Increment
	
	
//	5. Assignment Operators: =, +=, -=, *=, /=, %=

	a += 5; // a = a + 5;
	printf("a += 5 = %d\n", a);	
}
