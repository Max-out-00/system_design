class TicketPrinter
{
private:
    Customer *customer;
    Booking *booking;
    PaymentType *payment;

public:
    TicketPrinter(Customer *customer, Booking *booking, PaymentType *payment)
    {
        this->customer = customer;
        this->booking = booking;
        this->payment = payment;
    }

    void DisplayTicket()
    {
        customer->displayCustomer() << endl;
        booking->displayBooking() << endl;
        if (payment->getType() == 1)
        {
            payment->pay(booking->getTotalAmount(), "UPI") << endl;
        }
        else if (payment->getType() == 2)
        {
            payment->pay(booking->getTotalAmount(), "Card") << endl;
        }
        else if (payment->getType() == 3)
        {
            payment->pay(booking->getTotalAmount(), "Cash") << endl;
        }
    }