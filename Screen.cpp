#include 'Seat.cpp'
#include vector;

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
    Seat *getSeat(int seatNumber)
    {
    }
    int getScreenNumber()
    {
    }
}