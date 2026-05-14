// Problema: 1403 - Meu Avô é Famoso
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por Ricardo Anido Brasil
// Link: https://judge.beecrowd.com/pt/problems/view/1403
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, m;

    while (true)
    {
        cin >> n >> m;

        if(n+m == 0)
            break;

        map<int,int> mapa;

        int aux;
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {
                cin >> aux;
                mapa[aux]++;
            }
        }

        int maior = 0;
        for (auto i : mapa) {
            if (i.second > maior) {
                maior = i.second;
            }
        }

        int maior2 = 0;
        for (auto i : mapa) {
            if (i.second > maior2 && i.second < maior) {
                maior2 = i.second;
            }
        }


        for(auto i : mapa){
                
            if(i.second == maior2)
                cout << i.first << ' ';

            
        }
        cout << '\n';
        
    }
    
    

    return 0;
}