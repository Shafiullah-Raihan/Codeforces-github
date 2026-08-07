///   ***   ---         |||    ALLAHU AKBAR        |||   ---   ***   ///
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define endl '
'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define nl cout << endl
#define yes cout << "YES" << '
';
#define no cout << "NO" << '
';
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define MAX(x) *max_element(all(x));
#define MIN(x) *min_element(all(x));
#define SUM(a) accumulate(all(a),0LL);
#define clz(x) __builtin_clz(x)
#define ctz(x) __builtin_ctz(x)
#define popcount(x) __builtin_popcount(x)
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
 
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
ll gcd(ll a,ll b){ return __gcd(a,b); }
ll lcm(ll a,ll b){ return a*(b/gcd(a,b)); }
 
int dx[] = {0,0,+1,-1,-1,+1,-1,+1};
int dy[] = {+1,-1,0,0,-1,+1,+1,-1};
 
void raihan()
{
    int n;
    cin >> n;
 
    vector<string> guesses;
    vector<int> bulls;
    vector<int> cows;
 
    for(int i = 0; i < n; i++)
    {
        string num_str;
        int b, c;
 
        cin >> num_str >> b >> c;
 
        guesses.PB(num_str);
        bulls.PB(b);
        cows.PB(c);
    }
 
    vector<string> candidates;
 
    for(int num = 0; num <= 9999; num++)
    {
        string s = to_string(num);
 
        while(s.length() < 4)
            s = "0" + s;
 
        set<char> distinct(s.begin(), s.end());
 
        if(distinct.size() == 4)
            candidates.PB(s);
    }
 
    vector<string> validCandidates;
 
    for(string cand : candidates)
    {
        bool valid = true;
 
        for(int i = 0; i < n; i++)
        {
            string guess = guesses[i];
 
            int b_expected = bulls[i];
            int c_expected = cows[i];
 
            int bull = 0;
 
            for(int idx = 0; idx < 4; idx++)
            {
                if(cand[idx] == guess[idx])
                    bull++;
            }
 
            int common = 0;
 
            for(char c : cand)
            {
                if(guess.find(c) != string::npos)
                    common++;
            }
 
            int cow = common - bull;
 
            if(bull != b_expected || cow != c_expected)
            {
                valid = false;
                break;
            }
        }
 
        if(valid)
            validCandidates.PB(cand);
    }
 
    if(validCandidates.empty())
    {
        cout << "Incorrect data" << endl;
    }
    else if(validCandidates.size() == 1)
    {
        cout << validCandidates[0] << endl;
    }
    else
    {
        cout << "Need more data" << endl;
    }
}
 
int main()
{
    bismillah;
 
    ll T = 1;
    // cin >> T;
 
    while(T--)
    {
        raihan();
    }
 
    return 0;
}