//
//  main.cpp
//  Book Exercise 4.23 - Check SSN
//
//  Created by ax on 9/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main() {
    
    string ssn_input = " ";
    
    cout << "Enter SSN: ";
    
    // enter ssn
    getline(cin, ssn_input);

    cout << ssn_input.length() << endl;
    
    bool test_result = 1;
    
    if (ssn_input[3] != '-' || ssn_input[6] != '-') {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[0]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[1]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[2]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[4]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[5]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[7]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[8]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[9]))) {
        test_result  = 0;
    } else if (!(isdigit(ssn_input[10]))) {
        test_result  = 0;
    }
    
    cout << "SSN " << ssn_input << " is ";
    
    if (test_result) {
        cout << "a valid";
    } else {
        cout << "an invalid";
    }
    
    cout << " social security number" << endl;
    
    return 0;
}
