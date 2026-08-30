#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Seat.cpp"

using namespace std;

class ShowSeat
{
private:
    Seat *seat;
    bool available;

public:
    ShowSeat() : seat(nullptr), available(true) {}

    ShowSeat(Seat &seatRef) : seat(&seatRef), available(true) {}

    bool isAvailable(int seatNumber)
    {
        return seat->getSeatNumber() == seatNumber && available;
    }

    void display()
    {
        seat->display();
    }

    void bookSeat()
    {
        available = false;
    }
    void releaseSeat()
    {
        available = true;
    }
    Seat *getSeat()
    {
        return seat; 
    }
};