#include <iostream>
#include <string>
#include <vector>
#include "Show.cpp"
#include "Seat.cpp"

using namespace std;
class Booking {
    private:
        int bookingID;
        Show *show;
        Seat *seat;
        int TotalAmount;
        bool status;
    
    public:
        Booking(int bookingID, Show *show, Seat *seat, int TotalAmount, bool status) {
            this->bookingID = bookingID;
            this->show = show;
            this->seat = seat;
            this->TotalAmount = TotalAmount;
            this->status = status;
        }

        void displayBooking() {
            cout << "Booking ID: " << bookingID;
            cout << "Show ID: " << show->getShowID();
            cout << "Seat Number: " << seat->getSeatNumber();
            cout << "Total Amount: " << TotalAmount;
            cout << "Booking Status: " << (status ? "Confirmed" : "Cancelled");
        }
};