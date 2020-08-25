#include <iostream>

using namespace std;

class Hotel
{
    protected:
        void payBill()
        {
            cout << "Bill Paid" << endl;
        }
};

class FirstPerson : virtual public Hotel
{
    protected:
        void getBillPaidByFirstPerson()
        {
            cout << "\nBill Paid by first person" << endl;
            payBill();
        }
};

class SecondPerson : virtual public Hotel
{
    protected:
        void getBillPaidBySecondPerson()
        {
            cout << "\nBill Paid by second person" << endl;
            payBill();
        }
};

class PaymentCounter : public FirstPerson, public SecondPerson
{
    public:
        void billPaid()
        {
            getBillPaidByFirstPerson();
            getBillPaidBySecondPerson();
            cout << "\nDimond Ambiquity Problem Solved" << endl;
            payBill();
        }
};

int main()
{
    PaymentCounter* payement = new PaymentCounter;
    payement->billPaid();
}