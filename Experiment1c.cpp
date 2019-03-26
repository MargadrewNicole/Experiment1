#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    double netbalance,payment,d1,d2,interestrate;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Please refer to your monthly credit card bill and enter the following data:" << endl;
    cout << "Balance" << endl;
    cin >> netbalance;
    cout << "Amount of payment made" << endl;
    cin >> payment;
    cout << "No. of days in billing cycle" << endl;
    cin >> d1;
    cout << "Number of days the payment is made before billing cycle" << endl;
    cin >> d2;
    cout << "Interest rate per month" << endl;
    cin >> interestrate;
    double averagedailybalance = (netbalance*d1-payment*d2)/d1;
    double interest = averagedailybalance*interestrate;
    cout << "Your monthly interest is $" << interest << endl;
    _getch();
    return 0;

}
