#include <iostream>
#include <cstdlib>
#include <math.h>
#define PI 3.1415
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    double raioDaLata, alturaDaLata;

    cout << "Insira o raio da lata de �leo: " << endl;
    cin >> raioDaLata;

    cout << "\nInsira a altura da lata de �leo: " <<endl;
    cin >> alturaDaLata;

    double volumeDaLata = PI* pow(raioDaLata, 2) *alturaDaLata;

    cout << "\nO volume da lata de �leo �: " << volumeDaLata << endl;

    system("pause");
    return 0;
}
