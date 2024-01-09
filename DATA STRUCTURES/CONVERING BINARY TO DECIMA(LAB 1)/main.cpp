#include<iostream>
#include<cmath>
#include "Header.h"
using namespace std;

int main(){
	StackFile stack;
	
	
	
	for(int i = 1; i<=10; i++){
	string binary;
    cout << "Enter a binary number "<<i<<": ";
	
    cin >> binary;

    int decimal =  stack.binaryToDecimal(binary);

    if (decimal != -1) {
        cout << "The equivalent decimal number is: " << decimal << endl;
    }
    cout<<endl;
}
    

    return 0;
}

