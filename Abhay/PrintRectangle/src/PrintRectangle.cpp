//============================================================================
// Name        : PrintRectangle.cpp
// Author      : Abhay
// Version     :
// Copyright   : Your copyright notice
// Description : Write a program to display a solid and hollow rectangle.
//============================================================================

#include <iostream>
using namespace std;

void printRectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n ||
                j == 1 || j == m)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

}

void printRectangleSolid(int n, int m)
{
    int i, j;
    cout<<"-----------------------------------------------------------------"<<endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
        	cout<<"*";
        }

        cout << endl;
    }

}



int main()
{
    int rows, columns;
    cout<<"enter rows and columns"<<"\n";
    cin>>rows>>columns;
    printRectangle(rows, columns);
    printRectangleSolid(rows,columns);
    return 0;
}
