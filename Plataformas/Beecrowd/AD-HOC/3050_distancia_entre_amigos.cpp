// Problema: 3050 - Distância Entre Amigos
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 3)
// Origem: Por Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/3050
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

    vector<int>vet(n);
    pair<int, int> maior= {0,0};

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];

        if(vet[i]+i >= maior.first+maior.second){
            maior = {vet[i],i};
        }

    }

    int maior2 = 0;
    for (int i = maior.second-1; i >= 0; i--)
    {
        if((vet[i]+maior.first+ maior.second - i) > maior2){
            maior2 = (vet[i]+maior.first+ maior.second - i);
        }
    }
    
    cout << maior2 << '\n';

    return 0;
}