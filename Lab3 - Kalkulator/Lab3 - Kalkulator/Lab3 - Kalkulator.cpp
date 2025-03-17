// Lab3 - Kalkulator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
double mem;
bool mem_used;

double add(double a, double b);
double sub(double a, double b);
double mult(double a, double b);
double div(double a, double b);
double modulo(double a, double b);
void menu();
void erase();
void oblicz(int tryb, double liczba1, double liczba2);
void err(int code);

void menu() {
    int n;
    double a;
    double b;
    double wynik;
    cout << "Wybierz operacje"<<endl<<"1) +"<<endl<<"2) -"<<endl<<"3) *"<<endl<<"4) /"<<endl<<"5) %"<<endl<<"6) Wyczyść M";
    cin >> n;
    if (mem_used == 0) {
        cout << "Wybierz 2 liczby na której chcesz wykonać operacje: " << endl;
        cin >> a;
        cin >> b;
    }
    cout << "1) Wyświetl" << endl << "2) Zapisz do mem" << endl << "3) Zapisz do mem i wyświetl";
    switch ()
    {
    default:
        break;
    }
}

void oblicz(int tryb, double liczba1, double liczba2) {
    switch (tryb) {
    case 1:
        wynik = add(liczba1, liczba2);
        break;
    case 2:
        wynik = sub(a, b);
        break;
    case 3:
        wynik = mult(a, b);
        break;
    case 4:
        wynik = div(a, b);
        break;
    case 5:
        wynik = modulo(a, b);
    case 6:
        erase();
        break;
}

//Funkcje operacji
double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mult(double a, double b){
    return a * b;
}

double div(double a, double b){
    return a / b;
}

double modulo(double a, double b){
    return a - (int)(a / b) * b;
}


void kasuj() {
    mem = 0;
    mem_used = 0;
}

int main()
{
    while (true) {
        menu();
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
