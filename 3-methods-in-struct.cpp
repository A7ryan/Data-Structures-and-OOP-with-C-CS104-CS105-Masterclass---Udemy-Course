// Date: 16-05-2024

#include<iostream>
using namespace std;

struct myDateAndTime
{
    int year;

    void add_year()
    {
        year++;
    }
};

int main()
{
    myDateAndTime md;
    md.year = 2022;
    cout << "Original Year: " << md.year;
    md.add_year();
    cout << "\n";
    cout << "After calling add_year() function: " << md.year;
    return 0;
}