#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double valorOriginalDaPrestacao, tempoDeAtraso, taxaDoAtraso;

    cout << "Qual � o valor original da presta��o? (R$) " << endl;
    cin >> valorOriginalDaPrestacao;

    cout << "\nA quanto tempo o pagamento est� atrasado? " << endl;
    cin >> tempoDeAtraso;

    cout << "\nQual � a taxa do atraso? " << endl;
    cin >> taxaDoAtraso;

    double novoValor = valorOriginalDaPrestacao + (valorOriginalDaPrestacao*taxaDoAtraso/100) * tempoDeAtraso;

    cout << "\nO valor atual da presta��o � de: R$"<< novoValor<<endl;

    system("pause");
    return 0;
}
