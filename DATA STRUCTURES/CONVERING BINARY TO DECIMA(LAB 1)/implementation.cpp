#include "Header.h"


bool StackFile :: isEmpty(){
	return top == -1;
} 

bool StackFile :: isFull(){
	return top == Max - 1;
}

void StackFile :: push(int value){
	if (!isFull()) {
	    stack[top++] = value;
    } else {
            cout << "Stack overflow." <<endl;
        }
}

int StackFile :: pop(){
	if (!isEmpty()) {
	    	top--;
            return stack[top];
        } else {
            cout << "Stack underflow." <<endl;
            return -1; // Return a sentinel value for an empty stack
        }
}

int StackFile :: binaryToDecimal(const string& binary){
    // Push each bit onto the stack
     for (size_t i = 0; i < binary.size(); ++i) {
        char bit = binary[i];
        
        if (bit == '0' || bit == '1') {
            push(bit - '0'); // Convert char '0' or '1' to int 0 or 1
        } else {
            cout << "Invalid binary digit: " << bit <<endl;
            return -1; // Exit with an error
        }
    }
    
    int decimal = 0;
    int weight = 0;

    // Process bits from the stack
    while (!isEmpty()){
        int bit = pop(); //this take take out each binary from the string
        decimal += bit * static_cast<int>(pow(2, weight)); // Calculate the decimal value
        weight++;
    }

    return decimal;
}

void StackFile :: showdata(){
	if(isEmpty()){
		cout<<"Sorry your stack is empty"<<endl;
	}else{
		for(int i=0; i<=top; i++){
			cout<<stack[i]<<endl;
		}
	}
	
}


 
