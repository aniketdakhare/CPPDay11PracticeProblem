#include <iostream>

using namespace std;

class Printer
{
    public:
        void printValue(int number)
        {
            cout << "\nInteger value is: " << number << endl;
        }

        void printValue(string number)
        {
            cout << "\nString value is: " << number << endl;
        }

        void printValue(double number)
        {
            cout << "\nDouble value is: " << number << endl;
        }

        virtual void printStatement()
        {
            cout << "\nPrinter class printStatement Method" << endl;
        }
};

class PrintingPress : Printer
{
    public:
        virtual void printStatement()
        {
            cout << "\nPrintingPress class printStatement Method" << endl;
        }
};

int main()
{
    Printer* printer = new Printer;
    printer->printValue(9);
    printer->printValue("Nine");
    printer->printValue(9.5);
    printer->printStatement();

    PrintingPress* printingPress = new PrintingPress;
    printingPress->printStatement();
}    