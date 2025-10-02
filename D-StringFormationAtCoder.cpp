#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s; cin >> s;
  int q; cin >> q;
  int flag = 0;
  deque<char> dq;
  for(auto c : s) dq.push_back(c);
  while(q--){
    int t; cin >> t;
    if(t == 1){
      flag = 1 - flag;
    } else {
      int f; char c;
      cin >> f >> c;
      if(flag == 0){
        if(f == 1) {
          dq.push_front(c);
        } else {
          dq.push_back(c);
        }
      } else {
        if(f == 1){
          dq.push_back(c);
        } else {
          dq.push_front(c);
        }
      }
    }
  }
  if(flag){
    reverse(dq.begin(), dq.end());
  }
  while(!dq.empty()){
    cout << dq.front();
    dq.pop_front();
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  solve();
}
