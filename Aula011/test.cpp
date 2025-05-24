// FIFO

#include <iostream>
#include <cstdlib>
using namespace std;

int total; // controla o total de elementos

struct noFifo
{
    int chave;
    noFifo *prox; // Ponteiro para guardar o próximo elemento da FIFO
};

noFifo *primeiroNo;
noFifo *ultimoNo;

bool vazia()
{
    if (primeiroNo == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void construtor()
{
    primeiroNo = ultimoNo = NULL;
    total = 0;
    cout << "--FIFO iniciada---" << endl;
    system("sleep 3");
}

void push(int valor)
{
    noFifo *novoNo = (noFifo *)malloc(sizeof(noFifo));

    if (novoNo == NULL)
    {
        cout << "Erro ao alocar memória" << endl;
        system("sleep 3");
        return;
    }

    novoNo->chave = valor;
    novoNo->prox = NULL;
    total++;

    if (vazia() == true)
    {
        primeiroNo = novoNo;
        ultimoNo = novoNo;
    }
    else
    {
        ultimoNo->prox = novoNo;
        ultimoNo = novoNo;
    }
}

void pop()
{
    noFifo *temp;

    temp = primeiroNo;

    if (!vazia())
    {
        primeiroNo = temp->prox;
    }

    free(temp);

    total--;
}

void mostrar()
{
    noFifo *temp;
    temp = primeiroNo;

    while (temp != NULL)
    {
        cout << temp->chave << ' ';
        temp = temp->prox;
    }

    cout << endl;
    system("sleep 3");
    free(temp);
}

void destrutor()
{
    noFifo *temp;
    temp = primeiroNo;
    while (temp != NULL)
    {
        temp = temp->prox;
        free(temp);
    }

    free(primeiroNo);
    free(ultimoNo);

    cout << "--FIFO destruída--" << endl;
    system("sleep 3");
}

void menu()
{
    int valor, tecla;

    do
    {

        cout << "---Menu---" << endl;
        cout << "1- Adicionar item;" << endl;
        cout << "2- Remover item;" << endl;
        cout << "3- Visualizar fila;" << endl;
        cout << "4- Sair." << endl;
        cin >> tecla;

        switch (tecla)
        {
        case 1:
            cout << "Insira o valor:" << endl;
            cin >> valor;
            push(valor);
            break;
        case 2:
            pop();
            break;
        case 3:
            mostrar();
            break;
        case 4:
            destrutor();
            break;
        }

    } while (tecla != 4);
}

int main()
{

    system("clear");
    setlocale(LC_ALL, "Portuguese");

    menu();

    return 0;
}