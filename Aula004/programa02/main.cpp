#include "iostream"
#include "cstdlib"
using namespace std;

int vet[]= {1,3,4,-1};

float MediaVetor(){
    float soma = 0;
    int n = sizeof(vet)/sizeof(int);

    for(int i = 0; i < n; i++){
        soma += vet[i];
    }

    float media = soma/n;

    return media;
}

int main(){
    float vlmedia = MediaVetor();
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    char tecla;
    MENU:
        cout << "**MENU**"<< endl;
        cout << "1- Mostrar média" << endl;
        cout << "2- Sair" << endl;
        cin >> tecla;
        switch(tecla){
        case '1':
            cout << vlmedia << endl;
            system("pause");
            break;
        case '2':
            exit(0);
            break;
        }
    goto MENU;
    return 0;
}
