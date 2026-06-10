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

    map<char, char> mapa;
    char c;
    string str;

    for (char i = 'a'; i <='z'; i++)
    {
        cin >> c;
        mapa.insert({i, c});
    }   

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        cout << mapa[str[i]];
    }
    
    cout << '\n';

    

    return 0;
}