#include <bits/stdc++.h>
using namespace std;
int countDecodings(string s,int n) {
  if(n == 0 || n == 1)
    return 1;

  int count = 0;

  if(s[n-1] > '0') {
    //static int track;
    count = countDecodings(s,n-1);
    //cout<<track++<<" - >Digits[n-1] < 0"<<" Value of count "<<count<<endl;
  }

  if(s[n-2] < '2' || s[n-2] == '2' && s[n-1] < '7') {
    static int track2;
    count += countDecodings(s,n-2);
    //cout<<track2++<<" - >second case"<<" Value of count "<<count<<endl;
  }
  return count;
}

int main() {
  string s;
  cin>>s;
  int len = s.length();
  int count = countDecodings(s,len);
  cout<<count<<endl;
  return 0;
}
