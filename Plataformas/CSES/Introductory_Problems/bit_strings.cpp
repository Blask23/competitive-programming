// Problema: Bit Strings
// Plataforma: CSES
// Categoria: Introductory Problems
// Origem:
// Link: https://cses.fi/problemset/result/14320019/
// Assunto: Binary Exponentiation


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

ll MOD = 1e9 + 7;

ll power(ll a, ll b){
    ll result = 1;
    while (b)
    {
        if(b & 1LL)
            result = (result * a) % MOD;

        a = (a*a)%MOD;
        b >>= 1;
        
    }
    return result;
}

int main() {
    fastio;

    ll n;
    cin >> n;

    cout << power(2LL, n) << '\n';

    
    return 0;
}