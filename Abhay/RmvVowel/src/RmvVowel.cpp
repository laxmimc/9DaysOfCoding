//============================================================================
// Name        : RmvVowel.cpp
// Author      : Abhay
// Version     :
// Copyright   : Your copyright notice
// Description : Write a program to remove vowels from string.
//============================================================================
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int vowCheck(char);
int main(){
   char s[50], t[50];
   int c, d = 0;
   cout<<"Enter a string to delete vowels\n";
   cin>>s;
   for(c = 0; s[c] != '\0'; c++) {
      if(vowCheck(s[c]) == 0){
         t[d] = s[c];
         d++;
      }
   }
   t[d] = '\0';
   strcpy(s, t);
   cout<<"String after delete vowels:"<<s;
   return 0;
}
int vowCheck(char ch){
   if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
      return 1;
   else
      return 0;
}
