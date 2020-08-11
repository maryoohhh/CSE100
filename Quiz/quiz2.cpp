#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your height with a space between the feet and inches: ";
    
    int feet;
    int inch;
    int height;
    
    cin >> feet;
    cin >> inch;
    
    height = (feet * 12) + inch;
    
    cout << "\nYou are " << height << " inch tall.\n\n";
    
    return 0;
}
