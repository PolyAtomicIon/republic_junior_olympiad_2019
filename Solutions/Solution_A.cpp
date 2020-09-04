#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);

	string s;
	cin >> s;

	int n = s.size();

	for(int i = n; i >= 0; i--)
		for(int j = 0; j < n-i; j++)
			for(int k = j+1; k <= n-i; k++)
				if(s.substr(j,i) == s.substr(k,i))
					return cout<<i,0;

	return 0;
}


