#include<stdio.h>

/*
    Continue Statement :- Skips the rest of the loop’s code for the current 
						iteration and jumps to the next iteration..
*/


main(){
	
	int i;
	
	for (i = 1; i <= 10; i++) 
	{
	    if (i%2 != 0) 
	    {
//	    	printf("Hey Continue");
	        continue; // skips even numbers
	    }
	    printf("%d\n", i);
	    // code here is skipped for even numbers
	}
	
}

