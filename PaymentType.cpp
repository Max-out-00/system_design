#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PaymentType {
    int type; // 1 for UPI, 2 for Card, 3 for Cash
    public:
        virtual void pay(int amount, string paymentMode) = 0;
        virtual int getType() {
            return type;
        }
};