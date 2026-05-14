// Problema: 3351 - Clickbait
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por Cristhian Bonilha, UTFPR Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/3351
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()


ll n,k;
vector<pair<ll,ll>> vet;


bool ok(ll mid){
    ll v = 0;

    for (size_t i = 0; i < n; i++)
    {
        if(mid >= vet[i].first){
            v += ((mid - vet[i].first)/vet[i].second) + 1;

            if (v >= k) {
                return true; 
            }
        }
    }
    return (v >= k);
}

ll busca(){
    ll maior = 2e18;
    ll menor = 0;
    ll ans = -1;

    while (menor <= maior)
    {
        ll mid = mid = menor + (maior - menor) / 2;

        if(ok(mid)){
            ans = mid;
            maior = mid-1;
        }else{
            menor = mid+1;
        }


    }
    
    return ans;
}

int main() {
    fastio;
   
    cin >> n >> k;
    vet.resize(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> vet[i].first >> vet[i].second;
    }
    
    cout << busca() << '\n';

    return 0;
}