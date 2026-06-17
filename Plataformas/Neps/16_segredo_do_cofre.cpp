// Problema: 16 - Segredo do Cofre
// Plataforma: neps academy
// Categoria: 
// Origem:
// Link: https://neps.academy/br/exercise/16
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, m, aux;
    cin >> n >> m;

    vector<vector<int>> nums(10, vector<int>(n+1,0));
    int qtdNums[10];
    for (size_t i = 0; i < n; i++)
    {
        cin >> aux;
        qtdNums[aux]++;
        nums[aux][i+1] = qtdNums[aux];
    }
    
    int p1 = 0, p2 = 0;
    int ans[10] = {0};
    
    for (size_t i = 0; i < m; i++)
    {
        cin >> p2;

        for (size_t j = 0; j < 10; j++)
        {
            ans[j] += nums[j][max(p1,p2)] - nums[j][min(p1,p2) -1];
        }
        
        p1=p2;
        
    }

    for (size_t i = 0; i < 10; i++)
    {
        cout << ans[i] << ' ';
    }
    
    

    return 0;
}