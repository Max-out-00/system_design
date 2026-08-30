#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Movie
{
private:
    string Movie_name;
    string lang;
    int duration;


public:
    Movie(string Movie_name , string lang , int duration){
        this->Movie_name = Movie_name;
        this->lang = lang;
        this->duration = duration;
    }

    string getMovie(){
        return Movie_name;
    }
    string getLang(){
        return lang;
    }


    void displayMovie(){
        cout << "Movie Name: " << Movie_name;
        cout << "Movie Lamguage: " << lang; 
        cout << "Movie Duration: " <<  duration;
    }
};