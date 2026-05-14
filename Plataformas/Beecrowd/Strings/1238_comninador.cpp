// Problema: 1238 - Combinador
// Plataforma: beecrowd
// Categoria: strings (nivel 3)
// Origem: Por TopCoder* EUA
// Link: https://judge.beecrowd.com/pt/problems/view/1238
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n;
    cin >> n;
    while (n--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        size_t tam = str1.size()+str2.size();

        for (size_t i = 0; i < tam; i++)
        {
            if(i<str1.size())
                cout << str1[i];

            if(i<str2.size())
                cout << str2[i];
        }
        cout << '\n';
        
    }
    
    

    return 0;
}