// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/string-equalizer-d4a539ba/
// Problem
// You are given two binary strings  and  and are required to make  equals to . There are two types of operations:

// Swap any two adjacent bits or characters in string . The cost of this operation is 1 unit.
// Flip the bit or character of the string. The cost of this operation is 1 unit.
// What is the minimum cost to make string  equal to ?
// Sample Input
// 4
// 1101
// 0011
// Sample Output
// 2


#include <iostream>

using namespace std;

int main() {
	long long int n;
	cin >> n;	
	string A,B;
	cin>>A>>B;
		
	long long int cnt=0;
	for(long long int i=0; i<n; i++){
		if(A[i] != B[i]) {
			if(i<n-1 && (A[i] == B[i+1]) && (B[i] == A[i+1])){
				
				i++;
			}
			cnt++;
		}
	}								
	cout << cnt ;		// Writing output to STDOUT
}


