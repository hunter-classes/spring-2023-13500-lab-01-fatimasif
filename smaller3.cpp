/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: smaller3.cpp, Lab-01

Write a program smaller3.cpp that asks the user to input three 
integer numbers, and prints out the smallest of the three.

(Hint: There are many possible solutions here. 
One possible strategy: Given numbers x, y, and z, you can
 first compare x and y, take whichever is smaller and compare it with z.)
*/

#include <iostream>
using namespace std;

int main()
{
    // creating variables to store the numbers
int num1;
int num2;
int num3;
    // storing the numbers that the users inputs in the variables
 cout << "Input a number!" << endl;
 cin >> num1;
 cout << "Input a second number!" << endl;
 cin >> num2;
 cout << "Input a third numer!" << endl;
 cin >> num3;
    // using an if-else statement to compare the numbers
 if (num1 > num2 && num3 > num2){
    cout << num2 << " is the smallest number." << endl;
 } 
 else if (num2 > num1 && num3 > num1) {
    cout << num1 << " is the smallest number." << endl;
 }
 else{
    cout << num3 << " is the smallest number." << endl;
 }

}