//============================================================================
// Name        : LinearSearch.cpp
// Author      : Abhay
// Version     :
// Copyright   : Your copyright notice
// Description : Write a program to search an element in the existing array?
//============================================================================
#include <iostream>
using namespace std;

int main(){
    int input[100], n, i, ele;

    cout << "Enter number of Elements in Array\n";
    cin >> n;

    cout << "Enter " << n << " elements \n";

    for(i = 0; i < n; i++){
        cin >> input[i];
    }

    cout << "Enter a element to search in Array\n";
    cin >> ele;

    for(i = 0; i < n; i++){
        if(input[i] == ele){
            cout << "Element found at index " << i;
            break;
        }
    }

    if(i == n){
        cout  << "Element Not Present in Input Array\n";
    }

    return 0;
}

