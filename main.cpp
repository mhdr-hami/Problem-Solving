#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl;


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
        cin>>m>>c;
        for(int i=0; i<c; i++)
        {
            cin>>price[i][0];
            for(int j=1; j<=price[i][0]; j++)
            {
                cin>>price[i][j];
            }
        }
        memset(memo,-1,sizeof memo);
        score = shoping(m ,0);
        if(score <0)
            cout<<"no solution"<<endl;
        else
            cout<<score<<endl;
    }
    return 0;
}


