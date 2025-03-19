#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int array_lenght = 2, linha=-1;

int Idade[array_lenght];
string Nome[array_lenght];

string lerNome();
int lerIdade();
void salvarDados(string nome, int idade);

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    char tecla;

    while(tecla != 27){

        tecla = getch();
        switch(tecla){

        }
    }

    return 0;
}

string lerNome(){
    string nome;
    cout << "Insira o nome:" << endl;
    cin.ignore();
    getline(cin, nome);
    return nome;
};


int lerIdade(){
    int idade;
    cout << "Insira a idade" << endl;
    cin >> idade;
    return idade;
}

void salvarDados(string nome, int idade){
    linha ++;
    Nome[linha] = nome;
    Idade[linha] = idade;

    return;
}
