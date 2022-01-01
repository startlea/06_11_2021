// obliczanie n!

#include <iostream>

using namespace std;

int main()
{
    int n, s = 1, i;
    cout << "Podaj liczbe: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s *= i;
    }

    cout << s << endl;

    return 0;
}
