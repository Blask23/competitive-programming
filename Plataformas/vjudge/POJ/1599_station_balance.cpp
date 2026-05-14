// Problema: 1599 Station Balance
// Plataforma: vjudge/POJ
// Categoria:
// Origem:
// Link: https://vjudge.net/problem/POJ-1599
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()


bool ordena(pair<int, int> a, pair<int,int> b){
    if(a.second != b.second)
        return a.second < b.second;

    return a.first < b.first;
}

int main() {
    fastio;

    int c, s;
    int sets = 0;
    bool flag = false;

    while (cin >> c >> s)
    {
        if(flag == true)
            cout << '\n';


        vector<pair<int,int>> m;
        int s;
        for (size_t i = 0; i < s; i++)
        {
            cin >> s;
            m.push_back({i,s});
        }

        int vagos = (2*c)-s;
        int maior = max_element(m.begin()->second, m.end()->second);

        for (size_t i = 0; i < c; i++)
        {
            if(vagos != 0 && m[i])
        }
        


        flag = true;
        sets++;
    }
    

    return 0;
}