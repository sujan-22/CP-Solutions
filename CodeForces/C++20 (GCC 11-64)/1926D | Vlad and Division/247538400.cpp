#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#define ll long long
#define FOR(bits,n) for (int i = bits; i < n; ++i)
#define tc while(t--)
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define vec(T) vector<T>
#define mat(T) vector<vector<T>>
#define vpii(T) vector<pair<T, T>>
#define set(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define print(p) cout<<p<<"\n"
 
using namespace std;
 
int t,n;
const int64_t bits=((int64_t)1<<31)-1;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
cin>>t;
 
tc{
 cin>>n;
 vector<int64_t> arr(n);
 FOR(0,n){
  cin>>arr[i];
 }
 
    sort(all(arr));
    int left=0,right=n-1, ans=n;
    while(left<right){
        if(arr[left]+arr[right]==bits){
            ans--;
            left++;
            right--;
        }else if(arr[left]+arr[right]>bits){
            right--;
        } else {
            left++;
        }
    }
 
    print(ans);
}
return 0;
}
 