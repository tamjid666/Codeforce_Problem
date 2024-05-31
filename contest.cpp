// https://codeforces.com/contest/1974/problem/B
#include<bits/stdc++.h>
using namespace std; 
 
int main()
{
	int t; cin >> t; 
	while(t--)
	{
		int n; cin >> n; 
		string s ; cin >> s ; 
 
		int alphabet[26]={} ;
		for(int i=0; i<n; ++i)
			alphabet[s[i]-'a']++; 
	
		string first_step ;
	
		for(int i=0; i<26; ++i)
		{
			if(alphabet[i] != 0 )
			{
				char ch = (char)i + 'a' ; 
				first_step.push_back(ch) ; 
			}
		}
		// cout << first_step << endl ;
	
		string rev; 
		for(int i=first_step.size()-1; i>=0; --i)
		{
			char ch = first_step[i];  
			rev.push_back(ch);
		}
		// cout << rev << endl ;
	
		char hash[26] = {} ; 
		for(int i=0; i<first_step.size(); ++i)
		{
			 hash[first_step[i]-'a'] = rev[i] ; 
			 // cout <<  hash[first_step[i]-'a']<< " "<< first_step[i]<<" " <<rev[i]<< endl ;   
		}
		
		string output; 
		for(int i=0; i<s.size(); ++i)
		{
			char ch = hash[s[i]-'a'] ; 
			output.push_back(ch) ; 
		}
		cout << output << endl ; 
	}

}