// https://codeforces.com/problemset/problem/1095/A

#include<bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;
  string s = "";
  int k = 0;
  string s1 ;
  cin >> s1;
  
  for(int i=0; i<s1.size(); i++)
  {
    char c = s1[i];
    s += c;
    i += k;
    k++;
  }

  cout << s <<endl;

  return 0;
}
