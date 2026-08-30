#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Movie.cpp"
#include "Show.cpp"
#include "Seat.cpp"

using namespace std;

class PaymentType {
    int type; // 1 for UPI, 2 for Card, 3 for Cash
    public:
        virtual void pay(Movie movie, Show show, Seat seat, int amount, string paymentMode) = 0;
        virtual int getType() {
            return type;
        }
};