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

    string a, k;

    map<string,int> kills;
    set<string> killed;

    while (cin >> a >> k)
    {
            kills[a]++;
            killed.insert(k);
    }

    cout << "HALL OF MURDERERS\n";

    for(auto i : kills){
        if(killed.find(i.first) == killed.end())
            cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}