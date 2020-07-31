#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> ans, arr;
vector<bool> check(10001, false);
	
void Answer(int toPick)
{
	if(toPick==0)
	{
		for(auto p:ans)
			cout<<p<<' ';
		cout<<'\n';
		return;
	}
	
	for(int i=0; i<n; i++)
	{
		if(check[arr[i]]) continue;
		
		check[arr[i]]=true;
		ans.push_back(arr[i]);
		Answer(toPick-1);
		ans.pop_back();
		check[arr[i]]=false;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>n>>m;
	
	arr.resize(n, 0);
	for(int i=0; i<n; i++)
		cin>>arr[i];

	sort(arr.begin(), arr.end());

	Answer(m);
	
	return 0;
}
