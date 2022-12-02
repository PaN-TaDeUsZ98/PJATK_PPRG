#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	int tablica[10][10];

	for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 10; j++) {
		if (i == 0) {
			tablica[i][j] = j;
		}
		else if (i == 1) {
			tablica[i][j] = j + j;
		}
		else if (i == 2) {
			tablica[i][j] = j * j;
		}
		else if (i == 3) {
			tablica[i][j] = i + j;
		}
		else if (i == 4) {
			tablica[i][j] = i - j;
		}
		else {
			tablica[i][j] = 0;
		}

	}
}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << tablica[j][i];
			cout << " ";
		}
		cout << endl;
	}

	
	


	return 0;
}