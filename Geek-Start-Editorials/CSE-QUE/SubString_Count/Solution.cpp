#include<bits/stdc++.h>

using namespace std;


long long countSubstringsAtleastK(string &s, int k){
        long long ans = 0;
        int length = s.size();
        int left = 0, right = 0;
        int size = 0;
        vector<int> mp(26, 0);
        for(; right< length; right++){
            if(mp[s[right] -'a'] == 0)size++;
            mp[s[right]- 'a']++;
            
            if(size>=k){
               
                while(size>=k){
                    //putting this statement in while is important as it calculate no of substrings
                    //when same characters are side by side, this makes it correct
                     ans+=length - right;
                    mp[s[left] -'a']--;
                
                    if(mp[s[left] - 'a'] == 0)size--;
                    left++;
                    
                }
                
            }
            
        }
        
        return ans;
    }
    long long int substrCount (string s, int k) {
        long long val1 = countSubstringsAtleastK(s, k);
        long long val2 = countSubstringsAtleastK(s, k+1);
    
        return val1-val2;
    }

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    if(n==0) {cout<<0; return 0;}
    cout<<substrCount(s,n);
    
}

