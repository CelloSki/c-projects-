//
// Created by CelloSki on 2/26/2025.
//
//****************************************************************************
// Program Functionality and Purpose
// Swapping of two values
//****************************************************************************

// header file
#include <iostream>

using namespace std;

int main() {
// Declare variables
    int a, b;

//prompt user to enter two values.
    cout << "Please enter the Value for A: ";
    cin >> a;
    cin.clear();
    cout << endl;

    cout << "Please enter the Value for B: ";
    cin >> b;
    cin.clear();
    cout << endl;

//Before swap
    cout << "The values for A: " << a << " and B: " << b << " before swap." << endl;

//swapping values
    a = a + b;
    b = a - b;
    a = a - b;

//After swapping
    cout << "The values for A: " << a << " and B: " << b << " after swap." << endl;

    return 0;
}