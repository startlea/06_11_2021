#include <iostream>

using namespace std;

float liczba = 7.23;

int main()
{
    float liczba = 8.23;
    cout << liczba << endl;
    cout << ::liczba;
    return 0;
}