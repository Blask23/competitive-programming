// Problema: 1766 O Elfo das Trevas
// Plataforma: beecrowd 
// Categoria: estruturas e bibliotecas (nivel 3)
// Origem: Por Jean Bez, beecrowd Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/1766
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef struct rena
{
    string s;
    int p, i;
    float a;
}rena;

bool ordena (rena a, rena b){
    if(a.p != b.p)
        return a.p > b.p;

    if(a.i != b.i)
        return a.i < b.i;

    if(a.a != b.a)
        return a.a < b.a;

    return a.s < b.s;
    
}

int main() {
    fastio;

    int t;
    cin >> t;
    
    for (size_t k = 0; k < t; k++)
    {
        int n, m;
        cin >> n >> m;
        vector<rena> vet(n);

        for (size_t i = 0; i < n; i++)
        {
            cin >> vet[i].s >> vet[i].p >> vet[i].i >> vet[i].a;
        }

        sort(all(vet), ordena);

        cout << "CENARIO " << '{' << k+1 << '}' << '\n';
        for (size_t i = 0; i < m; i++)
        {
            cout << i+1 << " - " << vet[i].s << '\n';
        }
        

    }
    
    

    

    return 0;
}