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

int n, f;
vector<int>m;

bool ok(int mid){
    int qtd = 0;
    for (size_t i = 0; i < n; i++)
    {
        qtd += mid/m[i];

        if(qtd >= f)
            return true;
    }
    
    return qtd>=f;
}

int busca(){
    int l = 0, r = 1e8 + 1, ans=-1, mid;

    while (l<=r)
    {
        mid = (r-l)/2 + l;
        if(ok(mid)){
            r = mid - 1;
            ans = mid;
        }else
            l = mid + 1;
    }
    return ans;
}


int main() {
    fastio;

    cin >> n >> f;
    m.resize(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    
    cout << busca() << '\n';

    return 0;
}