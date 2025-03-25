#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

const int array_lenght = 2;
int linha=-1;

int Idade[array_lenght];
string Nome[array_lenght];

string lerNome();
int lerIdade();
void salvarDados(string nome, int idade);
void listarDados();
void lerDados ();

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int tecla;

    MENU:
        cout << "\n--MENU--" <<endl;
        cout << "1- Inserir nome e idade;" <<endl;
        cout << "2- Listar dados;" <<endl;
        cout << "3- Sair." <<endl;
        cin >> tecla;
        switch(tecla){
        case 1:
            lerDados();
            break;
        case 2:
            listarDados();
            break;
        case 3:
            exit(0);
            break;
        }
    goto MENU;

    return 0;
}

string lerNome(){
    string nome;
    cout << "\nInsira o nome:" << endl;
    cin.ignore();
    getline(cin, nome);
    return nome;
};


int lerIdade(){
    int idade;
    cout << "\nInsira a idade:" << endl;
    cin >> idade;
    return idade;
}

void salvarDados(string nome, int idade){
    linha ++;
    Nome[linha] = nome;
    Idade[linha] = idade;

    return;
}

void lerDados () {
    string nome_ = lerNome();
    int idade_ = lerIdade();

    salvarDados(nome_, idade_);
    return;
}

void listarDados(){
    int maiorIdade, menorIdade, saldo;
    string nomeMaiorIdade, nomeMenorIdade;
    for(int i = 0; i< array_lenght; i++){
        cout << i+1 << " | " << Nome[i] << " | " << Idade[i] << endl;
    }

    for(int i = 0; i< array_lenght; i++){
        if(Idade[i] > maiorIdade || i == 0){
            maiorIdade = Idade[i];
            nomeMaiorIdade = Nome[i];
        }
        if(Idade[i] < menorIdade || i == 0) {
            menorIdade = Idade[i];
            nomeMenorIdade = Nome[i];
        }
    }
    cout << "\nQuem tem a maior idade:" << nomeMaiorIdade <<endl;
    cout << "Quem tem a menor idade:" << nomeMenorIdade << endl;

    saldo = maiorIdade - menorIdade;
    cout << "Saldo das idades:" << saldo << endl;

    system("pause");
    return;
}
