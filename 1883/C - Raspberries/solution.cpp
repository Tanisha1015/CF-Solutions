#include<bits/stdc++.h>
 
using namespace std; 
 
int main(){
    int t, asdfa; 
    cin>>t;
    while(t--){
        int n, k; 
        cin>>n>>k; 
        vector<int> vec(n);
        for (int i=0; i<n; i++) cin>>vec[i]; 
        int ans = INT_MAX; 
        if (k == 2 || k == 3 || k == 5){
            for(int i = 0; i<n; i++){
                if ((k - vec[i]%k)%k < ans) ans = (k - vec[i]%k)%k; 
            }
        }
        else{
            int even  = 0; 
            int temp = INT_MAX; 
            for (int i=0; i<n; i++){
                if (vec[i] % 2 == 0) even++; 
                if ((k - vec[i]%k)%k < temp) temp = (k - vec[i]%k)%k; 
            }
 
            if (even == 0){
                ans = min(temp, 2);
            }
            else if (even == 1){
                ans = min(temp, 1);
            }
            else{
                ans = 0; 
            }
        }
 
        cout<<ans<<endl; 
    }
    return 0; 
}