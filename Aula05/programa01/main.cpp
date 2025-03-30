#include <iostream>
#include <cstdlib>
using namespace std;

struct valores
{
    int A = 0, B = 0, C = 0, D = 0, P, S;
};
struct valores tb;

void lerValores();
void mostrarValores();
int pegarNumero(int numeroValor);
int pegarProduto();
int pegarSoma();

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int tecla;

MAIN:
    system("cls");
    cout << "--MENU--" << endl;
    cout << "1- Ler valores" << endl;
    cout << "2- Mostrar valores" << endl;
    cout << "3- Mostrar produto do 1º valor com o 3º valor;" << endl;
    cout << "4- Mostrar soma do 2º valor com o 4º valor;" << endl;
    cout << "5- Sair" << endl;
    cin >> tecla;
    switch (tecla)
    {
    case 1:
        lerValores();
        break;
    case 2:
        mostrarValores();
        break;
    case 3:
        tb.P = pegarProduto();
        cout << "Produto do 1º valor com o 3º valor:" << tb.P << endl;
        system("pause");
        break;
    case 4:
        tb.S = pegarSoma();
        cout << "Soma do 2º valor com o 4º valor:" << tb.S << endl;
        system("pause");
        break;
    case 5:
        exit(0);
        break;
    }

    goto MAIN;

    return 0;
}

int pegarNumero(int numeroValor)
{
    int valor;
    cout << "Insira o " << numeroValor << "º valor" << endl;
    cin >> valor;
    return valor;
}

void lerValores()
{
    tb.A = pegarNumero(1);
    tb.B = pegarNumero(2);
    tb.C = pegarNumero(3);
    tb.D = pegarNumero(4);
    return;
}

void mostrarValores()
{
    cout << "Valores inseridos:" << endl;
    cout << tb.A << " | ";
    cout << tb.B << " | ";
    cout << tb.C << " | ";
    cout << tb.D << endl;
    system("pause");
    return;
}

int pegarProduto()
{
    int produto = tb.A * tb.C;
    return produto;
}

int pegarSoma()
{
    int soma = tb.B + tb.D;
    return soma;
}