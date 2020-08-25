#include <iostream>

using namespace std;

class ArithmaticOperation
{
    public:
        virtual void add(int a, int b) = 0;
        virtual void divide(int a, int b) = 0;
        virtual void multiply(int a, int b) = 0;
};

class ArithmaticOperationImplimentaion : public ArithmaticOperation
{
    public:
        virtual void add(int a, int b)
        {
            cout << (a + b) << endl;
        }

        virtual void divide(int a, int b)
        {
            cout << (a / b) << endl;
        }

        virtual void multiply(int a, int b)
        {
            cout << (a * b) << endl;
        }
};

int main()
{
    ArithmaticOperation* operations = new ArithmaticOperationImplimentaion;
    operations->add(2, 4);
    operations->divide(4, 2);
    operations->multiply(4, 2);
}