#include<iostream>
using namespace std;
class rational_number
{
private:
    int numerator, denominator;

public:
    void assign1(int n, int d)
    {
        numerator = n;
        denominator = d;
    }     
    double convert()
    {
        double d = (double)denominator;
        double n = (double)numerator;
        if (d > 0)
            return (n / d);
            else return 0.00;

    }
    void invert()
    {
        if (numerator > 0)
            swap(numerator, denominator);
    }
    void print()
    {
        if (denominator < 0)
            cout << "ERROR" << endl;
        else
        {
            cout << "The rational number is = ";
            cout << numerator << "/" << denominator << endl;
        }
    }
};
int main()
{
    int numerator, denominator;
    cin >> numerator >> denominator;
    rational_number c1;
    c1.assign1(numerator, denominator);
    double d = c1.convert();
    cout << d << endl;
    c1.invert();
    c1.print();
    return 0;
}
