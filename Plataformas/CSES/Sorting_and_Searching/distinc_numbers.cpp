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

    int aux;
    set<int> s;
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> aux;
        s.insert(aux);
    }
    
    cout << s.size() << '\n';

    return 0;
}