#include <iostream>
#include <string>
#include <vector>
#include "Seat.cpp"

using namespace std;

class Screen
{
private:
    int screenNumber;
    vector<Seat> seats;

public:
    Screen(int screenNumber)
    {
        this->screenNumber = screenNumber;
        createSeats();
    }
    void createSeats()
    {
        for (int i = 1; i <= 10; i++)
        {
            seats.push_back(Seat(i, SeatType::SILVER));
        }

        for (int i = 11; i <= 20; i++)
        {
            seats.push_back(Seat(i, SeatType::GOLD));
        }

        for (int i = 21; i <= 30; i++)
        {
            seats.push_back(Seat(i, SeatType::PLATINUM));
        }
    }
    void displaySeats()
    {
        for (Seat &seat : seats)
        {
            seat.display();
        }
    }
    void displayAvalableSeats()
    {
        for (Seat &seat : seats)
        {
            if (seat.isAvailable())
            {
                cout << "[" << seat.getSeatNumber() << "] ";
            }
            else
            {
                cout << "[X] ";
            }
        }
    }
    Seat *getSeat(int seatNumber)
    {
        for (auto &seat : seats)
        {
            if (seat.getSeatNumber() == seatNumber){
                return &seat;
            }
        }
        return NULL;
    }
    int getScreenNumber()
    {
        return screenNumber;
    }
    vector<Seat> getSeats()
    {
        return seats;
    }
};