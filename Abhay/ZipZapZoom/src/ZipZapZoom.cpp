//============================================================================
// Name        : ZipZapZoom.cpp
// Author      : Abhay
// Version     :
// Copyright   : Your copyright notice
// Description : Write a program for ZIP, ZAP and ZOOM game:
//1. If the number is multiple of 3 to display “ZIP”
//2. If the number is multiple of 5 to display “ZAP”
//3. If the number is multiple of 3 and 5 to display “ZOOM”
//4. If it does not satisfy any of the above conditions, display “INVALID
//============================================================================

#include <iostream>
using namespace std;
void check(int n)
{
	if (n % 3 == 0 && n % 5 == 0) {
		cout << "ZOOM" << "\n";
	}
	else if (n % 3 == 0) {
		cout << "ZIP" << "\n";
	}
	else if (n % 5 ==0) {
		cout << "ZAP" << "\n";
	}
}
int main() {
	int num;
	while(1) {
		cout << "enter a number" << endl;
		cin >> num;
		if(num == 0)
		{
			return 0;
		}
		check(num);
	}

	return 0;
}
