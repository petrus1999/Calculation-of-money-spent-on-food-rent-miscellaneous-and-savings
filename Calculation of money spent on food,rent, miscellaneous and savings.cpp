// Calculation of money spent on food,rent, miscellaneous and savings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
    double foodspend, Rentspend, miscspend, savings, salary;

    cout << "Enter your salary" << endl;
    cin >> salary;

    foodspend = salary / 2;
    Rentspend = salary / 15;
    miscspend = salary / 10;
    savings = salary - (foodspend + Rentspend + miscspend);

    cout << "The money spend on food is :" << foodspend << endl;
    cout << "The money spend on rent is :" << Rentspend << endl;
    cout << "The money spend on miscellaneous is :" << miscspend << endl;
    cout << "The money spend on savings is :" << savings << endl;

    return 0;
    

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
