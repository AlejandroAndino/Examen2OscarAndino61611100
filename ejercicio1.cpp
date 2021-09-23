#include<iostream>
#include<conio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){

    string s;

    cout<< "Ingrese una cadena de texto: ";
    getline(cin,s);

    string reversa(s);
    reverse(reversa.begin(), reversa.end());

    cout<< reversa <<endl;

    getch();

    return 0;
}