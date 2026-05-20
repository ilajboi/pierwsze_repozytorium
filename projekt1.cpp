#include <iostream>

using namespace std;

// Funkcja wyznaczająca silnię liczby (dodana w Poleceniu 3)
long long obliczSilnie(int n) {
    if (n < 0) return 0; 
    long long wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
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
        cout << "1. Oblicz silnie dla liczby a" << endl; // Nowa opcja w menu
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        // Obsługa wyboru użytkownika
        if (wyjscie == 1) {
            cout << "Silnia z liczby " << a << " wynosi: " << obliczSilnie(a) << endl;
        } else if (wyjscie != 0) {
            cout << "Niepoprawny wybor!" << endl;
        }

    } while(wyjscie != 0);
    return 0;
}