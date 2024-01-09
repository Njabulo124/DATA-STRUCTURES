/*************************************************************************************
Author: Mdunjana N 218178778
*************************************************************************************
Assignment Question

The language of a computer called machine language is a sequence of 0s and 1s. When
you press the key A on the keyboard, 01000001 is stored in the computer. Also
collating sequence of A in the ASCII character set is 65.in fact the binary
representation of A is 01000001 and the decimal representation of A is 65. The
numbering system we use is called the decimal system or the base 10 system. The
numbering system that the computer uses is called the binary system or base 2
system. The purpose of this lab assignment is to write a function to convert a number
from base 2 to base 10. To convert a number from base 2 to base 10 we first find
the weight of each bit in the binary number. The weight of each bit in the binary
number is assigned from right to left. The weight of the rightmost bit is 0.the weight
of the bit immediately to the left of it is 2 and so on. Consider the binary number
1001101.
****************************************************************************************
Psuedo code

program start

FUNCTION binaryToDecimal(binaryString):
    stack = empty_stack()  # Create an empty stack to store binary digits
    decimalNumber = 0  # Initialize the decimal number to zero
    power = 0  # Initialize the power to zero
    
    FOR each character in binaryString FROM RIGHT TO LEFT:
        IF character is '1':
            digit = 1
        ELSE:
            digit = 0
        PUSH digit TO stack  # Push the binary digit onto the stack
        power = power + 1  # Increment the power
        
    WHILE stack is not empty:
        digit = POP stack  # Pop the top digit from the stack
        decimalNumber = decimalNumber + (digit * 2^power)  # Update the decimal number
        power = power - 1  # Decrement the power
        
    RETURN decimalNumber  # Return the equivalent decimal number

program end;
**************************************************************************************/


#include<iostream>
#include<cmath>
#define Max 10
using namespace std;

class StackFile{
private: 
	int stack[Max];
    int top;
    
public:
	 StackFile() : top(-1) {};
	 bool isEmpty();
	 bool isFull(); 
	 void showdata();
	 void push(int value);
	 int pop();
	 int binaryToDecimal(const string& binary);
	 

	 
};


