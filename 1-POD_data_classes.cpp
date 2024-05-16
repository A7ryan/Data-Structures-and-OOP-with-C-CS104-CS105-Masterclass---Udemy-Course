// Date: 16-05-2024
// POD: Plain Old Data Classes

#include<iostream>
using namespace std;

struct Car
{
    char make[256];
    int year;
    int wheels;
    bool isRunning;
};

int main()
{
    Car myBMW;
    myBMW.year = 2007;
    cout << "I bought my BMW Car in the Year: " << myBMW.year;
    return 0;
}
