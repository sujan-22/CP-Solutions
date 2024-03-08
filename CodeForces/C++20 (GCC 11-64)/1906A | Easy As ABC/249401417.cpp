#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for(int i=p; i<n; ++i)
#define fr(i,p,n) for(int i=p; i>=n; --i)
#define tc while(t--)
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define vec(T) vector<T>
#define mat(T) vector<vector<T>>
#define vpii(T) vector<pair<T, T>>
#define uset(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define pb push_back
#define mp make_pair
#define lcm(a, b) ((a) * (b)) / __gcd(a, b)
#define counts(n) floor(log10(n)+1)
 
using namespace std;
 
bool valid(int r,int c){
    return (r>=0&&r<3&&c>=0&&c<3);
}
 
void Solve(){
    mat(char) matrix(3, vector<char>(3));
    string r="ZZZ";
    f(i,0,3){
        f(j,0,3){
            cin>>matrix[i][j];
        }
    }  
    f(i,0,3){
        f(j,0,3){
            char first=matrix[i][j];
            f(dr,-1,2){
                f(dc,-1,2){
                    int nr=i+dr, nc=j+dc;
                    if(valid(nr,nc)&&(nr!=i||nc!=j)){
                        char second=matrix[nr][nc];
                        f(drr,-1,2){
                            f(dcc,-1,2){
                                int nnr=nr+drr, nnc=nc+dcc;
                                   if(valid(nnr,nnc)&&(nnr!=nr||nnc!=nc)&&(nnr!=i||nnc!=j)){ 
                                    char third=matrix[nnr][nnc];
                                    string cur=string(1,first)+string(1,second)+string(1,third);
                                    r=min(r,cur);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<r<<'\n';
}
 
 
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
   // cin>>t;
    tc{
        Solve();
    }
 
    return 0;
}
 