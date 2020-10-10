#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl;
#define forn(i, n) for (int i = 0; i < int(n); i++)


typedef vector<ll> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef map<int, int> mii;

const int KMX = 3e5 + 10, MOD = 1e9 + 7, INF = 2e9, NINF = -2e9;
//int dp[MX][MX];
//int in[MX];
//int a[KMX];
//int dp[KMX];
//bool s[KMX], c[KMX];

ll rnd(ll n)
{
    int md = n%10;
    if (md<5)
        return n-md;
    else
        return n + 10 - md;
}

string turn(string s,int n)
{
    if(n%2)
    {
        if(s=="L")
            return "R";
        else
            return "L";
    }
    return s;
}

int m,c,price[25][25];
int memo [210][25];

int shoping (int money , int g)
{
    if(money < 0)
        return -100000000;
    if(g==c)
        return m - money;
    if(memo[money][g] != -1)
        return memo[money][g];
    int ans = -1;

    for(int model=1; model<=price[g][0]; model ++)
    {
        ans = max(ans , shoping(money-price[g][model] , g+1));
    }
    return memo[money][g] = ans;
}





int main()
{
    //    ios_base::sync_with_stdio(false);cout<<fixed;cout<<setprecision(12);

    //* Do Not Rush *//

    int tc,score;
    cin>>tc;
    while (tc--)
    {
//        cout<<"ok"<<endl;
        cin>>m>>c;
        for(int i=0; i<c; i++)
        {
            cin>>price[i][0];
//            cout<<"ok"<<endl;
            for(int j=1; j<=price[i][0]; j++)
            {
                cin>>price[i][j];
            }
        }
//        cout<<"ok"<<endl;
        memset(memo,-1,sizeof memo);
//        cout<<"ok"<<endl;
        score = shoping(m ,0);
        if(score <0)
            cout<<"no solution"<<endl;
        else
            cout<<score<<endl;
    }
    return 0;

//    ll n,m;
//    cin>>n>>m;
//    vector<pair<string , pair<int,int> > > switches;
//    switches.push_back(make_pair("q",make_pair(0,0)));
//    for(ll i=0; i<m; i++)
//    {
//        string s;
//        int a,b;
//        cin>>s>>a>>b;
//        switches.push_back(make_pair(s,make_pair(a,b)));
//    }
//    vector<ll> balss (m+1,0);
//    balss[1] = n;
//    vector < pair<ll,ll> > b;
//    for(ll i=0; i<=m; i++)
//    {
//        if(i!=1)
//            b.push_back(make_pair(0,i));
//    }
//    b.push_back(make_pair(n,1));
//    sort(b.begin(), b.end());

////    cout<<"ok"<<endl;
////    for(auto i : b)
////        cout<<i.first<<" "<<i.second<<endl;
//    while (balss[0] != n)
//    {
//        for(ll i=m; i>=1; i--)
//        {
//            sort(b.begin(), b.end());
//            if(b[i].second != 0)
//            {
//                ll init;
//                if(b[i].first%2)
//                    init = (b[i].first+1)/2;
//                else
//                    init = b[i].first/2;

//                ll ball = b[i].first;
//                if(switches[b[i].second].first=="L")
//                {
//                    balss[switches[b[i].second].second.first]+=init;
//                    balss[b[i].second]-=init;
//                    balss[switches[b[i].second].second.second]+=balss[b[i].second];
//                    balss[b[i].second]=0;
//                    b[i].first =0;
//                    switches[b[i].second].first = turn(switches[b[i].second].first,ball);
////                    sort(b.begin(), b.end());
//                    break;
//                }
//                else
//                {
//                    balss[switches[b[i].second].second.second]+=init;
//                    balss[b[i].second]-=init;
//                    balss[switches[b[i].second].second.first]+=balss[b[i].second];
//                    balss[b[i].second]=0;
//                    b[i].first =0;
//                    switches[b[i].second].first = turn(switches[b[i].second].first,ball);
////                    sort(b.begin(), b.end());
//                    break;
//                }

//            }
//        }
//    }
//    for(int i=1; i<=m; i++)
//        cout<<switches[i].first;



    return 0;
}


