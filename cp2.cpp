#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vl vector<long long int>
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define nline '\n'
#define loop(i, a, b) for (int i = a; i < b; i++)
typedef priority_queue<long long> maxheap;
typedef priority_queue<long long, vector<long long>, greater<long long>> minheap;

const long long MOD = 1000000007;
const long long MOD2 = 998244353;
const long long INF = 1000000000000000000;
const double PI = 3.141592653589793238462;

//----------------------------------------------------------------
#define LOCAL_COMPILER
#ifdef LOCAL_COMPILER
#define dbg(x)            \
    cerr << #x << " -> "; \
    cout << x << "\n";
#endif
#ifndef LOCAL_COMPILER
#define dbg(x)
#endif
//----------------------------------------------------------------

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // #ifndef ONLINE_JUDGE
    //     freopen("Error.txt", "w", stderr);
    // #endif    
    int tc=1;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll arr[n];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if((n==2) && (arr[0]!=arr[1])) {
            cout<<-1<<endl;
            continue;
        }
        if(n==2 && arr[0]==arr[1]){
            cout<<1<<endl;
            continue;
        }
        if(n>=2 && arr[0] != arr[1] && arr[0]!=arr[n-1]){
             cout<<-1<<endl;
            continue;
        }
        if(n>=2 && arr[n-1] != arr[n-2] &&  arr[0]!=arr[n-1]){
             cout<<-1<<endl;
            continue;
        }
        int ind=-2,ind2=-2;
        for(ll i=1;i<n;i++){
            if(arr[i-1] != arr[i]){
                ind=i;
                break;
            }
        }
        for(ll i=n-2;i>=0;i--){
            if(arr[i] != arr[i+1]){
                ind2=i+1;
                break;
            }
        }
        int ans=-1;
        if(ind == -2){
            cout<<ans<<endl;
            continue;
        }
        ans=n-ind2;
        ans=min(ans,ind);
        // dbg(ans);
        cout<<ans<<endl;
    } 
    return 0;
}

