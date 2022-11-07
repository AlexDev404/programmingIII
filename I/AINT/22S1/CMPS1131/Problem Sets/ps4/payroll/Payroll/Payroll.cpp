#include <iostream>
#include "Payroll.hpp"
using namespace std;

Payroll::Payroll(int paycode, int nweeks, double pay)
{
    this->paycode = paycode;
    this->nweeks = nweeks;
    this->pay = pay;

    switch (paycode)
    {
        // Managers
    case 1:
        calc_mw();
        break;
        // Hourly workers
    case 2:
        calc_hw();
        break;
        // Commission workers
    case 3:
        calc_cw();
        break;
        // Pieceworkers
    case 4:
        calc_pw();
        break;
    default:

        break;
    }
};

void Payroll::calc_mw()
{
    // Output
    cout << pay * nweeks;
}
void Payroll::calc_hw()
{

    for (int i = 1; i <= nweeks; i++)
    {
        double hours = 0;
        double overtime = 0;
        cout << "Enter hours for week " << i << ": ";
        cin >> hours;

        if (hours > 40)
        {
            overtime = hours - 40;
            hours = 40;
            tPay = tPay + (pay * hours) + (1.5 * pay) * overtime;
        }
        else
        {
            tPay = tPay + (pay * hours);
        }
    }
    // Output
    cout << tPay;
}
void Payroll::calc_cw()
{
    double sales = false;

    for (int i = 1; i <= nweeks; i++)
    {
        cout << "Week " << i << " gross weekly sales: ";
        cin >> sales;
        tPay = tPay + (250 + (5.7 * sales));
    }
    // Output
    cout << sales;
}
void Payroll::calc_pw()
{
    double mPay = false;
    int items = false;

    cout << "Money paid for item produced: ";
    cin >> mPay;
    for (int i = 1; i <= nweeks; i++)
    {
        cout << "Week " << i << ": Number of items produced: ";
        cin >> items;
        tPay = tPay + (items * mPay);
    }
    // Output
    cout << tPay;
}