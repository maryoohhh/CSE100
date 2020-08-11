/*******************************************************************************
// Author: Mary Oh
// Filename: lab2.cpp
// Description: Prints how many small (1x1) and big (2x2) brownies can be made
//              in a pan.
// For: CSE 100 - Lab #2
// Time Spent:
*******************************************************************************/

/*******************************************************************************
// 1. 99bottles, r&d
//
// 2. tab over, new line, prints \, prints "
//
// 3.
// #include <iostream>
// using namespace std;
//
// int main()
// {
//      int weight;
//
//      cout << "Please input your weight (in lbs): ";
//      cin >> weight;
//
//      cout << "\nYour weight is " << weight << " lbs.\n\n";
//
//      return 0;
//  }
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "\tWelcome to the Brownie Program\n\n";
    
    int length, width;
    
    // getting input for length
    cout << "Please enter the length of the pan (in inches): ";
    cin >> length;
    
    // getting input for width
    cout << "Please enter the width of the pan (in inches): ";
    cin >> width;
    
    // calculating number of brownies
    int area = length * width;
    int small = area;
    int big = area/4;
    
    //displaying results    
    cout << "\nA " << length << "\" by " << width << "\" pan can hold "
         << small << " small (1x1) brownies and " << big << " large (2x2) brownies.\n\n";
    
    return 0;
}