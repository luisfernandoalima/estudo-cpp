#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

double A, B, C;
double realizarConta(double numero);

int main() {
    double resultadoSoma = 0, resultadoQuadrado;

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira o primeiro valor" << endl;
    cin >> A;
    resultadoSoma += A;

    cout << "Insira o segundo valor" << endl;
    cin >> B;

    resultadoSoma += B;

    cout << "Insira o terceiro valor" << endl;
    cin >> C;
    resultadoSoma += C;

    resultadoQuadrado = realizarConta(resultadoSoma);

    cout << "A soma dos números é igual a: " << resultadoSoma << ". E o quadrado desse número é: " <<  resultadoQuadrado << endl;

    system("pause");
    return 0;
}

double realizarConta(double numero){
    return pow(numero, 2);
}
