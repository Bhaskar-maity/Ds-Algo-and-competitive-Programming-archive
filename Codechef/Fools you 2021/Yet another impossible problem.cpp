#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

//https://www.codechef.com/problems/YAIP

#define endl "\n"

#define mod 1000000007
#define num 1000007
#define inf 1000000000

#define ll long long

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n;
	cin >> n;

	ll count = __builtin_popcount(n);

	cout << (1LL << count) - 1 << endl;

}