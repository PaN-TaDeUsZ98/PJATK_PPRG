#include <iostream>

using namespace std;

int main()
{
    int n;
    int licznik = 0;

    cout << "Podaj liczbe: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 != 0)
        {
            cout << i << " \n";
            licznik++;
        }
    }

    cout << "Liczb naturalnych, mniejszych od " << n << " ktore sa podzielne przez 5 ale nie sa podzielne przez 3 jest: " << licznik << endl;

    return 0;
}