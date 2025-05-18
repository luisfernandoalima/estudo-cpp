#include <iostream>
#include <cstdlib>
using namespace std;

// Criando a estrutura da pilha
typedef struct nopilha pilha;
struct nopilha
{
    int valor;
    pilha *ant;
};

pilha *topo = NULL;

// Adicionando elementos na pilha
void push(int value)
{
    pilha *newElement = (pilha *)malloc(sizeof(pilha));

    if (newElement == NULL)
    {
        cout << "Erro!!!" << endl;
        return;
    }

    newElement->valor = value;
    newElement->ant = topo;
    topo = newElement;
}

// Removendo elementos
void pop()
{
    pilha *temp;

    temp = topo;
    topo = temp->ant;
    cout << "O valor " << temp->valor << " foi desempilhado" << endl;
    free(temp);
    system("sleep 3");
}

// Ler pilha
void showPilha()
{
    pilha *temp;
    temp = topo;
    while (temp != NULL)
    {
        cout << '\n'
             << temp->valor << endl;
        temp = temp->ant;
    }

    system("sleep 3");
}

// Finalizar pilha

void destrutor()
{
    pilha *temp;
    while (topo != NULL)
    {
        temp = topo;
        topo = temp->ant;
        free(temp);
    }
    free(topo);

    cout << "\nPilha destruída!" << endl;
    system("sleep 3");
}

int main()
{
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    int option, value;

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
            cout << "Insira um valor:" << endl;
            cin >> value;
            push(value);
            system("clear");
            break;
        case 2:
            pop();
            system("clear");
            break;
        case 3:
            showPilha();
            system("clear");
            break;
        case 4:
            destrutor();
            system("clear");
            exit(0);
            break;
        }
    } while (option != 4);

    return 0;
}