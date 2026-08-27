class Cinema
{
private:
    string cinemaName;
    vector<Screen> screens;
    vector<Movie *> movies;
    vector<Show *> shows;

public:
    Cinema(){
        
    }
    void addMovie(Movie *);
    void addScreen(Screen);
    void addShow(Show *);
    void displayMovies();
    void displayScreens();
    void displayShows();
    Movie *findMovie(int movieId);
    Show *findShow(int showId);
};
