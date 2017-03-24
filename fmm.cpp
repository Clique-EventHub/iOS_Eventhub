#include <iostream>

using namespace std;

int dp[200000],a[200000];
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)cin >> a[i];
	dp[0]=dp[1]=dp[2]=0;
	for(int i=3;i<=n;i++)dp[i] = max((i!=n) * (dp[i-3]+a[i]),max(dp[i-1],dp[i-2]));
	
}