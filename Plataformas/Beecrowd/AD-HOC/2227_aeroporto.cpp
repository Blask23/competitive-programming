// Problema: 2227 - Aeroporto
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por OBI - Olimpíada Brasileira de Informática 2002 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2227
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool ordena(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first)
        return a.second < b.second;

    return a.first > b.first;
}

int main() {
    fastio;

    int a, v, ind =1;
    while (true)
    {
        cin >> a >> v;
        if(a+v == 0)
            break;

        if(ind > 1)
            cout << '\n';
        
        vector<pair<int,int>> vet(a);
        for (int i = 0; i < a; i++)
            vet[i] = {0,i+1};

        int o, d;
        for (int i = 0; i < v; i++)
        {
            cin >> o >> d;
            vet[o-1].first++;
            vet[d-1].first++;
        }

        sort(vet.begin(), vet.end(), ordena);

        int maior = vet[0].first;
            
        cout << "Teste " << ind << '\n';
        cout << vet[0].second;
        for (int i = 1; i < a; i++)
        {
            if(vet[i].first < maior)
                break;
            else
                cout << ' ';

            cout << vet[i].second;
        }
        
        cout << '\n';
        ind++;
        
        
    }
    
    

    return 0;
}