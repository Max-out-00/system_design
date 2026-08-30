#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer
{
private:
    string name;
    int phoneNumber;

public:
    Customer(string name, int phoneNumber)
    {
        this->name = name;
        this->phoneNumber = phoneNumber;
    }
    void displayCustomer()
    {
        cout << "Name : " << name << " | " << " Phone Number : " << phoneNumber << endl;
    }
};