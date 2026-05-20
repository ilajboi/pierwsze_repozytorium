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

// Funkcja sprawdzająca czy liczba jest pierwsza (dodana w Poleceniu 5)
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
        cout << "1. Oblicz silnie dla liczby a" << endl;
        cout << "2. Sprawdz czy liczba a jest pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        // Obsługa wyboru użytkownika - połączone menu
        if (wyjscie == 1) {
            cout << "Silnia z liczby " << a << " wynosi: " << obliczSilnie(a) << endl;
        } 
        else if (wyjscie == 2) {
            if (czyPierwsza(a)) {
                cout << "Liczba " << a << " JEST liczba pierwsza." << endl;
            } else {
                cout << "Liczba " << a << " NIE JEST liczba pierwsza." << endl;
            }
        } 
        else if (wyjscie != 0) {
            cout << "Niepoprawny wybor!" << endl;
        }

    } while(wyjscie != 0);
    return 0;
}