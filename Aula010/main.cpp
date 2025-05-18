#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

typedef struct tableFuncionario funcionario;
struct tableFuncionario
{
    char *nome;
    double salario;
    funcionario *previous;
};

funcionario *topo = NULL;

void novoFuncionario()
{

    char buffer[100];
    double salario;

    cout << "Insira o nome do funcionário:" << endl;
    cin.ignore();
    cin.getline(buffer, sizeof(buffer));

    size_t tamanho = strlen(buffer) + 1;
    
    cout << "Insira o salário do funcionário:" << endl;
    cin >> salario;
    
    funcionario *novoFuncionario = (funcionario *)malloc(sizeof(funcionario));
    
    if (novoFuncionario == NULL)
    {
        cout << "Erro na alocação da memória" << endl;
        return;
    }
    
    novoFuncionario->nome = (char*) malloc(tamanho);
    strcpy(novoFuncionario->nome, buffer);
    novoFuncionario->salario = salario;
    novoFuncionario->previous = topo;
    topo = novoFuncionario;
}

void excluirFuncionario()
{
    funcionario *temp;
    temp = topo;
    topo = temp->previous;
    cout << "O funcionário " << temp->nome << " foi excluído!" << endl;
    free(temp);
    system("sleep 3");
}

void exibirFuncionario()
{
    funcionario *temp;
    temp = topo;
    while (temp != NULL)
    {
        cout << temp->nome << "  |   R$" << temp->salario << endl;
        temp = temp->previous;
    }

    system("sleep 3");
    return;
}

void destrutor()
{
    funcionario *temp;

    while (topo != NULL)
    {
        temp = topo;
        topo = temp->previous;
        free(temp);
    }
    free(topo);
    cout << "Pilha destruída" << endl;
    system("sleep 3");
}

void menu()
{
    int option;

    do
    {
        cout << "---Menu---" << endl;
        cout << "1- Adicionar item;" << endl;
        cout << "2- Remover item;" << endl;
        cout << "3- Visualizar pilha;" << endl;
        cout << "4- Sair." << endl;
        cin >> option;

        switch (option)
        {
        case 1:

            novoFuncionario();
            break;
        case 2:
            excluirFuncionario();
            system("clear");
            break;
        case 3:
            exibirFuncionario();
            system("clear");
            break;
        case 4:
            destrutor();
            exit(0);
            break;
        }

    } while (option != 4);
}

int main()
{
    system("clear");
    setlocale(LC_ALL, "Portuguese");
    menu();
    return 0;
}