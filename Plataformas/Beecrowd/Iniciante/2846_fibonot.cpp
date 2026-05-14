// Problema: 2846 - Fibonot
// Plataforma: beecrowd
// Categoria: iniciante (nivel 4)
// Origem: Por Francisco Elio Parente Arcos Filho, UEA Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2846
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    vector<int> f(30);
    
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i < 30; i++)
        f[i] = f[i-1] + f[i-2];

    int n;
    cin >> n;

    vector<int> vet;

    int i = 2;
    while(vet.size() < n){
        for (int j = f[i-1]+1; j < f[i]; j++)
        {
            vet.pb(j);
        }
        i++;
    }

    cout << vet.at(n-1) << '\n';


    return 0;
}