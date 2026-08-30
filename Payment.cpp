#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "PaymentType.cpp"
#include "PriceCalculator.cpp"

using namespace std;

class Upi : public PaymentType
{
private:
    string upiId;

public:
    Upi(string upiId)
    {
        this->upiId = upiId;
    }
    void pay(Movie movie, Show show, Seat seat, int amount, string paymentMode)
    {
        PriceCalculator priceCalculator(movie, show, seat);
        int totalPrice = priceCalculator.calculatePrice();
        cout << "Payment of " << amount << " made using UPI ID: " << upiId << endl;
        cout << "Total price: " << totalPrice << endl;
    }
    int getType()
    {
        return 1;
    }
};

class card : public PaymentType
{

private:
    string cardNumber;
    string cardHolderName;
    string expiryDate;
    string cvv;

public:
    card(string cardNumber, string cardHolderName, string expiryDate, string cvv)
    {
        this->cardNumber = cardNumber;
        this->cardHolderName = cardHolderName;
        this->expiryDate = expiryDate;
        this->cvv = cvv;
    }
    void pay(Movie movie, Show show, Seat seat, int amount, string paymentMode)
    {
        PriceCalculator priceCalculator(movie, show, seat);
        int totalPrice = priceCalculator.calculatePrice();
        cout << "Payment of " << amount << " made using Card: " << cardNumber << endl;
        cout << "Total price: " << totalPrice << endl;
    }
    int getType()
    {
        return 2;
    }
};

class Cash : public PaymentType
{
public:
    void pay(Movie movie, Show show, Seat seat, int amount, string paymentMode)
    {
        PriceCalculator priceCalculator(movie, show, seat);
        int totalPrice = priceCalculator.calculatePrice();
        cout << "Payment of " << amount << " made using Cash" << endl;
        cout << "Total price: " << totalPrice << endl;
    }
    int getType()
    {
        return 3;
    }
};