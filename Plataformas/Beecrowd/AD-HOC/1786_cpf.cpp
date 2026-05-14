// Problema: 1786 - CPF 2
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 3)
// Origem: Por Alexandre Campos, UNIUBE Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/1786
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    string str;

    while (cin >> str)
    {
        cout << str[0] << str[1] << str[2] << '.' << str[3] << str[4] << str[5] << '.' << str[6] << str[7] << str[8] << '-';


        int b1 = 0;
        for (int i = 1; i < 10; i++)
        {
            b1 += ((int)str[i-1]- 48) * i;
        }

        b1%11 == 10 ? b1=0 : b1 = b1%11;
        
        int b2 = 0;
        for (int i = 9; i > 0; i--)
        {
            b2 += ((int)str[9-i] - 48) * i;
        }

        b2%11 == 10 ? b2=0 : b2 = b2%11;
        
        cout << b1 << b2 << '\n';
        
    }
    
    

    return 0;
}