#include <iostream>
using namespace std;


int main() {
  
  long long k,n,w;
  cin>>k>>n>>w;
  long long sum=0;
  for(long long i=1;i<=w;i++)
  {
      sum+=(i*k);
  }

  if(sum<= n){
		cout <<0<<"\n";
	}
	else cout << sum - n << "\n";
}