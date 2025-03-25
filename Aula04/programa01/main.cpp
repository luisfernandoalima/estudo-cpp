#include "iostream"
#include "cstdlib"
using namespace std;

int xy[]= {1, 5, 10, -1};

void maiorMenor() {
    int maior, menor;
    int tot = sizeof(xy)/sizeof(int);

    for(int i = 0; i<tot;i++){
        if(xy[i] > maior || i == 0) maior = xy[i];
        if(xy[i] < menor || i == 0) menor = xy[i];
    }
    cout << "\nMaior:" << maior;
    cout << "\nMenor:" << menor << endl;
    system("pause");
}

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    char tecla;
    MENU:
        cout << "**MENU**"<< endl;
        cout << "1- Mostrar maior e menor número" << endl;
        cout << "2- Sair" << endl;
        cin >> tecla;
        switch(tecla){
        case '1':
            maiorMenor();
            break;
        case '2':
            exit(0);
            break;
        }
    goto MENU;
    return 0;
}
