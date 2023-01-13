#include <iostream>

using namespace std;

int main()
{
    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}}; //tablica 3x3
    char player = 'X'; //początkowa wartość gracza
    int n; //zmienna pomocnicza
    int row, column; //współrzędne pola

    cout << "Kolko i Krzyzyk\n";

    for(int i=0; i<3; i++) //pętla wypisująca planszę
    {
        for(int j=0; j<3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    while(true)
    {
        cout << "Gracz " << player << ", wybierz pole: ";
        cin >> n;

        row = (n-1)/3; //obliczanie współrzędnych pola
        column = (n-1)%3;

        if(n>=1 && n<=9) //sprawdzanie, czy wybrane pole jest w zakresie
        {
            if(board[row][column] != 'X' && board[row][column] != 'Y') //sprawdzanie, czy wybrane pole jest wolne
            {
                board[row][column] = player; //ustawianie znaku gracza na wybranym polu
                if(player == 'X') //zmiana gracza
                    player = 'Y';
                else
                    player = 'X';
            }
            else
            {
                cout << "Pole jest juz zajete. Wybierz inne pole.\n";
                continue;
            }
        }
        else
        {
            cout << "Nieprawidlowa liczba! Wybierz liczbe z zakresu od 1 do 9.\n";
            continue;
        }

        cout << endl;

        //sprawdzanie czy któryś z graczy wygrał
        if( (board[0][0] == board[0][1] && board[0][1] == board[0][2]) || 
        (board[1][0] == board[1][1] && board[1][1] == board[1][2]) || 
        (board[2][0] == board[2][1] && board[2][1] == board[2][2]) || 
        (board[0][0] == board[1][0] && board[1][0] == board[2][0]) || 
        (board[0][1] == board[1][1] && board[1][1] == board[2][1]) || 
        (board[0][2] == board[1][2] && board[1][2] == board[2][2]) || 
        (board[0][0] == board[1][1] && board[1][1] == board[2][2]) || 
        (board[0][2] == board[1][1] && board[1][1] == board[2][0]) )
        {
            if(player == 'X') //zmiana gracza bo inaczej następuje lekka kraksa
                    player = 'Y';
                else
                    player = 'X';
            cout << "Gracz " << player << " wygral!" << endl;
            break;
        }

        //sprawdzanie czy nastąpił remis
        bool draw = true;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(board[i][j] != 'X' && board[i][j] != 'Y')
                    draw = false;
            }
        }
        if(draw == true)
        {
            cout << "Remis" << endl;
            break;
        }

        //wypisywanie planszy
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}