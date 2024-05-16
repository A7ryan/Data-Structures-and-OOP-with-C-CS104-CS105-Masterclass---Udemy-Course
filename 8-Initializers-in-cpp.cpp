// Date: 16-05-2024

// 4 Way to Initialize: i. Assignment ii. Function iii. Syntax iv. Calling Constructor

#include<iostream>
using namespace std;

int a = 1;
int b = int(2);
int c(3);
int d{4}; // new to c++

int main()
{
    cout << "A: " << a;
    cout << "\n";
    cout << "B: " << b;
    cout << "\n";
    cout << "C: " << c;
    cout << "\n";
    cout << "D: " << d;

    int birth_years[] = {2007, 2010, 2012, 2013, 2019, 2022};
    
    int john[] = {1988};
    
    return 0;
}