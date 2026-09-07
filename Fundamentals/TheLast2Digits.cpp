#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int a,b,c,d;cin>>a>>b>>c>>d;
  long long ans = ((a%100)*(b%100)*(c%100)*(d%100))%100;
  cout<<ans<<endl;
  return 0;
}
