    #include <bits/stdc++.h>
    using namespace std;

    #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
    #define ll long long
    #define pb push_back
    #define all(x) (x).begin(), (x).end()

    int main() {
        fastio;

        int n, aux;
        cin >> n;

        multiset<int> msBoy;
        for (size_t i = 0; i < n; i++)
        {
            cin >> aux;
            msBoy.insert(aux);
        }

        int m;
        cin >> m;

        multiset<int> msGirl;
        for (size_t i = 0; i < m; i++)
        {
            cin >> aux;
            msGirl.insert(aux);
        }

        auto itBoy = msBoy.begin();
        auto itGirl = msGirl.begin();
        int pairs = 0;

        while (itBoy != msBoy.end() && itGirl != msGirl.end())
        {
            if(abs(*itBoy - *itGirl) <= 1){
                pairs++;
                itBoy++;
                itGirl++;
            }else if(*itBoy - *itGirl > 1){
                itGirl++;
            }else{
                itBoy++;
            }
        }
        
        cout << pairs << '\n';
        
        
        
        

        return 0;
    }