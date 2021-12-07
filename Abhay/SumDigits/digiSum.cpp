/*
 * digiSum.cpp
 *
 *  Created on: 07-Dec-2021
 *      Author: abhay
 *
 *      Find the sum of digits of a number using recursion.
 */
#include<iostream>
#include<stdio.h>
using namespace std;

int digisum(int n);

int main()
{
	int num,results;
	std::cout<<"Enter the number"<<"\n";
	cin>>num;
	results = digisum(num);
	cout<<"Sum of digits of "<<num<<" is : "<<results<<"\n";
	return 0;
}

int digisum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return (n % 10 + digisum(n/10));
}






