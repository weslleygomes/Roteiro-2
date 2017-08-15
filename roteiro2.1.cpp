#include <iostream>
using namespace std;

int main()
{
    int h, m;
    char d;
    cin >> h >> m;
    if (h < 12)
        d='A';
    else if (h == 12)
        d='P';
    else
    {
        h-=12;
        d='P';
    }
    if (m < 10)
    cout << h << ":0" << m << " " << d << "M" << endl;
    else
    {
    cout << h << ":" << m << " " << d << "M" << endl;
    }
    return 0;
}
