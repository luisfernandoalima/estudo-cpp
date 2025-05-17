#include <iostream>
#include <cstdlib>
#define max_lenght 3
using namespace std;

struct Funcionario
{
    int index;
    string nome[max_lenght];
    int idade[max_lenght];
    float salario[max_lenght];
};
typedef Funcionario Funcionario_t;

string lerNome()
{
    string nome;
    cout << "Digite o nome do funcionário:" << endl;
    cin.ignore();
    getline(cin, nome);
    return nome;
}

int lerIdade()
{
    int idade;
    cout << "Digite a idade do funcionário:" << endl;
    cin >> idade;
    return idade;
}

float lerSalario()
{
    float salario;
    cout << "Digite o salário do funcionário:" << endl;
    cin >> salario;
    return salario;
}

bool pilhaCheia(Funcionario_t pilha)
{
    if (pilha.index == max_lenght - 1)
        return true;
    return false;
}

bool pilhaVazia(Funcionario_t pilha)
{
    if (pilha.index == -1)
        return true;
    return false;
}

Funcionario_t push(string nome, int idade, float salario, Funcionario_t pilha)
{
    if (pilhaCheia(pilha))
    {
        cout << "A pilha está cheia!" << endl;
        system("pause");
        return pilha;
    }
    pilha.index++;
    pilha.nome[pilha.index] = nome;
    pilha.idade[pilha.index] = idade;
    pilha.salario[pilha.index] = salario;
    cout << "Os dados: " << pilha.nome[pilha.index] << ", " << pilha.idade[pilha.index] << " e " << pilha.salario[pilha.index] << " foram empilhados..." << endl;
    system("pause");
    return pilha;
}

Funcionario_t pop(Funcionario_t pilha)
{
    if (pilhaVazia(pilha))
    {
        cout << "A pilha está vazia!" << endl;
        system("pause");
        return pilha;
    }

    cout << "Os dados: " << pilha.nome[pilha.index] << ", " << pilha.idade[pilha.index] << " e " << pilha.salario[pilha.index] << " serão desempilhados..." << endl;
    system("pause");
    pilha.nome[pilha.index] = '\0';
    pilha.idade[pilha.index] = '\0';
    pilha.salario[pilha.index] = '\0';
    pilha.index--;
    return pilha;
}

void mostrarPilha(Funcionario_t pilha)
{
    if (pilhaVazia(pilha))
    {
        cout << "\nA pilha está vazia!..." << endl;
        system("pause");
        return;
    }

    for (int i = pilha.index; i >= 0; i--)
    {
        cout << pilha.nome[i] << " | " << pilha.idade[i] << " | " << pilha.salario[i] << endl;
        system("pause");
    }
}

int tela()
{
    int item;
    system("cls");
    cout << "--MENU--\n1- Push\n2- Pop\n3- Mostrar dados\n4- Sair\nEscolha uma opção:" << endl;
    cin >> item;
    return item;
}

void controle(Funcionario_t pilha)
{
    pilha.index = -1;
    int tecla;
    string nome;
    int idade;
    float salario;

    do
    {
        tecla = tela();

        switch (tecla)
        {
        case 1:
            nome = lerNome();
            idade = lerIdade();
            salario = lerSalario();
            pilha = push(nome, idade, salario, pilha);
            break;
        case 2:
            pilha = pop(pilha);
            break;
        case 3:
            mostrarPilha(pilha);
            break;
        }
    } while (tecla != 4);
}

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    Funcionario_t pilha;
    controle(pilha);
    return 0;
}