//z użyciem pętli while
#include <iostream>
int main()
{
    int n;
    std::cout << "Podaj liczbę dodatnią: ";
    std::cin >> n;
    while (n <= 0)
    {
        std::cout << "Podałeś liczbę ujemną!\n\nPodaj liczbę dodatnią:\n";
        std::cin >> n;
    }
    std::cout << "Liczba dodatnia wynosi: " << n << endl;
    
system("pause");
return 0;
}