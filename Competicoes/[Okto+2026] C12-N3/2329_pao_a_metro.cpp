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

int n, k;
vector<int> fatias;

bool ok(int mid){
    int qtd = 0;

    for (size_t i = 0; i < k; i++)
    {
        qtd += fatias[i]/mid;
    }
    
    return qtd >= n;
}

int busca(){
    int l = 0, r = 10000, ans=-1, mid;

    while (l<=r)
    {
        mid = (r-l)/2 + l;

        if(ok(mid)){
            l = mid +1;
            ans = mid;
        }else{
            r = mid -1;
        }
    }
    
    return ans;
}

int main() {
    fastio;



    cin >> n >> k;
    fatias.resize(k);

    for (size_t i = 0; i < k; i++)
    {
        cin >> fatias[i];
    }

    cout << busca() << '\n';
    
    return 0;
}