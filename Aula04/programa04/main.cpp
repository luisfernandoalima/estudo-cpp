#include <iostream>
#include <cstdlib>
using namespace std;

const int array_lenght = 5;
int linha = -1;
float Divida[array_lenght], Dias[array_lenght], ValorMulta[array_lenght], ValorPagar[array_lenght], ValorJuros[array_lenght];

int lerDias();
float lerDivida();
void lerDados();
void salvarDados(float divida, int dias);
void mostrarDados();

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    Main:
        char tecla;
        cout << "--MENU--" << endl;
        cout << "1- Inserir valores" << endl;
        cout << "2- Exibir valores" << endl;
        cout << "3- Sair" << endl;

        cout << "Escolha uma opção:" << endl;

        cin >> tecla;
        switch(tecla){
        case '1':
            lerDados();
            break;
        case '2':
            mostrarDados();
            break;
        case '3':
            exit(0);
            break;

        }
    goto Main;


    return 0;
}

int lerDias(){
    int dias;
    cout << "Insira o número de dias em atraso: " << endl;
    cin >> dias;
    return dias;
};
float lerDivida(){
    float divida;
    cout << "Insira o valor da prestação em atraso: " << endl;
    cin >> divida;
    return divida;
}

void lerDados(){
    float divida_ = lerDivida();
    int dias_ = lerDias();
    salvarDados(divida_, dias_);
    return;
}

void salvarDados(float divida, int dias){
    linha ++;
    Divida[linha] = divida;
    Dias[linha] = dias;

    ValorJuros[linha] = Divida[linha]*0.01*(Dias[linha]/30);
    ValorMulta[linha] = Divida[linha] * 0.02;
    ValorPagar[linha] = Divida[linha] + ValorMulta[linha] + ValorJuros[linha];

    return;
}

void mostrarDados(){
    cout << "Valor Total | Valor da multa | Valor dos juros\n" << endl;
    for(int i=0; i < array_lenght; i++){
        cout << ValorPagar[i] << " | " << ValorMulta[i] << " | " << ValorJuros[i] << endl;
    }
    system("pause");
}
