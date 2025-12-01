#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

void expvector()
{
vector<int>v;
v.push_back(1);
v.emplace_back(2);

vector<pair<int , int>>vec;
vec.push_back({1,2});
vec.emplace_back(1,2);
vector<int> v3(5,100);
vector<int> v4(5);

vector<int>  v1(5,20);
vector<int> v2(v1);
vector<int>::iterator it=v.begin();
it++;
cout <<*(it) <<" ";



}
int main() {
    fastio;

    int t = 1;
    // cin >> t;
    while (t--) {
        
        expvector();
    }

    return 0;
}


