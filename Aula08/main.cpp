#include <iostream>
#include <cstdlib>
using namespace std;

const int array_lenght = 2;

struct pessoa
{
    string nome[array_lenght];
    int idade[array_lenght];
    string sexo[array_lenght];
    double salario[array_lenght];
    double salarioNovo[array_lenght];
};

typedef pessoa t_pessoa;

t_pessoa tabela;
t_pessoa *pttabela = &tabela;
int linha = -1;

string ler_nome()
{
    string nome;
    cin.ignore();
    cout << "Insira o nome: " << endl;
    getline(cin, nome);
    return nome;
}

int ler_idade()
{
    int idade;
    cout << "Insira a idade: " << endl;
    cin >> idade;
    return idade;
}

string ler_sexo()
{
    string sexo;
    cin.ignore();
    cout << "Insira o sexo: ";
    getline(cin, sexo);
    return sexo;
}

double ler_salario()
{
    double salario;
    cout << "Insira o salário: " << endl;
    cin >> salario;
    return salario;
}

float getAumento(double *salario)
{
    return *salario * 1.1;
}

void NovaLinhaStruct()
{
    linha++;
    pttabela->nome[linha] = ler_nome();
    pttabela->idade[linha] = ler_idade();
    pttabela->sexo[linha] = ler_sexo();
    pttabela->salario[linha] = ler_salario();
    pttabela->salarioNovo[linha] = getAumento(&pttabela->salario[linha]);
    return;
}

void listarLinhaStruct()
{
    cout << "Índice  |  Nome  |  Idade  |  Sexo  |  Salário  |  Novo Salário" << endl
         << endl;
    for (int i = 0; i < array_lenght; i++)
    {
        cout << i << " | " << pttabela->nome[i] << " | " << pttabela->idade[i] << " | " << pttabela->sexo[i] << " | " << pttabela->salario[i] << " | " << pttabela->salarioNovo[i] << endl
             << endl;
    }
    return;
}

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int tecla = 0;

    do
    {
        system("cls");
        cout << "***MENU***" << endl;
        cout << "1-Ler linha \n2-Mostrar \n3- Sair" << endl;
        cout << "\nEscolha uma opção:" << endl;
        cin >> tecla;

        switch (tecla)
        {
        case 1:
            NovaLinhaStruct();
            system("pause");
            break;
        case 2:
            listarLinhaStruct();
            system("pause");
            break;
        case 3:
            cout << "Finalizando..." << endl;
            system("pause");
            break;
        default:
            cout << "Opção inválida." << endl;
            system("pause");
            break;
        }
    } while (tecla != 3);

    return 0;
}