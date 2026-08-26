class Movies
{
private:
    int Movie_Id;
    string Movie_name;
    string lang;
    int duration;
    string Release_date;    // yyyy-mm-dd
    vector<string> time;    // hh:mm:ss 

public:
    Movies(int Movie_Id , string Movie_name , string lang , int duration){
        this->Movie_Id = Movie_Id;
        this->Movie_name = Movie_name;
        this->lang = lang;
        this->duration = duration;
    }

    int getID(){
        return Movie_Id;
    }
    string getMovie(){
        return Movie_name;
    }
    string getLang()
    
}