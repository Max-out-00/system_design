#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer {
public:
    string name;
    long long phoneNumber;

    Customer(string n, long long phone) {
        name = n;
        phoneNumber = phone;
    }
};

class Movie {
public:
    string name;
    string language;
    int duration;

    Movie(string n, string lang, int dur) {
        name = n;
        language = lang;
        duration = dur;
    }
};

class Screen {
public:
    int screenNumber;
    vector<int> availableSeats;

    Screen(int num) {
        screenNumber = num;
        for (int i = 1; i <= 10; i++) {
            availableSeats.push_back(i);
        }
    }
};

class Booking {
public:
    int bookingId;
    Customer customer;
    Movie movie;
    Screen screen;
    int seatNumber;
    string showTime;
    double amount;

    Booking(int id, Customer c, Movie m, Screen s, int seat, string time, double amt)
        : customer(c), movie(m), screen(s) {
        bookingId = id;
        seatNumber = seat;
        showTime = time;
        amount = amt;
    }

    void display() const {
        cout << "\n===== Booking Confirmation =====" << endl;
        cout << "Booking ID     : " << bookingId << endl;
        cout << "Customer Name  : " << customer.name << endl;
        cout << "Phone Number   : " << customer.phoneNumber << endl;
        cout << "Movie          : " << movie.name << endl;
        cout << "Language       : " << movie.language << endl;
        cout << "Duration       : " << movie.duration << " mins" << endl;
        cout << "Screen Number  : " << screen.screenNumber << endl;
        cout << "Seat Number    : " << seatNumber << endl;
        cout << "Show Time      : " << showTime << endl;
        cout << "Total Amount   : Rs. " << amount << endl;
        cout << "=================================" << endl;
    }
};

int main() {
    cout << "====================================" << endl;
    cout << "      Cinema Booking System" << endl;
    cout << "====================================" << endl;

    string customerName;
    long long phoneNumber;
    string movieName;
    string language;
    int duration;
    int screenNumber;
    int seatNumber;
    string showTime;
    double amount;
    int paymentChoice;
    string paymentDetails;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone number: ";
    cin >> phoneNumber;
    cin.ignore();

    cout << "Enter movie name: ";
    getline(cin, movieName);

    cout << "Enter movie language: ";
    getline(cin, language);

    cout << "Enter movie duration in minutes: ";
    cin >> duration;
    cin.ignore();

    cout << "Enter screen number: ";
    cin >> screenNumber;
    cin.ignore();

    cout << "Enter show time (HH:MM): ";
    getline(cin, showTime);

    cout << "Enter seat number: ";
    cin >> seatNumber;
    cin.ignore();

    cout << "Enter total amount: ";
    cin >> amount;
    cin.ignore();

    cout << "Select payment method:" << endl;
    cout << "1. UPI" << endl;
    cout << "2. Card" << endl;
    cout << "3. Cash" << endl;
    cout << "Enter your choice: ";
    cin >> paymentChoice;
    cin.ignore();

    if (paymentChoice == 1) {
        cout << "Enter UPI ID: ";
        getline(cin, paymentDetails);
    } else if (paymentChoice == 2) {
        cout << "Enter card number: ";
        getline(cin, paymentDetails);
    } else if (paymentChoice == 3) {
        paymentDetails = "Cash payment";
    } else {
        paymentDetails = "Unknown payment method";
    }

    Customer customer(customerName, phoneNumber);
    Movie movie(movieName, language, duration);
    Screen screen(screenNumber);

    int bookingId = 101;
    Booking booking(bookingId, customer, movie, screen, seatNumber, showTime, amount);

    cout << "\n====================================" << endl;
    cout << "Payment method: " << paymentDetails << endl;
    booking.display();

    cout << "\nTicket booked successfully!" << endl;
    return 0;
}