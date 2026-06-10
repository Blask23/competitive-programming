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

    string str;

    while (cin >> str)
    {
        map<char,int> mapa;
        for (int i = 0; i < str.size(); i++)
        {
            mapa[str[i]]++;
        }
        
        int cnt = 0;
        for(auto i : mapa){
            if(i.second %2 != 0){
                cnt++;
            }
        }

        cout << max(0, cnt-1) << '\n';
    }
    

    return 0;
}