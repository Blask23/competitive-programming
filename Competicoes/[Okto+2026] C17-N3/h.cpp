#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int n, k;
multiset<pair<int,pair<int,int>>> ms;
vector<int> a, b;

bool ok(int mid){
    while (k>0)
    {
        auto fst = ms.begin();
        
        int f = fst->second.second + 1;
        int sf = fst->second.first;

        
        ms.insert({f%sf, {sf,f}});
        ms.erase(fst);
        k--;
    }
    
    
}

int busca(){
    int l = 0, r = INT_MAX;
    int mid, ans = -1;

    while (l<=r)
    {
        mid = (r-l)/2 + l;

        if(ok(mid)){
            l = mid + 1;
            ans = mid;
        }else
            r = mid -1;
    }
    return ans;
}


int main() {
    fastio;

    cin >> n >> k;
    
    a.resize(n);
    b.resize(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> b[i];
        ms.insert({b[i]%a[i], {a[i], b[i]}});
    }
    
    
    cout << busca() << '\n';

    return 0;
}