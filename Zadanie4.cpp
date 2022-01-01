#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj 3 odcinki rozdzielając spacjami \n";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Czy z podanych odcinków mozna zbudować trójkąt o dodatnim polu: \n";

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        cout << "TAK \n";
    }
    else
    {
        cout << "NIE \n";
    }
    system("Pause");
    return 0;
}