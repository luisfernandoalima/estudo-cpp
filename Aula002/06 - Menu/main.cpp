#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
using namespace std;

double const PI = 3.1415;

double calcularDiametro(double circunferencia);
double calcularRaio(double circunferencia);
double calcularArea(double circunferencia);

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double circunferencia;
    double diametro, raio, area;

    char tecla;
    // True enquanto n�o apertar o esc
    while (tecla != 27){
        system("cls");
        cout << "Insira o valor da circunfer�ncia do c�rculo: " << endl;
        cin >> circunferencia;
        cout << "\n--Menu--" << endl;
        cout << "1- Calcular o di�metro" <<endl;
        cout << "2- Calcular o raio" <<endl;
        cout << "3- Calcular o �rea" <<endl;
        tecla = getch();
        switch(tecla){
            case '1':
                diametro = calcularDiametro(circunferencia);
                cout << "\nO valor do di�metro do c�rculo �: " << diametro << "\n" << endl;
                system("pause");
                break;
            case '2':
                raio = calcularRaio(circunferencia);
                cout << "\nO valor do raio do c�rculo �: " << raio << "\n" << endl;
                system("pause");
                break;
            case '3':
                area = calcularArea(circunferencia);
                 cout << "\nO valor da �rea do c�rculo �: " << area << "\n" << endl;
                system("pause");
                break;
        }
    }

    system("pause");
    return 0;
}

double calcularDiametro(double circunferencia){
    return circunferencia/PI;
}

double calcularRaio(double circunferencia){
return calcularDiametro(circunferencia)/2;
}

double calcularArea(double circunferencia){
return (pow(circunferencia, 2))/(4*PI);
}
