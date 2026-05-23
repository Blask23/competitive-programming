// Problema: 1162 - Organizador de Vagões
// Plataforma: beecrowd
// Categoria: Estruturas e Bibliotecas (nivel 5)
// Origem: Autor Desconhecido
// Link: https://judge.beecrowd.com/pt/problems/view/1162
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int organizar(){
    int ans;

    return ans;
}

int main() {
    fastio;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;

        vector<int> vet(l);
        for (int j = 0; j < l; j++)
            cin >> vet[j];

        int ans = 0;
        for (int k = 0; k < l-1; k++)
        {
            for (int u = 0; u < l-k -1; u++)
            {
                if(vet[u] > vet[u+1]){
                    int aux = vet[u+1];
                    vet[u+1] = vet[u];
                    vet[u] = aux;
                    ans++;
                }
            }
            
        }
        
        
        cout <<"Optimal train swapping takes " << ans << " swaps.\n";

    }
    

    return 0;
}