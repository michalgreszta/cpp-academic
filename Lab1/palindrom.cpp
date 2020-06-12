#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str)
{
    string newStr = ;
    for (int i=str.length()-1; i>=0; i--)
    {
        newStr += str[i];
    }
    if (newStr == str)
    {
        return true;
    }
    return false;
}

int main()
{
    int choice;
    string word;
    cout << 1.Sprawdz palindrom << endl;
    cout << 2.Wyjscie << endl;
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << endl << Podaj slowo: ;
        cin >> word;
        cout<< is_palindrome(word) <<endl;
        break;

    default:
        return 0;
        break;
    }

    return 0;
}

