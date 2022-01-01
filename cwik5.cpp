#include <iostream>

using namespace std;

int main()

{
    int sum = 0, i = 0, n, k;
    cout << "Podaj dodatnia liczbe naturalna aby obliczyc jej sume: ";
    cin >> n;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
     cout << sum << endl;

   
    while (sum > 9)
    {
        n = sum;
        sum = 0;

        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }

    system("pause");

    return 0;
}
