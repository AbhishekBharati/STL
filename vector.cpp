#include<bits/stdc++.h>

using namespace std;

int main(){
  
  // Definition of a Vector :- 
  vector<int> v;
  vector<string> s;
  
  // Insertion in Vector :-
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  // Output of a Vector :-
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << '\n';

  // Another Way :-
  for(auto it : v){
    cout << it << " ";
  }
  cout << '\n';

  // Insertion at random index :-
  v.insert(v.begin() + 1, 4);

  // Deletion of Last Index :- v.pop_back();
  // Deletion from ith index :- v.erase(v.begin() + i);

  // Find Elems in Vector :- O(N);
  auto it = find(v.begin(), v.end(), 2);
  cout << *it << '\n';
  cout << it - v.begin() << '\n'; // --> This will give the reverence.
  
  // Search in Vector :-
  // -> First we need to sort the array.
  sort(v.begin(), v.end());
  // -> Now we can use the search function.
  auto ans = binary_search(v.begin(), v.end(), 4);
  cout << ans << '\n';

  // Occurences of Duplicates in a sorted values :-
  vector<int> arr = {1,1,1,2,2,2,3,3,3,4,4};

  // lower_bound :- will return the 1st occurence's address.
  int idx = lower_bound(arr.begin(), arr.end(), 2) - arr.begin();
  // upper_bound :- will return the 1st Occurence of next element :- In this case it will return the 1st occurence of 3.
  int idx2 = upper_bound(arr.begin(), arr.end(), 2) - arr.begin(); 
  cout << idx2 - idx << '\n';

  // Max Elem of a Vector :- (Returns an address)
  auto maxi = max_element(v.begin(), v.end());
  cout << *maxi << '\n';

  // Declaration of a vector of a fix size :-
  vector<int> arr1(10, 1);

  // Declaration of  a 2d Vector :-
  vector<vector<int>> arr2(3, vector<int>(3,1));
  return 0;
}
