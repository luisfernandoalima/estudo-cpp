#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double tempoDaViagem, velocidadeDaViagem;

    cout << "Qual � o tempo gasto da viagem? (Horas) " << endl;
    cin >> tempoDaViagem;

    cout << "\nQual � a velocidade m�dia durante a viagem? (Km/h) " << endl;
    cin >> velocidadeDaViagem;

    double distanciaPercorrida = tempoDaViagem * velocidadeDaViagem;

    double litrosUsados = distanciaPercorrida/12;

    cout << "\nVelocidade m�dia: " << velocidadeDaViagem << "Km/h" << endl;
    cout << "Tempo gasto na viagem: " << tempoDaViagem << " horas" <<endl;
    cout << "Distancia percorrida: " << distanciaPercorrida << "Km" << endl;
    cout << "Quantidade de litros utilizados: " << litrosUsados << " Litros\n" << endl;


    system("pause");
    return 0;
}
