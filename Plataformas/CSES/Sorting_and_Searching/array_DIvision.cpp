// Problema: Array Division
// Plataforma: CSES
// Link: https://cses.fi/problemset/task/1085
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()


ll n, k;
vector<ll> vet;

bool verifica(ll valor){
    ll soma = 0;
    ll qtd = 1;

    for (ll i = 0; i < n; i++)
    {
        soma += vet[i];

        if(soma > valor){
            qtd++;
            soma = vet[i];
        }
    }

    return qtd <= k;
}

ll busca(){
    ll ini = *max_element(all(vet));
    ll fim = accumulate(all(vet), 0ll);
    ll ans = -1;

    while (ini <= fim)
    {
        ll mid = (fim-ini)/2 + ini;
        if(verifica(mid)){
            fim = mid-1;
            ans = mid;
        }else
            ini=mid+1;
        
    }
    return ans;
    
}


int main() {
    fastio;

    cin >> n >> k;
    vet.resize(n);

    for (size_t i = 0; i < n; i++)
        cin >> vet[i];

    cout << busca() << '\n';

    return 0;
}