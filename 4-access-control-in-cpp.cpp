// Date: 16-05-2024

#include<iostream>
using namespace std;

struct myDateAndTime
{
    void add_year()
    {
        year++;
    }

    bool set_year(int new_year)
    {
        // returns true of false
        if(new_year < 2019) return false;
        year = new_year;
        return true;
    }

    int get_year()
    {
        return year;
    }
    private:
        int year;
};

int main()
{
    myDateAndTime md;
    cout << "Current Year: " << md.get_year();
    cout << "\n";
    md.set_year(2023);
    cout << "Year now is: " << md.get_year();
    cout << "\n";
    cout << "Can't set year to < 2017: " << md.set_year(2005);
    cout << "\n";
    cout << "Year: " << md.get_year();
    return 0;
}