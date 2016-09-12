//
//  minor1.c
//  Systems_programming 3600
//
//  Created by Brashad Hasley on 9/5/16.
//  Copyright © 2016 Outofit_. All rights reserved.
//
/*   this program will be running a ASCII value print out 
    from Decimal to binary. It will take in a single user input and print its
    ASCII value out then it will end.

 */
#include <stdio.h>
#include <stdlib.h>

void ASCII_print(char user_input);
long conv_tobin(long int a);

int main(int argc, const char * argv[]) {
    // this will run the program to print out the ASCII value from Decimal to Binary.
    char user_input1;
    printf("Enter an ASCII character:");
    scanf("%c",&user_input1);
    ASCII_print(user_input1);// this is the call to my ASCII function that will print out the desired values
    
    return 0;
}
// the pring function.
void ASCII_print(char user_input){
    printf("ASCII value of %c is:" , user_input);
        printf("\ndec-- %d", user_input);// the %d automatically gives the decimal value of a char which is a ACII
        long int decimalNumber = user_input;
        printf("\nhex-- %hhX", user_input);// the %hhX or X will print the value ASCII in base 16
    
        printf("\noct-- %o", user_input);// the %O or %o will print out the ocata ASCII value base 8
    
            decimalNumber = user_input;// this puts the ASCII value into a int variable to be used
                                           // in my binary conversion function.
        printf("\nbin-- 0%ld",conv_tobin(decimalNumber));// I couldnt find the base 2 % conversion if one exist
                                            //so i created a function to do the conversion from decimal to binary.
    
}
// this function converts the decimal ASCII value into a binary value
long conv_tobin(long int bin){
    long bin_complete = 0; //this is used to store a binary number
    int remainder;// simple base 2 conversion occures
    long i = 1;
    while(bin != 0) {
        remainder = bin%2;
        bin = bin/2;
        bin_complete = bin_complete + (remainder * i);
        i = i*10;
    }
    return bin_complete; //returns the full binary with no leading zero.
}