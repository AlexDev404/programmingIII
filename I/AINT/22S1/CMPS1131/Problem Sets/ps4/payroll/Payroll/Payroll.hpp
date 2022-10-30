class Payroll
{
public:
    // Smart constructor
    Payroll(int paycode, int nweeks, double pay = 0);

private:
    int paycode;
    int nweeks;
    double tPay = false;
    double pay;
    // Manager
    void calc_mw();
    // Hourly worker
    void calc_hw();
    // Commission worker
    void calc_cw();
    // Pieceworker
    void calc_pw();
};