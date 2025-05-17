#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

int array_lenght;

void readTenElements ();
void returnThreeTimes ();
void readSubtraction ();
void returnExponentiation();
void returnABiggerList ();
void returnADiferentBiggerList ();
void returnReverseArray ();

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    char tecla;

    while(tecla != 27){
        system("cls");
        cout << "--Menu--" << endl;
        cout << "1- Ler e exibir números;" << endl;
        cout << "2- Ler 8 números e mostrar o triplo de cada um;" << endl;
        cout << "3- Rertornar a subtração de duas listas;" << endl;
        cout << "4- Rertornar uma lista de números ao quadrado;" << endl;
        cout << "5- Ler duas listas e retornar a junção delas;" << endl;
        cout << "6- Ler duas listas de tamanhos diferentes e retornar a junção delas;" << endl;
        cout << "7- Retornar uma lista invertida." << endl<<endl;

         cout << "Precione Esc para sair." << endl<<endl;

        cout << "Escolha uma opção:" << endl;
        tecla = getch();
        switch(tecla){
        case '1':
            system("cls");
            readTenElements();
            system("pause");
            break;
        case '2':
             system("cls");
            returnThreeTimes();
            system("pause");
            break;
        case '3':
            system("cls");
            readSubtraction();
            system("pause");
            break;
        case '4':
             system("cls");
            returnExponentiation();
            system("pause");
            break;
        case '5':
            system("cls");
            returnABiggerList();
            system("pause");
            break;
        case '6':
            system("cls");
            returnADiferentBiggerList();
            system("pause");
            break;
        case '7':
            system("cls");
            returnReverseArray();
            system("pause");
            break;

        }
    }
    cout << "Saindo..." <<endl;
    system("pause");
    return 0;
}

void readTenElements (){
    array_lenght = 10;

    int x[array_lenght];

    for(int i = 0; i < array_lenght; i++ ){
        cout << "Digite o " << i + 1 << "º elemento" <<endl;
        cin >> x[i];
    }
    system("cls");
    cout << "Elementos digitados:" << endl;
    for(int i = 0; i < array_lenght; i++){
        cout << x[i] <<endl;
    }

    return;
}


void returnThreeTimes () {
    array_lenght = 8;

    int a[array_lenght];
    int b[array_lenght];

    for(int i = 0; i < array_lenght; i++){
        cout << "Insira o " << i+1 << "º número:" << endl;
        cin >> a[i];
    }
    system("cls");
    cout << "O triplo de cada número é:" << endl;

    for(int i = 0; i < array_lenght; i++){
        b[i] = a[i]*3;
        cout << b[i] << endl;
    }

    return;
}

void readSubtraction (){
    array_lenght = 20;

    int a[array_lenght], b[array_lenght], c[array_lenght];
        cout << "Digite a primeira lista de elementos:" << endl;

    for(int i = 0; i<array_lenght; i++){
        cout << i+1 <<"º elemento:"<<endl;
        cin >> a[i];
    }
    system("cls");
     cout << "Digite a segunda lista de elementos:" << endl;

     for(int i = 0; i<array_lenght; i++){
        cout << i+1 <<"º elemento:"<<endl;
        cin >> b[i];
    }

    system("cls");
    cout << "Resultado da subtração da primeira lista pela segunda lista:" << endl;

    for(int i = 0; i< array_lenght; i++){
        c[i] = a[i] - b[i];
        cout << c[i] << endl;
    }
    return;
}

void returnExponentiation(){
    array_lenght = 15;

    int a[array_lenght], b[array_lenght];

    for(int i = 0; i<array_lenght; i++){
        cout << "Insira o " << i+1 <<"º número:"<<endl;
        cin >> a[i];
    }
    system("cls");
    cout << "Cada número ao quadrado é igual a:" <<endl;

    for(int i = 0; i<array_lenght; i++){
        b[i] = pow(a[i], 2);
        cout << a[i] << " - " << b[i] << endl;
    }

    return;
}

void returnABiggerList () {
    array_lenght = 15;
    int total_array_lenght = array_lenght * 2;

    int a[array_lenght], b[array_lenght], c[total_array_lenght];

    cout << "Digite a primeira lista de elementos:" << endl;

    for(int i = 0; i<array_lenght; i++){
        cout << i+1 <<"º elemento:"<<endl;
        cin >> a[i];
    }
    system("cls");
     cout << "Digite a segunda lista de elementos:" << endl;

     for(int i = 0; i<array_lenght; i++){
        cout << i+1 <<"º elemento:"<<endl;
        cin >> b[i];
    }
    system("cls");
    cout << "Lista com todos os elementos digitados:" << endl;
    for(int i = 0; i< total_array_lenght; i++){
        if(i < array_lenght) c[i] = a[i];
        if(i >= array_lenght) c[i] = b[i-array_lenght];

        cout << c[i] << endl;
    }

    return;
}

void returnADiferentBiggerList () {
    array_lenght = 20;
    int second_array_lenght = 30;

    int total_array_lenght = array_lenght + second_array_lenght;

    int a[array_lenght], b[second_array_lenght], c[total_array_lenght];

    cout << "Digite a primeira lista de elementos:" << endl;

    for(int i = 0; i<array_lenght; i++){
        cout << i+1 <<"º elemento:"<<endl;
        cin >> a[i];
    }
    system("cls");
     cout << "Digite a segunda lista de elementos:" << endl;

     for(int i = 0; i<second_array_lenght; i++){
        cout << i+1 <<"º elemento:"<<endl;
        cin >> b[i];
    }

    system("cls");

    cout << "Lista com todos os elementos digitados:" << endl;
    for(int i = 0; i< array_lenght; i++){
        c[i] = a[i];
        cout << c[i] <<endl;
    }

    for(int i = array_lenght; i < total_array_lenght; i++){
         c[i] = b[i-array_lenght];
        cout << c[i] <<endl;
    }

    return;
}


void returnReverseArray() {
    array_lenght = 20;

    int a[array_lenght], b[array_lenght];

     for(int i = 0; i<array_lenght; i++){
        cout << "Insira o " << i+1 <<"º número:"<<endl;
        cin >> a[i];
    }

    system("cls");

    cout << "A lista invertida fica assim: " << endl;

    for(int i = 0; i < array_lenght; i ++){
        b[i] = a[array_lenght-1-i];
        cout << a[i] << " - " << b[i] << endl;
    }

    return;
}
