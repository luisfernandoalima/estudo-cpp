#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

double A, B, C;
double realizarConta(double numero);

int main() {
    double resultado = 0;

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira o primeiro valor" << endl;
    cin >> A;
    resultado += realizarConta(A);

    cout << "Insira o segundo valor" << endl;
    cin >> B;
    resultado += realizarConta(B);

    cout << "Insira o terceiro valor" << endl;
    cin >> C;
    resultado += realizarConta(C);

    cout << "A soma dos quadrados de:" << A << ", " << B <<" e "<< C << " é igual a: " << resultado << endl;

    system("pause");
    return 0;
}

double realizarConta(double numero){
    return pow(numero, 2);
}
