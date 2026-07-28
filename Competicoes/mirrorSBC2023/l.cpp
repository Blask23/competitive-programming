#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int k;

bool ordena(pair<int,char> a, pair<int,char> b){
    if(a.first + k == b.first){
        return a.second < b.second;
    }
}

int main() {
    fastio;

    string s;

    cin >> s >> k;

    vector<pair<int,char>> str(s.size());
    for (size_t i = 0; i < s.size(); i++)
    {
        str[i].first = i;
        str[i].second = s[i];
    }
    

    stable_sort(all(str), ordena);

    for(auto i : str){
        cout << i.second;
    }
    cout << '\n';

    return 0;
}