// C Calculator which makes some basic arthematic like addition,subtraction,multiplication,Division
 // and also square of a number,square root and also cube of a given number.  
                    
#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int main()  
{  
    // declaration of local variable op;  
    int op, n1, n2;  
    float result;  
    char ch;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Cube \t \t 8 Exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            // Addition of two numbers  
            printf (" You have choosen: Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            result = n1 + n2; // Add two numbers  
            printf (" Addition of two numbers is: %.2f", result);  
            break; // break the function  
              
        case 2:  
            // Subtraction of two numbers  
            printf (" You have choosen: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            result = n1 - n2; // subtract two numbers  
            printf (" Subtraction of two numbers is: %.2f", result);  
            break; // break the function  
              
        case 3:  
            // Multiplication of the numbers  
            printf (" You have choosen: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            result = n1 * n2; // multiply two numbers  
            printf (" Multiplication of two numbers is: %.2f", result);  
            break; // break the function  
              
        case 4:  
            // Division of the numbers  
            printf (" You have choosen: Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%d", &n2);        
                }  
            result = n1 / n2; // divide two numbers  
            printf (" Division of two numbers is: %.2f", result);  
            break; // break the function  
              
        case 5:  
            // square of a number  
            printf (" You have choosen: Square");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
  
            result = n1 * n1; // get square of a number  
            printf (" Square of %d number is: %.2f", n1, result);  
            break; // break the function  
              
        case 6:  
            // square root of a number  
            printf (" You have choosen: Square Root");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
              
            result = sqrt(n1); // use sqrt() function to find the Square Root   
            printf (" Square Root of %d numbers is: %.2f", n1, result);  
            break; // break the function  
            
        case 7:  
            // cube of a number  
            printf (" You have choosen: cube");  
            printf ("\n Enter Number: ");  
            scanf (" %d", &n1);  
  
            result = n1 * n1 * n1; // get cube of a number  
            printf (" cube of %d number is: %.3f", n1, result);  
            break; // break the function           
        
        case 8: 
            printf (" You have choosen: Exit"); 
            printf(" \nThankyou have a nice day ");
            exit(0); 
            break; // break the function  
            
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n -------------------------------------- \n ");  
    } while (op != 999);  
  
    return 0;        
}  