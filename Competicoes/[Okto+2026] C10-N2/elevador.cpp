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
    bool flag = true;

    cin >> n;
    vector<int> vet(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    sort(all(vet));

    if(vet[0] > 8)
        cout << "N\n";
    else{
        for (int i = 1; i < n; i++)
        {
            if(vet[i]-vet[i-1] > 8)
                flag = false;
        }

        cout << (flag ? "S\n" : "N\n");
    }
    
    return 0;
}