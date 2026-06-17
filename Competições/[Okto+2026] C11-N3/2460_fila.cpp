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

    vector<int> fila(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> fila[i];
    }

    int m;
    cin >> m;
    
    set<int> leave;
    int aux;
    for (size_t i = 0; i < m; i++)
    {
        cin >> aux;
        leave.insert(aux);
    }

    vector<int> ans;
    for (size_t i = 0; i < n; i++)
    {
        if(!leave.count(fila[i])){
            ans.push_back(fila[i]);
        }
    }

    int t = ans.size();
    for (size_t i = 0; i < t; i++)
    {
        if(i > 0 && i < t)
            cout << ' ';

        cout << ans[i];
    }
    

    cout << '\n';
    
    
    

    return 0;
}