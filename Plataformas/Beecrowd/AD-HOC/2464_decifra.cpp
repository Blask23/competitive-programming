// Problema: 2464 - Decifra
// Plataforma: beecrowd
// Categoria: ad-hoc
// Origem: OBI - Olimpíada Brasileira de Informática 2014 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2464
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    map<char, char> mapa;

    for (char i = 'a'; i < 'z' + 1; i++)
    {
        char aux;
        cin >> aux;
        
        mapa.insert({aux, i});
    }

    string str;
    cin >> str;
    
    for (size_t i = 0; i < str.size(); i++)
    {
        cout << mapa[str[i]];
    }

    cout << '\n';
    
    

    return 0;
}