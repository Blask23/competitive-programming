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

    int A, V;
    int cnt = 1;
    while(true){

        cin >> A >> V;

        if(A+V == 0)
            break;

        if(cnt > 1)
            cout << '\n';

        vector<int> voos(A);

        for (int i = 0; i < A; i++)
        {
            voos[i] = 0;
        }
        

        int maior = 0;
        int n1, n2;
        for (int i = 0; i < V; i++)
        {

            cin >> n1 >> n2;

            voos[n1-1]++;
            voos[n2-1]++;

            if(voos[n1-1] > maior)
                maior =  voos[n1-1];

            if( voos[n2-1] > maior)
                maior =  voos[n2-1];
        }


        cout << "Teste " << cnt << '\n';

        for (int i = 0; i < A; i++)
        {
            if(voos[i] == maior)
                cout << i+1 << ' ';
        }
        

        cout << '\n';

        cnt++;
    }

    cout <<'\n';

    return 0;
}