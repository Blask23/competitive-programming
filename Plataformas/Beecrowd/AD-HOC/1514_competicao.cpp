// Problema: 1514 - Competição
// Plataforma:  beecrowd
// Categoria: ad-hoc (nivel 5)
// Origem: Por Cristhian Bonilha, UTFPR Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/1514
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

        vector<int> vet(m, 0);
        int pts = 2;
        int flag = true;
        int flag2 = true;


        for (size_t i = 0; i < n; i++)
        {
            int aux;
            int sum = 0;
            for (size_t j = 0; j < m; j++)
            {
                cin >> aux;
                sum+=aux;
                vet[j] += aux;
            }
            
            if(sum == m)
                flag = false;
            if(sum == 0)
                flag2 = false;
        }

        if(*min_element(vet.begin(), vet.end()) > 0)
                pts++;
        if(*max_element(vet.begin(), vet.end()) < n)
                pts++;

        if(!flag)
            pts--;
        if(!flag2)
            pts--;
        

        cout << pts << '\n';
        
        
    }

    return 0;
}