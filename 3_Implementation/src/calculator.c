/**
 * @file calculator.c
 * @brief Mathematical Operations of calculator
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "calculator.h"

int main()  
{  
    // declaration a local variable op;  
    int option;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Add  \t \t 2 Subtract \n 3 Multiply \t \t 4 Divide \n 5 Square \t \t 6 Sqrt \n 7 cube \t 8 EXIT \n Please, Make a choice ");      
          
        scanf ("%d", &option); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (option)  
    {  
        case 1:  
            addition(); /* It call the addition() function  to add the given numbers */  
            break; // break the function  
              
        case 2:  
            subtract(); /* It call the subtract() function  to subtract the given numbers */  
            break; // break the function  
              
        case 3:  
            multiply(); /* It call the multiply() function  to multiply the given numbers */  
            break; // break the function  
              
        case 4:  
            divide(); // It call the divide() function  to divide the given numbers  
            break; // break the function  
              
        case 5:  
            sq(); // It call the sq() function  to get the square of given numbers  
            break; // break the function   
        case 6:  
            sqrt(); // It call the sqrt() function  to get the square root of given numbers  
            break; // break the function 
        case 7:  
            cube(); // It call the cube() function  to get the cube of given numbers  
            break; // break the function                               
        case 8:  
            exit(0); // It call the exit() function  to exit from the program  
            break; // break the function  
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n **************** \n ");  
    } while (option != 6);  
      
  
    return 0;

}  
