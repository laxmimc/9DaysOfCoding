//============================================================================
// Name        : BinaryToDecimal.cpp
// Author      : Abhay
// Version     :
// Copyright   : Your copyright notice
// Description : Write a program to convert BINARY to DECIMAL?
//============================================================================
#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int main()
{
    int num;
    cout<<"enter the binary number"<<"\n";
    cin>>num;

    cout << binaryToDecimal(num) << endl;
}
