#include<bits/stdc++.h>
using namespace std ;
#include <unordered_map>
#include <functional>
unordered_map<pair<int,int> ,int> mp ;

int main()
{
	mp[{5,4}] = 4 ;
	mp[{4,5}] = 3 ;
	cout<<mp[make_pair(4,5)]<<endl ;
}