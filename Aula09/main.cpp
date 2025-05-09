// sizeof() = Determina número de bytes para um tipo
// malloc(n, size) = aloca memória para o armazenamento de um datatype
// calloc(n, size) = igual o malloc, mas instancia tudo em 0
// free() = Libera a memória

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

double genRandomValues()
{
    return (double)rand() / RAND_MAX;
}

double getMedia(double *ai, int n)
{
    double media = 0;
    for (int i = 0; i < n; i++)
    {
        media += ai[i];
    }

    return media / n;
}

double getSoma(double *ai, int n)
{
    double soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += ai[i];
    }

    return soma;
}

double getBiggest(double *ai, int n)
{
    double maior;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || ai[i] > maior)
            maior = ai[i];
    }

    return maior;
}

double getSmaller(double *ai, int n)
{
    double menor;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || ai[i] < menor)
            menor = ai[i];
    }

    return menor;
}

void getValues()
{
    int n;
    cout << "Quantos valores você deseja que sejam gerados?" << endl;
    cin >> n;

    double *ai = (double *)calloc(n, sizeof(double));

    for (int i = 0; i < n; i++)
    {
        ai[i] = genRandomValues();
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "- " << ai[i] << endl;
    }

    cout << "Média dos valores: " << getMedia(ai, n) << endl;
    cout << "Soma dos valores: " << getSoma(ai, n) << endl;
    cout << "Maior valor: " << getBiggest(ai, n) << endl;
    cout << "Menor valor: " << getSmaller(ai, n) << endl;

    free(ai);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tecla;

    do
    {
        system("cls");
        srand(time(NULL));
        cout << "-- MENU --" << endl;
        cout << "1- Gerar valores" << endl;
        cout << "2- Sair" << endl;

        cin >> tecla;

        switch (tecla)
        {
        case 1:
            getValues();
            system("pause");
            break;
        case 2:
            cout << "Saindo..." << endl;
            break;
        default:
            cout << "Opção inválida" << endl;
            system("pause");
            break;
        }

    } while (tecla != 2);

    return 0;
}