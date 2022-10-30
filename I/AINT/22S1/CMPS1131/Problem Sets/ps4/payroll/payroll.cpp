#include <iostream>
#include "Payroll\Payroll.cpp"
using namespace std;

void calculatePayroll();

int main()
{
    // Splash I guess?
    cout << R"(
$$$$$$$\                                         $$\ $$\                          $$\                     $$\            $$\
$$  __$$\                                        $$ |$$ |                         $$ |                    $$ |           $$ |                        
$$ |  $$ |$$$$$$\  $$\   $$\  $$$$$$\   $$$$$$\  $$ |$$ |       $$$$$$$\ $$$$$$\  $$ | $$$$$$$\ $$\   $$\ $$ | $$$$$$\ $$$$$$\    $$$$$$\   $$$$$$\
$$$$$$$  |\____$$\ $$ |  $$ |$$  __$$\ $$  __$$\ $$ |$$ |      $$  _____|\____$$\ $$ |$$  _____|$$ |  $$ |$$ | \____$$\\_$$  _|  $$  __$$\ $$  __$$\
$$  ____/ $$$$$$$ |$$ |  $$ |$$ |  \__|$$ /  $$ |$$ |$$ |      $$ /      $$$$$$$ |$$ |$$ /      $$ |  $$ |$$ | $$$$$$$ | $$ |    $$ /  $$ |$$ |  \__|
$$ |     $$  __$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |$$ |      $$ |     $$  __$$ |$$ |$$ |      $$ |  $$ |$$ |$$  __$$ | $$ |$$\ $$ |  $$ |$$ |
$$ |     \$$$$$$$ |\$$$$$$$ |$$ |      \$$$$$$  |$$ |$$ |      \$$$$$$$\\$$$$$$$ |$$ |\$$$$$$$\ \$$$$$$  |$$ |\$$$$$$$ | \$$$$  |\$$$$$$  |$$ |
\__|      \_______| \____$$ |\__|       \______/ \__|\__|       \_______|\_______|\__| \_______| \______/ \__| \_______|  \____/  \______/ \__|
                   $$\   $$ |                                                                                                                        
                   \$$$$$$  |                                                                                                                        
                    \______/                                                                                                                         

)" << '\n';

    calculatePayroll();
    return 0;
}

void calculatePayroll()
{

    int paycode = false;
    int nweeks = false;
    double salary = false;

    cout << "Paycode [INT]: ";
    cin >> paycode;
    cout << "Pay is being computed for how many weeks [1-n]? ";
    cin >> nweeks;

    switch (paycode)
    {

        // Managers
    case 1:
    {

        cout << "Enter fixed weekly salary: ";
        cin >> salary;
        Payroll manager(paycode, nweeks, salary);
    }
    break;
        // Hourly workers
    case 2:
    {
        double hourlyWage = 0;
        cout << "Hourly wage? ";
        cin >> hourlyWage;
        Payroll hworker(paycode, nweeks, hourlyWage);
    }
    break;
        // Commission workers
    case 3:
    {
        Payroll cworker(paycode, nweeks);
    }
    break;
        // Pieceworkers
    case 4:
    {
        Payroll pworker(paycode, nweeks);
    }

    break;
    default:
    {
        cout << "Out of range.";
    }
    break;
    }

    // Check if we need to repeat
    {
        string r = "";
        cout << "\n\nAgain? (y/n) ";
        cin >> r;
        if (r == "y")
            calculatePayroll();
    }
}
