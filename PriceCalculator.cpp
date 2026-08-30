#include <iostream>
#include <string>
#include <vector>
#include "Movie.cpp"
#include "Show.cpp"
#include "Seat.cpp"

using namespace std;

class PriceCalculator
{
private:
    Movie movie;
    Show show;
    Seat seat;

public:
    PriceCalculator(Movie movie, Show show, Seat seat) {
        this->movie = movie;
        this->show = show;
        this->seat = seat;
    }

    int calculatePrice() {
        int basePrice = seat.getPrice();
        int movieDuration = movie.getDuration();
        int showTime = show.getStartTime();

        if (seat.getType() == SeatType::GOLD) {
            basePrice += 50; 
        } else if (seat.getType() == SeatType::PLATINUM) {
            basePrice += 100; 
        }

        if (movieDuration > 120) {
            basePrice += 20; 
        }

        if (showTime >= 18 && showTime <= 22) {
            basePrice += 30;
        }

        return basePrice;
    }
};