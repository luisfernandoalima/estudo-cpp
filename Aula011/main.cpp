#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct noFifo
{
    long long int cpf;
    char *nome;
    char *email;
    long long int telefone;
    noFifo *prox;
};

int total;

noFifo *primeiroNo;
noFifo *ultimoNo;

bool vazia()
{
    if (primeiroNo == NULL)
    {
        return true;
    }
    return false;
}

void construtor()
{
    primeiroNo = ultimoNo = NULL;
    total = 0;
    cout << "--Fifo iniciada--" << endl;
    system("sleep 2");
}

void setNewValues()
{
    noFifo *newFifo = (noFifo *)malloc(sizeof(noFifo));

    if (newFifo == NULL)
    {
        cout << "Erro ao alocar memória" << endl;
        return;
    }

    char bufferNome[100];
    char bufferEmail[100];
    long long int cpf, telefone;

    cout << "Insira o CPF: " << endl;
    cin >> cpf;

    cin.ignore();
    cout << "Insira o nome: " << endl;
    cin.getline(bufferNome, sizeof(bufferNome));

    cout << "Insira o email: " << endl;
    cin.getline(bufferEmail, sizeof(bufferEmail));

    cout << "Insira o telefone: " << endl;
    cin >> telefone;

    newFifo->cpf = cpf;
    newFifo->nome = (char *)malloc(strlen(bufferNome) + 1);
    strcpy(newFifo->nome, bufferNome);
    newFifo->email = (char *)malloc(strlen(bufferEmail) + 1);
    strcpy(newFifo->email, bufferEmail);
    newFifo->telefone = telefone;
    newFifo->prox = NULL;

    total++;

    if (vazia())
    {
        primeiroNo = newFifo;
        ultimoNo = newFifo;
    }
    else
    {
        ultimoNo->prox = newFifo;
        ultimoNo = newFifo;
    }
}

void removeValue()
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

void showValues()
{
    noFifo *temp;
    temp = primeiroNo;

    while (temp != NULL)
    {
        cout << temp->cpf << "  " << temp->nome << "  " << temp->email << "  " << temp->telefone << endl;
        temp = temp->prox;
    }

}

void destrutor()
{
    
    noFifo *temp;

    while (primeiroNo != NULL)
    {
        temp = primeiroNo;
        primeiroNo = primeiroNo->prox;

        free(temp->nome);
        free(temp->email);
        free(temp);
    }

    ultimoNo = NULL;
    total = 0;

    cout << "--FIFO destruída--" << endl;
    system("sleep 3");
}

void menu()
{
    int tecla;

    do
    {

        cout << "---Menu---" << endl;
        cout << "1- Adicionar pessoa;" << endl;
        cout << "2- Remover pessoa;" << endl;
        cout << "3- Visualizar fila;" << endl;
        cout << "4- Sair." << endl;
        cin >> tecla;

        switch (tecla)
        {
        case 1:
            setNewValues();
            break;
        case 2:
            removeValue();
            break;
        case 3:
            showValues();
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

    construtor();
    menu();

    return 0;
}