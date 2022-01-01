#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    string odpowiedz;
    cout << "ile jest 2+2 - a b lub c\n";
    cout << "a:5 \n";
    cout << "b:3 \n";
    cout << "c:4 \n";
    cin >> odpowiedz;

    if (odpowiedz == "c" || odpowiedz == "c")
    {
        cout << "Odpowiedź poprawna \n";
    }
    else
    {
        cout << "Niestety nie \n";
    }

    system("Pause");
    return 0;
}