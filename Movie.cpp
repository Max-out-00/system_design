class Movies
{
private:
    int Movie_Id;
    string Movie_name;
    string lang;
    int duration;


public:
    Movies(int Movie_Id , string Movie_name , string lang , int duration){
        this->Movie_Id = Movie_Id;
        this->Movie_name = Movie_name;
        this->lang = lang;
        this->duration = duration;
    }

    int getMovieID(){
        return Movie_Id;
    }
    string getMovie(){
        return Movie_name;
    }
    string getLang(){
        return lang;
    }


    void displayMovie(){
        cout << "Movie ID: " << Movie_Id;
        cout << "Movie Name: " << Movie_name;
        cout << "Movie Lamguage: " << lang; 
        cout << "Movie Duration: " <<  duration;
    }
}