#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double comprimentoDaCaixa, larguraDaCaixa, alturaDaCaixa;

    cout << "Insira o comprimento da caixa: (cm)" << endl;
    cin >> comprimentoDaCaixa;

    cout << "\nInsira a largura da caixa: (cm)" << endl;
    cin >> larguraDaCaixa;

    cout << "\nInsira a altura da caixa: (cm)" << endl;
    cin >> alturaDaCaixa;

    double volumeDaCaixa = comprimentoDaCaixa*larguraDaCaixa*alturaDaCaixa;

    cout << "\nO volume da caixa é: " << volumeDaCaixa << "cm³" << endl;

    system("pause");
    return 0;
}
