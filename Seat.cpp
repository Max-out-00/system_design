enum SeatType
{
    SILVER,
    GOLD,
    PLATINUM
};

class Seat
{
private:
    int seatNumber;
    SeatType type; // SILVER, GOLD, PLATINUM
    int price;

public:
    Seat(int seatNumber , SeatType type){
        this->seatNumber = seatNumber;
        this->type = type;
    }
    int getSeatNumber(){
        return seatNumber;
    }
    SeatType getType(){
        return type;
    }
    int getPrice(){
        return price;
    }
    void display(){
        cout << "Seat Number: " << seatNumber;
        cout << "Seat Type: " << type;
        cout << "Seat Price: " << price;
    }
}