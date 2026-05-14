// Problema: 1836 - Pokémon!
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 3)
// Origem: Por Edson Alves, Faculdade UnB Gama Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/1836
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        string nome;
        int l, bs, iv, ev, aux;

        cin >> nome >> l;
        cout << "Caso #" << i+1 << ':' << ' ' << nome << ' ' << "nivel" << ' ' << l << '\n';

        cin >> bs >> iv >> ev;

        int hp = (((iv+bs+(sqrt(ev)/8)+50)*l)/50)+10;
        cout << "HP: " << (int)hp << '\n';

        cin >> bs >> iv >> ev;
        cout << "AT: " << (int)(((iv+bs+(sqrt(ev)/8))*l)/50)+5 << '\n';

        cin >> bs >> iv >> ev;
        cout << "DF: " << (int)(((iv+bs+(sqrt(ev)/8))*l)/50)+5 << '\n';
        
        cin >> bs >> iv >> ev;
        cout << "SP: " << (int)(((iv+bs+(sqrt(ev)/8))*l)/50)+5 << '\n';
        
        
    }
    

    return 0;
}