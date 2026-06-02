// Problema: 2440 - Famílias de Troia
// Plataforma: beecrowd
// Categoria: Grafos (nivel 5)
// Origem: Por OBI - Olimpíada Brasileira de Informática 2013 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2440
// Assunto: Introdução a grafos


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()



#define MAXN 50001
int m,n;
vector<bool> visitados(MAXN, false);
vector<int> lista[MAXN];

void dfs(int i){
    visitados[i] = true;

    for(int vizinho : lista[i]){
        if(!visitados[vizinho]){
            dfs(vizinho);
        }
    }
}

int main() {
    fastio;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;

        lista[u].pb(v);
        lista[v].pb(u);
    }

    int familias = 0;

    for (int i = 1; i <= n; i++)
    {
        if(!visitados[i]){
            familias++;
            dfs(i);
        }
    }
    
    cout << familias << '\n';

    

    return 0;
}