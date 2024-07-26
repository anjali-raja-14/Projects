// CONVERT INTO FEET AND INCH
#include <iostream>
using namespace std;
int metre_feet(int &d, float &feet);
int metre_inch(int &d, float &inch);
int main()
{
    char ch;
    int distance;
    float feet;
    float inch;

    cout << "Enter the distance in metre: ";
    cin >> distance;
    cout << "you want distance in feet or inch(F/I)?: ";
    cin >> ch;
    if (ch == 'F')
    {
         metre_feet(distance, feet);
        cout << "The distance in feet: " << feet;
    }
    else if (ch == 'I')
    {
        metre_inch(distance, inch);
        cout << "The distance in inch: " << inch;
    }
    return 0;
}
int metre_feet(int &x, float &feet)
{
    feet = x * 3.28;
}
int metre_inch(int &x, float &inch)
{
    inch = x * 39.37;
}