/******************************************************
 Name: Mary Christine Oh
 Title: assignment1.cpp
 Description: This program calculates how many coins
    are needed to give the indicated amount of change
    of a rectangle.
 Time Spend: 30 mins
 Date: 09.03.14
 ******************************************************/

/*******************************************************************************
 Part 1.1
 a. 15
 b. -3
 c. 0
 d. 11

 Part 1.2
 a) Mystery has the value of 5.
 b) Mystery now has the value of 0.
 c) Mystery now has the value of 1.

 Part 1.3
 Names.cpp
 
 Prints a list of student names with their hometowns
 and intended major.

#include <iostream>
using namespace std;

int main()
{
    //-----------------------
    // main prints the list
    //-----------------------
    
    cout << endl;
    cout << "\tName\t\t\tHometown\t\t\tMajor\n";
    cout << "\t====\t\t\t========\t\t\t=====\n\n";
    cout << "\tMary\t\t\tManila\t\t\tBiomedical Engineering\n";
    cout << "\tCat\t\t\tManila\t\t\tPsychology\n";
    cout << "\tCedric\t\t\tManila\t\t\tCriminal Justice\n\n";
    
    return 0;
}
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int amt;
    cout << "Enter how much change you need (in cents): ";
    cin >> amt;
    
    int quarters, dimes, nickels, penny, sum;
    quarters = amt/25;
    dimes = (amt%25)/10;
    nickels = ((amt%25)%10)/5;
    penny = ((amt%25)%10)%5;
    sum = quarters + dimes + nickels + penny;
    
    cout << "\nFor " << amt << " cent(s) you need " << sum << " coin(s): \n\n";
    cout << "\t" << quarters << " quarter(s)\n";
    cout << "\t" << dimes << " dime(s)\n";
    cout << "\t" << nickels << " nickel(s)\n";
    cout << "\t" << penny << " penny(ies)\n";
    
    return 0;
}