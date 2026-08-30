#pragma once

#include <iostream>
#include <string>
#include "Customer.cpp"
#include "Booking.cpp"
#include "PaymentType.cpp"
#include "Movie.cpp"
#include "Show.cpp"
#include "Seat.cpp"

class TicketPrinter
{
private:
    Customer *customer;
    Booking *booking;
    PaymentType *payment;

public:
    TicketPrinter(Customer *customer, Booking *booking, PaymentType *payment)
    {
        this->customer = customer;
        this->booking = booking;
        this->payment = payment;
    }

    void DisplayTicket()
    {
        Show *show = booking->getShow();
        Seat *seat = booking->getSeat();
        Movie *movie = show->getMovie();

        customer->displayCustomer();
        cout << endl;
        booking->displayBooking();
        cout << endl;

        if (payment->getType() == 1)
        {
            payment->pay(*movie, *show, *seat, booking->getTotalAmount(), "UPI");
        }
        else if (payment->getType() == 2)
        {
            payment->pay(*movie, *show, *seat, booking->getTotalAmount(), "Card");
        }
        else if (payment->getType() == 3)
        {
            payment->pay(*movie, *show, *seat, booking->getTotalAmount(), "Cash");
        }
    }
};