#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int x, n;
    cin >> x >> n;

    set<int> sem;
    multiset<int> dist;

    sem.insert(0);
    sem.insert(x);

    dist.insert(x);

    for (size_t i = 0; i < n; i++){
        int aux;
        cin >> aux;

        auto it = sem.lower_bound(aux);
        auto it2 = prev(it);

        dist.erase(dist.find(*it - *it2));

        dist.insert(*it - aux);
        dist.insert(aux - *it2);

        sem.insert(aux);

        cout << *dist.rbegin() << ' ';
    }

    

    return 0;
}