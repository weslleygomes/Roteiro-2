#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int i;
    char numero[10];
    cout << "Valida e corrige numero de telefone" << endl << "Telefone : ";
    cin >> numero;
    if (strlen(numero)==9){
        cout<< "Numero corrigido: ";
        for(i=0; i<strlen(numero); i++){
            if(numero[i]!='-')
                cout << numero[i];
        }
    }else if (numero[3]=='-'){
        cout<< "Numero corrigido: 3" << numero;
    }else if (strlen(numero)==8){
        cout<< "Numero corrigido: " << numero;
    }else{
        cout<< "Numero corrigido: 3" << numero;
    }
    cout << endl;
    return 0;
}
