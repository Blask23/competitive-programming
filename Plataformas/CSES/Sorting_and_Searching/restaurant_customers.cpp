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

    vector<int> vet;
    map<int,int> mapa;

    int in, out;
    for (size_t i = 0; i < n; i++)
    {
        cin >> in >> out;
        vet.push_back(in);
        vet.push_back(out);

        mapa[in] = 1;
        mapa[out] = -1;
    }

    sort(all(vet));

    int maior = 0;
    int aux = 0;
    for (size_t i = 0; i < vet.size(); i++)
    {
        aux += mapa[vet[i]];

        if(aux > maior)
            maior = aux;
    }

    cout << maior << '\n';
    
    

    return 0;
}