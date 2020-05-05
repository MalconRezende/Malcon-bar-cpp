#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sexo;
    int cerveja, refrigerante, espetinho;
    double consumo, couvert, ingresso, Valor;

    cout << fixed << setprecision(2);

    cout << "Sexo: ";
    cin >> sexo;
    cout << "Quantidade de cervejas: ";
    cin >> cerveja;
    cout << "Quantidade de refrigerantes: ";
    cin >> refrigerante;
    cout << "Quantidade de espetinhos: ";
    cin >> espetinho;

    consumo = (refrigerante * 3) + (espetinho * 7) + (cerveja * 5);

    if (sexo == "F"){
        ingresso = 8;
    }
    else {
        ingresso = 10;
    }
    if (consumo >= 30){
      couvert = 0;
    }
    else {
        couvert = 4;
    }
    Valor = consumo + couvert + ingresso;

    cout <<endl<< "RELATORIO: " <<endl;
    cout << "Consumo = R$ " << consumo <<endl;
    if (couvert == 0){
        cout << "Isento de Couvert" <<endl;
    }
    else {
        cout << "Couvert = R$ " << couvert <<endl;
    }
    cout << "Ingresso = R$ " << ingresso <<endl;
    cout <<endl<< "Valor a pagar = R$ " << Valor <<endl;
    return 0;
}

