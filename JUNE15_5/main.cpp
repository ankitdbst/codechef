#include <iostream>
#include <cstdio>

using namespace std;

// type definitions
typedef long long ll;

// constant definitions
const int mod = 1000007;
const int B = 31;

// globals
int table[1000007];

int main(int argc, char **argv)
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
 
    int T;
    cin >> T;
    
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        
        string s;
        cin >> s;
        
        int m = 1;
        for (int i = 0; i < N; ++i) {          
            for (int j = i; j < m; ++j) {
                = (1LL*s[j]*modexponent(B, m-j-1))%mod;
                
            }
            
            for (int j = i+m; j < n; ++j) {
                
            }
            
            table[hash]++;
            m++;
        }
        
        int freq[N+5];
        for (int i = 0; i < N; ++i)
            freq[i] = 0;
            
        int maxLength = 0;
        for (int i = 0; i < LIMIT; ++i) {
            maxLength = max(maxLength, table[i]);
            freq[table[i]]++;
        }
        
        int ans[N+5];
        for (int i = 0; i < N; ++i) {
            for (int )
        }
        
        while (Q--) {
            int k;
            
        }
    }
   
    return 0;
}
