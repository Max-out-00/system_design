#include <iostream>
#include <string>
#include <vector>
#include "Seat.cpp"

using namespace std;

class ShowSeat{
    private:
        Seat *seat;
        bool available;
    public:
        ShowSeat() : available(true) {}
        bool isAvailable(int seatNumber) {
            if (seat->getSeatNumber() == seatNumber) {
                return available;
            }
            return false;
        }
        void bookSeat() {
            available = false;
        }
        void releaseSeat() {
            available = true;
        }
}