// Problema: 2596 - Xenlonguinho
// Plataforma: beecrowd
// Categoria: matematica (nivel 2)
// Origem: Por Aline Regina de Oliveira, IFSULDEMINAS Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2596
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int e;
        cin >> e;
        
        int cnt = 0;

        for (int j = 1; j <= e; j++)
        {
            int aux = sqrt(j);
            if(aux*aux == j){
                cnt++;
            }
        }

        cout << e-cnt << '\n';
        
    }

    
    

    return 0;
}