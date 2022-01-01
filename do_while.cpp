//z użyciem pętli do...while
#include
int main()
{
    int n;
    do
    {
        std::cout << "Podaj liczbę dodatnią";
        std::cin >> n;
    } while (n <= 0);
    std::cout << "Liczba dodatnia wynosi: " << n << endl;
    system("PAUSE");
    return 0;
}