#include <iostream>

using namespace std;

int factor_recu(int n)
{
    if((n==0)||(n==1)) {return 1;}
    else
    {
        return n*factor_recu(n-1);
    }
}

int factor_iter(int n)
{
    int result = 1;
    for(int i=n; i>1; i--)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    cout << Podaj liczbe: ;
    cin >> n;

    if(n<0) {return 0;}

    cout << factor_iter(n) << endl;
    cout << factor_recu(n) << endl;
    return 0;
}