/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠤⠶⠶⠒⠒⠒⠒⠢⠤⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠴⠊⢡⣠⣆⡵⠦⠤⠄⠐⠾⠴⣦⣰⣈⡑⠢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠴⠓⠂⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠺⢶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠴⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣤⡶⠋⠀⠀⠀⠀⠀⠀⠉⠳⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠎⡀⠀⠂⠀⠀⠀⠀⠀⢀⣤⣶⣿⣿⣿⣿⣿⣭⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠢⣄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠔⢉⠅⡢⡨⡀⢠⡠⠀⢀⣴⣾⣿⠟⣿⠁⠸⣿⣿⣯⢻⣿⣿⣷⣦⣀⢐⠂⠀⢀⠀⠀⠀⠠⠘⢦⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢠⠊⠀⠃⠪⡠⡪⣜⠆⣨⣾⣿⣿⡿⠁⠀⢻⠀⠀⠹⣿⣿⡄⠙⣿⣿⣿⣿⣷⣴⣈⢆⢄⢔⡹⡢⠑⠀⠳⡄⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢠⠃⠀⠀⠀⠀⡄⡐⠁⣼⣿⣿⢿⡟⠁⠀⠀⠘⠀⠀⠀⠈⢻⣇⠀⠈⢿⡟⣿⣿⣿⡿⡗⠋⠊⠀⠀⠀⠀⠀⠹⡄⠀⠀⠀
⠀⠀⠀⠀⢀⠊⠄⠀⠀⠀⠀⠀⠈⣸⣿⣿⠏⡞⠒⠒⠂⠤⠀⠀⠀⠀⠀⠀⠙⠂⠉⠈⢻⠸⣿⣿⣧⡚⠌⠴⡠⣠⢀⠀⠀⠀⢹⡀⠀⠀
⠀⠀⠀⠀⡎⢸⡘⡌⣦⡐⣦⠲⡰⣿⣿⡟⠀⠁⠀⣀⡀⠀⠀⠀⢀⠀⠀⠀⠀⢀⣠⣤⣀⠁⢻⣿⣿⣿⡷⡞⣱⢃⠞⠄⠠⠀⠈⡇⠀⠀
⠀⠀⠀⢰⢣⢰⠘⡌⣦⢀⡦⠜⠀⠀⣿⠃⠀⣰⠟⠉⠛⠦⠀⠀⢸⡆⠀⠀⠀⠟⠉⠉⠙⠆⠈⣿⡷⠅⠀⠙⡇⣾⣶⠀⡆⢠⠀⡇⠀⠀
⠀⠀⠀⢸⠸⡘⢠⡃⢋⢹⠀⠀⠀⠀⢻⠀⡀⡋⡀⠀⠀⠀⠀⠀⠘⠐⠀⠀⠀⠐⠒⠆⠰⠆⡦⢠⠇⠀⠀⠀⢸⡝⡋⠀⠷⡈⢀⠇⠀⠀
⠀⠀⠀⠘⡆⡇⡜⣃⠜⢹⠀⠀⠀⠀⠚⡾⠛⢉⣄⡤⠀⠒⠒⠈⠉⠉⠉⠉⠉⠉⠁⠐⢖⢤⡀⢸⠄⠀⠀⠀⡰⠠⡙⣌⢧⡘⡜⠀⠀⠀
⠀⠀⠀⠀⢣⠞⡄⡵⡀⠚⠀⠀⠀⠀⠀⢥⠀⣿⠀⠁⢀⣠⣴⣶⣾⣿⣿⣿⣷⣶⣶⣄⡀⢸⠁⡾⡑⠡⠄⠀⠥⡐⠞⡔⠕⡰⠁⠀⠀⠀
⠀⠀⠀⠀⠸⣌⠈⡊⠄⠀⡀⠀⠀⠀⠄⢙⠆⠘⢶⣾⣿⠿⠛⠉⠉⠉⠉⠉⠉⠙⠿⣿⡿⠁⠰⠖⠚⠊⠀⠙⣆⠈⡞⢁⠔⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⢦⡈⠀⠀⡱⡆⢀⠥⠠⠨⣚⡄⠀⠻⢤⡔⠒⠀⠀⠉⠉⠉⠉⠐⡢⠍⡔⠂⢭⡠⠀⠀⠀⢠⡙⡠⢭⢅⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠈⠓⢵⡊⡩⠮⡌⣄⢭⡛⣸⡦⣄⡀⠈⠓⠒⠒⠐⠒⠒⠂⠁⠠⢐⡀⠀⠀⠀⠀⠀⠀⢜⢪⡇⠚⡄⠧⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢉⠡⠶⠬⠭⢽⠿⢿⠝⣉⡟⠿⣶⢦⣤⣤⣤⣤⣶⣾⣿⣇⠣⠄⠤⠔⠉⠉⠑⠂⡁⠨⣀⠷⠀⢰⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣔⡪⣥⠀⠀⠀⠀⠀⠀⠀⠉⠙⢇⠀⠈⠺⣿⣿⢿⣿⣿⠟⡸⠚⠉⠁⠁⠀⠀⠀⢀⠠⢑⠢⢥⠅⢒⡁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠜⠁⠀⠈⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠉⠲⢄⠈⠉⢹⠻⠯⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠘⡆⠀⠀⠀
⠀⠀⠀⢀⠔⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⡀⠀⡠⠕⠒⠉⠀⠀⠀⣠⠞⠔⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠑⠀⠀⠀
⠀⠀⠀⢸⠀⠀⡀⡀⣠⣁⣠⣥⣶⣶⣾⣷⣶⣤⣢⣆⡥⣡⠼⠀⠀⣠⡠⠐⠀⠻⠋⣀⠀⡀⣄⣮⢬⡚⢔⢆⣀⣠⠁⢀⡈⢐⢨⠀⠀⠀
⠀⠀⠀⢸⢨⣠⣵⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠊⠀⠀⠀⠛⡋⡀⢀⣴⣼⣾⣾⣿⣿⣿⣿⣷⣾⣿⣷⣶⣿⣬⣧⣲⣼⠀⠀⠀
⠀⠀⠀⢨⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⢿⣿⣿⣿⣿⣿⣷⣴⣱⡄⣆⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀
⠀⠀⢀⣾⣿⣿⣿⣿⠍⠀⢀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠛⠻⣿⠟⠛⠛⠛⢿⠛⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠙⡛⠉⣹⣿⣿⣿⣿⣿⣆⠀
⠀⠀⣼⣿⡿⠟⠛⠛⢣⠀⢸⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠁⡐⠉⠉⠉⠉⠉⠛⠻⡄
⠀⡘⠋⠉⠀⠀⠀⠀⠀⢡⠸⠀⠃⠀⢀⣀⣀⣤⣤⣤⣤⣤⣸⣠⣤⣤⣤⣸⣀⣤⣤⣤⣤⣤⣤⣄⣀⣀⡀⡸⢰⠀⠀⠀⠀⠀⠀⠀⠀⠰
⢰⢁⣀⣤⣤⣤⣤⣄⠀⠀⣴⣾⣶⣿⣿⠿⠿⠿⠿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣤⣤⡀⣀⣀⣀⣀⣀
⣾⣿⣿⣿⣿⣿⣿⣿⣷⣄⢻⣿⣿⠏⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⡿⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⡇⠀⠉⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣯⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠿⠛⠉⠉⠉⠀⣈⣭⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠫⠉⠉⠒⠢⢄⠈⠙⠻
*/