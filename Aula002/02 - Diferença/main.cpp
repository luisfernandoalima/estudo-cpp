#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int calcularDiferenca(int A, int B);
double calcularQuadrado(int diferenca);

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int A, B, diferenca;
    double resultado;

    cout << "Insira o primeiro valor:" << endl;
    cin >> A;

    cout << "Insira o segundo valor:" <<endl;
    cin >> B;

    diferenca = calcularDiferenca(A, B);
    resultado = calcularQuadrado(diferenca);

    cout << "A diferença entre " << A << " e " << B <<" ao quadrado é: " << resultado << endl;

    system("pause");
    return 0;
}

int calcularDiferenca(int A, int B){
    return A - B;
}

double calcularQuadrado(int diferenca){
    return pow(diferenca, 2);
}
