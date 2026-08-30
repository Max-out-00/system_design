#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Customer.cpp"
#include <map>
#include "Booking.cpp"
using namespace std;

class BookingService{
    private:
    map <Customer*, Booking*> bookings;
    public:
        BookingService(Customer *customer , Booking *booking){
            bookings[customer] = booking;
        }
};