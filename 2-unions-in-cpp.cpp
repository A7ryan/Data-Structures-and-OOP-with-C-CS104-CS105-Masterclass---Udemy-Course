// Date: 16-05-2024

// Union: Takes largest memory that of largest data member

#include<iostream>
using namespace std;

union Variant
{
    char myString[10];
    int myInteger;
    double myDouble;
};

int main()
{
    Variant v;
    v.myInteger = 32;
    cout << "My Union Integer is: " << v.myInteger;
    v.myDouble = 3.14;
    cout << "\n";
    cout << "My Union Double is: " << v.myDouble;
    // if you print v.myInteger Now it will give random value not correct answer
    return 0;
}

