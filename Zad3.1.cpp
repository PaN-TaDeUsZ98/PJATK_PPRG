#include <iostream>

using namespace std;

int main()
{
    float a, b;
cout << "Podaj 1 liczbe:" << endl;
    cin >> a;
cout << "Podaj 2 liczbe:" << endl;
    cin >> b;

    printf("Suma = %.2f \n", a + b );
    printf("Roznica = %.2f \n", a - b);
    printf("Iloczyn = %.2f \n", a * b);
    printf("Iloraz = %.2f \n", a / b);
    

    return 0;
}