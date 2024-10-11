#include<stdio.h>

// Conditional Statement


main(){
	
	int age = 18;
	int num;
	
//	1. Condition => if(){}


//	 if(age >= 18){
//	 	printf("You can Drive.");
//	 }

//	2. Condition => if(){}...else{}


//	 if(age >= 18){
//	 	printf("You can Drive.");
//	 }
//	 else{
//	 	printf("You Can not Drive.");
//	 }


//	3. Condition => if(){}... else if(){}...else{}


//	 if(age > 18){
//	 	printf("You can Drive.");
//	 }
//	 else if(age < 18){
//	 	printf("You Can not Drive.");
//	 }
//	 else{
//	 	printf("Bhai tu abhi 18 ka hai, thoda ruk phir drive krna.");
//	 }

// 4. Switch case

// syntax 

//	switch (key) {
//        case value:
//            
//            break;
//    
//        default:
//            break;
//    }

	num = 4;
	switch (num) {
        case 1:
            printf("Your prefered language is English");
            break;
        case 2:
       	    printf("aapakee pasandeeda bhaasha hindi hai");
            break;
        case 3:
       	    printf("Tamari pasandagini bhaasha gujarati chhe");
            break;
    
        default:
        	printf("For English press 1, Hindi k liye 2 dabaye, gujarati maate 3 dabao");
            break;
    }
	
}
