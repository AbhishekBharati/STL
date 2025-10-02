#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
  int n; cin >> n;
  string s; cin >> s;

  vector<int> v1,v2;
  int a = 0;
  for(auto c : s){
    if(c == 'L'){
      v2.push_back(a);
    } else {
      v1.push_back(a);
    }
    a++;
  }
  reverse(v2.begin(),v2.end());
  for(auto num : v1){
    cout << num << ' ';
  }
  cout << a;
  for(auto num : v2){
    cout << " " << num;
  }
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}
