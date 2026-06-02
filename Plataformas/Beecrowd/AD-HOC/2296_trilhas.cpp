// Problema: 2296 - Trilhas
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 5)
// Origem: Por OBI - Olimpíada Brasileira de Informática 2005 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2296
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

    pair<int,int> menor = {INT_MAX, 0};

    for (int i = 0; i < n; i++)
    {
        int m, aux = 0;
        
        cin >> m;

        vector<int> vet(m);

        cin >> vet[0];
        for (int j = 1; j < m; j++)
        {
            cin >> vet[j];

            if(vet[j]-vet[j-1] > 0)
                aux += vet[j]-vet[j-1];
        }

        if(aux < menor.first){
            menor.first = aux;
            menor.second = i+1;
        }

        aux = 0;
        for (int j = m-2; j >= 0; j--)
        {
            if(vet[j]-vet[j+1] > 0)
                aux += vet[j]-vet[j+1];
        }
        
        if(aux < menor.first){
            menor.first = aux;
            menor.second = i+1;
        }
    }

    cout << menor.second << '\n';
    
    

    return 0;
}