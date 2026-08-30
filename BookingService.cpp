#include <iostream>
#include <string>
#include <vector>
#include "Customer.cpp"
#include "Booking.cpp"
using namespace std;

class BookingService{
    map<Customer*, Booking*> bookings;
    public:
        BookingService(Customer *customer , Booking *booking){
            bookings[customer] = booking;
        }

}