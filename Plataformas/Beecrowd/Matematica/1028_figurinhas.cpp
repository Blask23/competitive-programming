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

    while (n--)
    {
        int f1,f2;
        cin >>f1 >> f2;
        cout << gcd(f1,f2) << '\n';
        
    }
    
    
    

    return 0;
}