#include <iostream>
using namespace std;

int eh_divisivel(int n, int d)
{
    if(n%d==0)
        return 1;
    else
        return 0;
}

int eh_primo(int n)
{
    int i, d=0;
    for(i=n;i>0;i--){
        if(eh_divisivel(n,i))
            d++;
    }
    if(d>2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cout << "Insira um numero: ";
    cin >> n;
    if (eh_primo(n) == 0)
        cout << "Eh primo" << endl;
    else
        cout << "Nao eh primo" << endl;
    return 0;
}

