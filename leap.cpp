/*
Author: Fatima Asif
Course: CSCI-135
Instructor: 
Assignment: leap.cpp, e.g., Lab1C

Write a program leap.cpp that asks the user to input an integer 
representing a year number (1999, 2016, etc.). If the input year is a 
leap year according to the modern Gregorian calendar, it should print
 Leap year, otherwise, print Common year.

In the modern Gregorian calendar, a year is a leap year if it is 
divisible by 4, but century years are not leap years unless they 
are divisible by 400. Here is the pseudocode:

if (year is not divisible by 4) then (it is a common year)
else if (year is not divisible by 100) then (it is a leap year)
else if (year is not divisible by 400) then (it is a common year)
else (it is a leap year)

This means that 2012, 2016, 2020, and 2040 are all leap years.
However, the century years 1800, 1900, 2100, 2200, 2300 and 2500 are NOT.
Yet, 2000, 2400, 2800 are still leap years.
*/

#include <iostream>
using namespace std;

int main()
{
    // creating a variable for the year
int year;
    // storing the users input in the variable
cout << "Please input a year number." << endl;
cin >> year;
    // if statement to determine if it is a leap year or not
if ( year % 4 != 0){
    cout << "It is a common year" << endl;
}
else if( year % 100 != 0){
    cout << "It is a leap year" << endl;
}
else if( year % 400 != 0){
    cout << "It is a common year" << endl;
}
else{
    cout << "It is a leap year" << endl;
}

}