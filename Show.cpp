#include <iostream>
#include <string>
#include <vector>
#include "Movie.cpp"
#include "Screen.cpp"
#include "ShowSeat.cpp"

using namespace std;

class Show
{
private:
    int showId;
    Movie *movie;
    Screen *screen;
    string startTime;
    vector<ShowSeat> showSeats;

public:
    Show(int showId, Movie *movie, Screen *screen, string startTime, vector<ShowSeat> showSeats)
    {
        this->showId = showId;
        this->movie = movie;
        this->screen = screen;
        this->startTime = startTime;

        createShowSeats();
    }
    void createShowSeats()
    {
        vector<Seat> seats = screen->getSeats();
        for (auto i : seats)
        {
            ShowSeat showSeat(i);
            showSeats.push_back(showSeat);
        }
    }
    void displayShow()
    {
        cout << "Show ID: " << showId;
        cout << "Movie Name: " << movie->getMovie();
        cout << "Screen Number: " << screen->getScreenNumber();
        cout << "Show Start Time: " << startTime;
    }
    void displaySeats()
    {
        for (auto i : showSeats)
        {
            i.display();
        }
    }
    bool isSeatAvailable(int seatNumber)
    {
        for (auto i : showSeats)
        {
            if (i.isAvailable(seatNumber))
            {
                return true;
            }
        }
        return false;
    }
    ShowSeat *getShowSeat(int seatNumber)
    {
        for (auto &i : showSeats)
        {
            if (i.getSeat()->getSeatNumber() == seatNumber){
                return &i;
            }
        }
        return NULL;
    }
    string getStartTime()
    {
        return startTime;
    }
    Movie *getMovie()
    {
        return movie;
    }
    Screen *getScreen()
    {
        return screen;
    }
    int getShowID()
    {
        return showId;
    }
};