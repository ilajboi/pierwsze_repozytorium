#include <iostream>

using namespace std;

// Polecenie 5
bool czyPierwsza(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Sprawdz czy liczba a jest pierwsza" << endl; // Nowa opcja w menu
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        // Obsługa wyboru użytkownika
        if (wyjscie == 1) {
            if (czyPierwsza(a)) {
                cout << "Liczba " << a << " JEST liczba pierwsza." << endl;
            } else {
                cout << "Liczba " << a << " NIE JEST liczba pierwsza." << endl;
            }
        } else if (wyjscie != 0) {
            cout << "Niepoprawny wybor!" << endl;
        }

    } while(wyjscie != 0);
    return 0;
}