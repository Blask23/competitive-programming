// Problema:
// Plataforma:
// Categoria:
// Origem:
// Link:
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

    vector<int> vet(n);


    pair<int,int> maior = {0,0};
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
        if(vet[i]+i+1 > maior.first)
            maior = {vet[i]+i+1, i};
    }

    int res = 0;
    for (int i = maior.second-1; i >= 0; i--)
    {
        if(maior.first+vet[i]-i-1 > res){
            res = maior.first+vet[i]-i-1;
        }
    }
    
    cout << res << '\n';

    return 0;
}