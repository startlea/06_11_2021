#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "podaj bok a \n";
    cin >> a;
    int b;
    cout << "podaj bok b \n";
    cin >> b;
    int c;
    cout << "podaj bok c \n";
    cin >> c;

    if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
    {
        cout << "Trójkąt jest prostokatny \n";
    }
    else
    {
        cout << "Trójkąt nie jest prostokatny \n";
    }
}