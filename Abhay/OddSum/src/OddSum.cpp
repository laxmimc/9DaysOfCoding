//============================================================================
// Name        : OddSum.cpp
// Author      : Abhay
// Version     :
// Copyright   : Your copyright notice
// Description : Find the sum of squares of first N odd natural numbers.
//============================================================================

#include <iostream>
using namespace std;

int sqOddSum(int n);

int main() {
	int num,result;
	cout<<"Enter the max number"<<"\n";
	cin>>num;
	result = sqOddSum(num);
	cout<<"The sum of squares of first "<< num <<" odd natural numbers is : "<<result<<"\n";
	return 0;
}

int sqOddSum(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum = ((n * ((4*n*n)-1))/3);
		return (sum);
	}
}
