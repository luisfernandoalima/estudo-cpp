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

    cout << vlmedia << endl;
    system("pause");

    return 0;
}
