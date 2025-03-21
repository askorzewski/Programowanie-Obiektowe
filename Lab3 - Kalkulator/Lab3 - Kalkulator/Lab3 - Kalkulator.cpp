﻿#include <iostream>
using namespace std;
double mem; //Akumulator
bool mem_used; //Określa czy akumulator jest aktualnie używany
bool error_occured;

double add(double a, double b); //Dodawanie 
double sub(double a, double b); //Odejmowanie
double mult(double a, double b); //Mnożenie
double div(double a, double b); //Dzielenie
double modulo(double a, double b); //Modulo
void menu(); //Wyświetlanie menu
void kasuj(); //Czyszczenie akumulatora
void oblicz(int tryb, double liczba1, double liczba2);
void err(int code); //Obsługa błędów

void menu() {
    error_occured = 0;
    int tryb;
    double a;
    cout << "Wybierz operacje:"<<endl<<"1) +"<<endl<<"2) -"<<endl<<"3) *"<<endl<<"4) /"<<endl<<"5) %"<<endl<<"6) Czyszczenie"<<endl;
    cin >> tryb;
    if (tryb == 6) {
        kasuj();
        return;
    }
    else if (mem_used == 0) {
        double b;
        cout << "Podaj 2 liczby na ktorych chcesz wykonac operacje: ";
        cin >> a;
        cin >> b;
        oblicz(tryb, a, b);
        mem_used = 1;
    }
    else {
        cout << "Liczba: ";
        cin >> a;
        oblicz(tryb, mem, a);
    }
    if (error_occured == 1) {
        return;
    }
    cout << "Wynik: " << mem << endl;
    
}

void oblicz(int tryb, double liczba1, double liczba2) {
    switch (tryb) {
    case 1:
        mem = add(liczba1, liczba2);
        break;
    case 2:
        mem = sub(liczba1, liczba2);
        break;
    case 3:
        mem = mult(liczba1, liczba2);
        break;
    case 4:
        mem = div(liczba1, liczba2);
        break;
    case 5:
        mem = modulo(liczba1, liczba2);
        break;
    default:
        err(2);
        break;
    }
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
    if (b == 0) {
        err(1);
        return a;
    }
    return a / b;
}

double modulo(double a, double b){
    if (b == 0) {
        err(1);
        return a;
    }
    //return static_cast<int>(a)% static_cast<int>(b);
    return a - static_cast<int>(a / b) * b;
}

//Funkcje wspomagające
void err(int code) {
    kasuj();
    switch (code)
    {
    case 1:
        cerr << "BLAD: Nie można podzielic przez zero.";
        break;
    case 2:
        cerr << "BLAD: Zla operacja.";
        break;
    default:
        break;
    }
    cout << endl;
    error_occured = 1;
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