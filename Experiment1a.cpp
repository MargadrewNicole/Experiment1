#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    cout << "Ticket Type    Ticket Price   No. of Tickets Sold   Sales" << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Box            $250.00        5750                  $" << 250.00*5750.00 << endl;
    cout << "Sideline       $100.00        28000                 $" << 100.00*28000.00 << endl;
    cout << "Premium        $50.00         35750                 $" << 50.00*35750.00 << endl;
    cout << "Gen. Admission $25.00         18750                 $" << 25.00*18750.00 << endl;
    cout << "The total number of tickets sold is " << 5750+28000+35750+18750 << "." << endl;
    cout << "The total ticket sales is $" << (250.00*5750.00)+(100.00*28000.00)+(50.00*35750.00)+(25.00*18750.00) << "." << endl;
    _getch();
    return 0;
}
