#include <iostream>
#include <cstdlib>
using namespace std;

struct valores
{
    float SM = 0, PR = 0, NS;
};
struct valores tb;

float lerSalario();
float lerPorcentagem();
void mostrarValores();

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int tecla;

MAIN:
    system("cls");
    cout << "--MENU--" << endl;
    cout << "1- Inserir salário;" << endl;
    cout << "2- Inserir porcentagem de reajuste;" << endl;
    cout << "3- Mostrar reajuste;" << endl;
    cout << "4- Sair" << endl;
    cin >> tecla;
    switch (tecla)
    {
    case 1:
        tb.SM = lerSalario();
        break;
    case 2:
        tb.PR = lerPorcentagem();
        break;
    case 3:
        mostrarValores();
        system("pause");
        break;
    case 4:
        exit(0);
        break;
    }

    goto MAIN;

    return 0;
}

float lerSalario()
{
    float salario;
    cout << "Insira o salário mensal do trabalhador:" << endl;
    cin >> salario;
    return salario;
}
float lerPorcentagem()
{
    float porcentagem;
    cout << "Insira a porcentagem de reajuste:" << endl;
    cin >> porcentagem;
    return porcentagem;
}
void mostrarValores()
{
    cout << "Salário mensal | Percentual de reajuste | Novo salário" << endl;
    cout << "R$" << tb.SM << " | " << tb.PR << "%" << " | ";

    tb.NS = tb.SM * (1 + (tb.PR / 100));
    cout << "R$" << tb.NS << endl;

    return;
}