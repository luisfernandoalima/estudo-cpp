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

    cout << "Insira o raio da lata de óleo: " << endl;
    cin >> raioDaLata;

    cout << "\nInsira a altura da lata de óleo: " <<endl;
    cin >> alturaDaLata;

    double volumeDaLata = PI* pow(raioDaLata, 2) *alturaDaLata;

    cout << "\nO volume da lata de óleo é: " << volumeDaLata << endl;

    system("pause");
    return 0;
}
