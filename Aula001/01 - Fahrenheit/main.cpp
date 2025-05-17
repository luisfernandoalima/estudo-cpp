#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double celsiusTemp, fahrenheitTemp;

    cout << "Insira a temperatura em celsius (ºC)" << endl;
    cin >> celsiusTemp;

    fahrenheitTemp = (9 * celsiusTemp + 160)/5;

    cout << "A temperatura " << celsiusTemp << "Cº é equivalente a " << fahrenheitTemp << "ºF." << endl;

    system("pause");
    return 0;
}
