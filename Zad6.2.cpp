#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int informatyka;
    int matematyka;
    int biologia;
    int polski;
};

int main()
{
    Student students[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Podaj imię ucznia " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Podaj ocenę z informatyki ucznia " << i + 1 << ": ";
        cin >> students[i].informatyka;
        cout << "Podaj ocenę z matematyki ucznia " << i + 1 << ": ";
        cin >> students[i].matematyka;
        cout << "Podaj ocenę z biologii ucznia " << i + 1 << ": ";
        cin >> students[i].biologia;
        cout << "Podaj ocenę z języka polskiego ucznia " << i + 1 << ": ";
        cin >> students[i].polski;
        cout << "\n";
    }

    int studentNum;
    int subjectNum;

    cout << "Podaj numer ucznia: [1...6] ";
    cin >> studentNum;
    cout << "Podaj numer przedmiotu (1-informatyka, 2-matematyka, 3-biologia, 4-język polski): ";
    cin >> subjectNum;

    if (subjectNum == 1)
        cout << students[studentNum - 1].name << " ma ocenę " << students[studentNum - 1].informatyka << " z informatyki.\n";
    else if (subjectNum == 2)
        cout << students[studentNum - 1].name << " ma ocenę " << students[studentNum - 1].matematyka << " z matematyki.\n";
    else if (subjectNum == 3)
        cout << students[studentNum - 1].name << " ma ocenę " << students[studentNum - 1].biologia << " z biologii.\n";
    else if (subjectNum == 4)
        cout << students[studentNum - 1].name << " ma ocenę " << students[studentNum - 1].polski << " z języka polskiego.\n";

}