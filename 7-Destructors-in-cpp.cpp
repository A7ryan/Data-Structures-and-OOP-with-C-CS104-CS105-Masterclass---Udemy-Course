// Date: 16-05-2024
// Clean up function

#include<iostream>
using namespace std;

class myDateAndTime
{
    int year;

    public:
        myDateAndTime(int year_in)
        {
            if(!set_year(year_in))
            {
                year = 2019;
            }
        }

        // Destructor
        ~myDateAndTime()
        {
            cout << "Object Destroyed!";
        }

        int get_year()
        {
            return year;
        }

        void add_year()
        {
            year++;
        }

        bool set_year(int new_year)
        {
            if(new_year < 2019) return false;
            year = new_year;
            return true;
        }
};

int main()
{
    myDateAndTime clock(2020);
    cout << "Year: " << clock.get_year();
    return 0;
}