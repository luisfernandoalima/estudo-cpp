#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double celsiusTemp, fahrenheitTemp;

    cout << "Insira a temperatura em celsius (�C)" << endl;
    cin >> celsiusTemp;

    fahrenheitTemp = (9 * celsiusTemp + 160)/5;

    cout << "A temperatura " << celsiusTemp << "C� � equivalente a " << fahrenheitTemp << "�F." << endl;

    system("pause");
    return 0;
}
