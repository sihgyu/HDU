#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[100],n;
	a[1]=1,a[2]=2,a[3]=3,a[4]=4;
	for(int i=5;i<58;i++)
		a[i]=a[i-3]+a[i-1];//类似兔子数列（斐波那契数列） 
	while(cin>>n&&n)
		cout<<a[n]<<endl;
	return 0;
}