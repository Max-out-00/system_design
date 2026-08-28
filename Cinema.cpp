class Cinema
{
private:
    string cinemaName;
    vector<Screen> screens;
    vector<Movie *> movies;
    vector<Show *> shows;

public:
    Cinema()
    {
    }
    void addMovie(Movie *movie)
    {
        movies.push_back(movie);
    }
    void addScreen(Screen screen)
    {
        screens.push_back(screen);
    }
    void addShow(Show *show)
    {
        shows.push_back(show);
    }
    void displayMovies()
    {
        for (auto i : movies)
        {
            i.displayMovie();
        }
    }
    void displayScreens()
    {
        for (auto i : screens)
        {
            cout << i.getScreenNumber() << endl;
        }
    }
    void displayShows(){
        for (auto i : shows)
        {
            i.displayShow() << endl;
        }
        
    }
    Movie *findMovie(int movieId){
        for (auto i : movies)
        {
            if (movieId == i.getMovieID())
            {
                return i;
            }
        }
        return NULL;
    }
    Show *findShow(int showId){
         for (auto i : shows)
        {
            if (showId == i.getShowID())
            {
                return i;
            }
        }
        return NULL;
    }
};
