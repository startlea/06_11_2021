// liczba z przedziału

#include <iostream>

using namespace std;

int main()

{

    int a;

    do
    {

        cout << "Podaj liczbe z przedzialu 1-100: ";

        cin >> a;

    }

    while ((a < 1) || (a > 100));

    cout << "Twoja liczba to " << a << endl;

    return 0;
}
