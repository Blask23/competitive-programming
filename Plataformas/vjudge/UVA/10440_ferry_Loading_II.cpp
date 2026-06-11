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
    int c;
    cin >> c;

    while(c--){
        int n, t, m;
        cin >> n >> t >> m;

        vector<int>cars(m);

        for (size_t i = 0; i < m; i++)
            cin >> cars[m];
        

        int time = 0, trips = 0, aux = 0;

        if(m%2 == 0){
            time = cars[aux] + 2*t;
            aux++;
        }

        bool flag = false;
        for (size_t i = aux; i < m; i+n)
        {
            for (size_t j = 0; j < n; j++)
            {
                 if(time <= cars[i+j]){
                    time = cars[i+j];
                    flag = false;
                 }else
                    flag = true;
            }
            
            if(flag){
                time += cars[i+n];
            }

            time += 2*t;
        }

        cout << time - t << '\n';
        
    }
    

    return 0;
}