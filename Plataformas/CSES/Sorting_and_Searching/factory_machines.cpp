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

ll n, t;
vector<ll> vet;

bool ok(ll mid){
    ll sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        if(sum >= t){
            return true;
        }

        sum += mid/vet[i];
    }
    
    return t <= sum;
}

ll busca(){
    ll l = 0, r = 9e18, mid;
    ll ans = -1;

    while (l<=r)
    {
        mid = (r-l)/2 + l;

        if(ok(mid)){
            r = mid -1;
            ans = mid;
        }else
            l = mid +1;
    }

    return ans;
}

int main() {
    fastio;

    cin >> n >> t;
    vet.resize(n);

    for (size_t i = 0; i < n; i++)
        cin >> vet[i];
    
    cout << busca() << '\n';

    return 0;
}