#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum SeatType
{
    SILVER,
    GOLD,
    PLATINUM
};
class Seat
{
private:
    int seatNumber;
    SeatType type;
    bool available;   // <-- add this if missing

public:
    Seat(int seatNumber, SeatType type)
    {
        this->seatNumber = seatNumber;
        this->type = type;
        this->available = true;   // seats start available
    }

    bool isAvailable()
    {
        return available;
    }

    void bookSeat()
    {
        available = false;
    }

    void freeSeat()
    {
        available = true;
    }

    int getSeatNumber()
    {
        return seatNumber;
    }

    void display()
    {
        cout << "Seat " << seatNumber << (available ? " [Available]" : " [Booked]");
    }
};