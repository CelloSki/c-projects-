//
// Created by CelloSki on 2/26/2025.
//
//
//****************************************************************************
// Program Functionality and Purpose
// Determine the maximum value among three numbers.
//****************************************************************************

// header file
#include <iostream>

using namespace std;

// Named Constants


int main() {
    int x, y, z;

    cout << "Enter three integers separated by white space: ";
    cin >> x >> y >> z;
    cin.clear();

//assume that x is the biggest value
    if (x < y)
        if (y < z)
            cout << "The largest number is: " << z << endl;
        else
            cout << "The largest number is: " << y << endl;

    else
            cout << " The largest number is: " << x << endl;
    return 0;
}