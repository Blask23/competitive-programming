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

    int n,g;

    while (cin >> n >> g)
    {
        int s, r, ans = 0;
        vector<int>dif(n);

        for (size_t i = 0; i < n; i++)
        {
            cin >> s >> r;
            dif[i] = r - s;

            if(dif[i] < 0){
                ans += 3;
            }else if(dif[i] == 0)
                ans++;
        }

        if(g!=0){
            sort(all(dif));

            for (size_t i = 0; i < n; i++)
            {
                if(g>0 && dif[i] >= 0){

                    if(dif[i] > 0 && g > dif[i]){
                        ans += 3;
                        g -= (dif[i]+1);
                    }else if(dif[i] > 0 && g == dif[i]){
                        ans++;
                        g-=dif[i];
                    }else if(dif[i] == 0 && g>0){
                        ans+=2;
                        g--;
                    }

                }
            }
        }
        
        cout << ans << '\n';
        
    }
    

    return 0;
}