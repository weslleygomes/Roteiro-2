#include <iostream>
#include<stdio.h>
#define N 4 //Numero de individuos
using namespace std;

struct individuo{
    float altura;
    char sexo;
};

int main(){
    individuo p[N];
    int i, j, k, c1=0, c2=0;
    float maior=0.0, menor=3.0, mediaf=0.0, mediam=0.0;

    cout << "Digite a altura e o sexo(M ou F): " << endl;

    for(i=0; i<N; i++){
        cin >> p[i].altura;
        cin >> p[i].sexo;
    }
    for(i=0; i<N; i++){
        if (p[i].altura>maior){
            maior = p[i].altura;
            j=i;
        }
        if (p[i].altura<menor){
            menor = p[i].altura;
            k=i;
        }
        if (p[i].sexo=='M'){
            mediam+=p[i].altura;
            c1++;
        }
        if (p[i].sexo=='F'){
            mediaf+=p[i].altura;
            c2++;
        }
    }
    printf("Maior altura: %.02f metros, sexo %c.\n"
           "Menor altura: %.02f metros, sexo %c.\n"
           "Media das alturas do sexo masculino: %.02f metros\n"
           "Media das alturas do sexo feminino: %.02f metros\n"
           "Numero de homens: %d\n"
           "Numero de mulheres: %d\n" ,p[j].altura, p[j].sexo, p[k].altura, p[k].sexo, mediam/c1,  mediaf/c2, c1, c2);

    return 0;
}
