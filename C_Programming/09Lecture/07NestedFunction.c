#include<stdio.h>


/*
	Nested Fucntion : A function Inside Another Function
*/

bye(){
	printf("Bye\n");
}
hi(){
	printf("Hi\n");
	bye();	
}

main(){
	hi();
}
