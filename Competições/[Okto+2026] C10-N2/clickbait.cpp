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

vector<pair<ll,ll>> vet;
ll n, k;

bool ok(ll mid){

    ll v = 0;

    for (ll i = 0; i < n; i++)
    {
        if(mid >= vet[i].first){
            v += ((mid - vet[i].first)/vet[i].second) +1;

            if(v >= k){
                return true;
            }
        }
    }
    


    return v >= k;
}

ll busca(){
    ll ini=0,fim=2e18;
    ll res = -1;

    while (ini <= fim)
    {
        ll mid = ((fim-ini)/2) + ini;

        if(ok(mid)){
            fim = mid-1;
            res = mid;
        }else
            ini = mid+1;
    }

    return res;
    
}

int main() {
    fastio;

    cin >> n >> k;

    vet.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vet[i].first >> vet[i].second;
    }
    
    cout << busca() << '\n';

    return 0;
}