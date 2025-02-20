#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double valorOriginalDaPrestacao, tempoDeAtraso, taxaDoAtraso;

    cout << "Qual é o valor original da prestação? (R$) " << endl;
    cin >> valorOriginalDaPrestacao;

    cout << "\nA quanto tempo o pagamento está atrasado? " << endl;
    cin >> tempoDeAtraso;

    cout << "\nQual é a taxa do atraso? " << endl;
    cin >> taxaDoAtraso;

    double novoValor = valorOriginalDaPrestacao + (valorOriginalDaPrestacao*taxaDoAtraso/100) * tempoDeAtraso;

    cout << "\nO valor atual da prestação é de: R$"<< novoValor<<endl;

    system("pause");
    return 0;
}
