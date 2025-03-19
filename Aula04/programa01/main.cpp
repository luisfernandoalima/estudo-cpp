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
    maiorMenor();
    return 0;
}
