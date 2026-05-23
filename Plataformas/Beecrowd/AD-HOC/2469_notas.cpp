// Problema: 2469 - Notas
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por OBI - Olimpíada Brasileira de Informática 2014 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2469
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

    map<int,int>mapa;
    int aux;
    pair<int,int> maior = {0,0};
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        mapa[aux]++;

        if(mapa[aux] > maior.first){
            maior = {mapa[aux], aux};
        }else if(mapa[aux] == maior.first && aux > maior.second)
            maior = {mapa[aux], aux};

    }

    cout << maior.second << '\n';
    return 0;
}