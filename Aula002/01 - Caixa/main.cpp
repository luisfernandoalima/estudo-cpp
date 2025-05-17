#include <iostream>
#include <cstdlib>
using namespace std;

double calcularVolume(double largura, double altura, double comprimento);

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double valorLargura, valorAltura, valorComprimento;

    cout << "Insira o comprimento da caixa:"<<endl;
    cin >> valorComprimento;

    cout << "Insira a largura da caixa: " <<endl;
    cin >> valorLargura;

    cout << "Insira a altura da caixa: " << endl;
    cin >> valorAltura;

    double volume = calcularVolume(valorLargura, valorAltura, valorComprimento);

    cout << "O volume da caixa é: " << volume << endl;

    system("pause");
    return 0;
}

double calcularVolume(double largura, double altura, double comprimento){
    return largura * altura * comprimento;
}
