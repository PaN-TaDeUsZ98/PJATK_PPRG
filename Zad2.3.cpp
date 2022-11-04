#include <iostream>
using namespace std;
int main() {
    cout << "Podaj liczbe od 1 do 12: ";
    int a;
    cin >> a;
    switch(a)
    {
        case 1:
             cout << "Styczen \n";
             cout << "Ilosc dni w tym Styczniu (w roku nieprzestepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 2:
             cout << "Luty \n";
             cout << "Ilosc dni w Lutym (w roku nieprzestepnym) to 28 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 3:
             cout << "Marzec \n";
             cout << "Ilosc dni w Marcu (w roku nieprzestepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 4:
             cout << "Kwiecien \n";
             cout << "Ilosc dni w Kwietniu (w roku nieprzestepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 5:
             cout << "Maj \n";
             cout << "Ilosc dni w Maju (w roku nieprzestepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 6:
             cout << "Czerwiec \n";
             cout << "Ilosc dni w Czerwcu (w roku nieprzestepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 7:
             cout << "Lipiec \n";
             cout << "Ilosc dni w Lipcu (w roku nieprzestepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 8:
             cout << "Sierpien \n";
             cout << "Ilosc dni w Sierpniu (w roku nieprzestepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 9:
             cout << "Wrzesien \n";
             cout << "Ilosc dni we Wrzesniu (w roku nieprzestepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 10:
             cout << "Pazdziernik \n";
             cout << "Ilosc dni w Pazdzierniku (w roku nieprzestepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 11:
             cout << "Listopad \n";
             cout << "Ilosc dni w Listopadzie (w roku nieprzestepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 12:
             cout << "Grudzien \n";
             cout << "Ilosc dni w Grudniu (w roku nieprzestepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        default:
             cout << "Liczba spoza przrdzialu";
        break;
    }
    return 0;
}