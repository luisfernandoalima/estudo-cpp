#include <iostream>
#include <cstdlib>
using namespace std;

double dolar;

double converterMoeda(double reais);

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double valorEmReal, resultado;

    cout << "Insira a cota��o atual do d�lar: " << endl;
    cin >> dolar;

    cout << "Insira o valor em reais (R$) que deseja converter: " << endl;
    cin >> valorEmReal;

    resultado = converterMoeda(valorEmReal);

    cout << "O valor convertido em d�lar � igual �: US$" << resultado << endl;

    system("pause");
    return 0;
}

double converterMoeda(double reais){
    return reais*dolar;
}
