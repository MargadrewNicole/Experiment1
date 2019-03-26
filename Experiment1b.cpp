#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    double mass,density;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "To calculate the volume, please enter the mass of the object in grams." << endl;
    cin >> mass;
    cout << "Enter the density of the object in grams per cubic meter." << endl;
    cin >> density;
    double volume = mass/density;
    cout << "The volume of the object is " << volume << endl;
    _getch();
    return 0;

}
