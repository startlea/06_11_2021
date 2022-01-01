// suma liczb parzystych z przedziału do n

#include <iostream>

using namespace std;

int main()
{
    int n, i, s = 0;
    cout << "Podaj liczbe: ";
    cin >> n;
    // w pętli wyspisujemy kazdą liczbe i sprawdzamy czy jest parzysta, sumujemy

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
    }

    cout << "Suma liczb parzystych z przedziału do " << n << " wynosi: " << s << endl;

    return 0;
}
