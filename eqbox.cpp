# include <iostream>
# include <stdio.h>
# include <math.h>
# include <list>
# include <algorithm>
# include <limits>
#include <vector>
#include <ctype.h> // for isupper function
#include <string>      
#include <sstream> 
#include <bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define ppb pop_back
#define mp(x,y) make_pair((x),(y))
//#define sd(n) scanf("%d" , &n);
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define mod 1000000007
#define maX(a,b)   ( (a) > (b) ? (a) : (b))
#define miN(a,b)   ( (a) < (b) ? (a) : (b))
#define bitcount   __builtin_popcount
#define mset(a,x) memset(a,x,sizeof(a)) //set elements of array to some value
#define char2Int(c) (c-'0')
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define forit(it, s) for(typeof((s).begin()) it = (s).begin(); it != (s).end(); ++it) 
#define F first
#define S second
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define LEN(X) strlen(X)
#define eps 1e-10
const double pi = acos(-1.0);

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vpii;
typedef vector<long long> vl;
typedef pair<long long,long long> pll;
typedef vector<pair<long long,long long> > vpll;
typedef vector<string> vs;
typedef long double ld;
typedef  long long ll;
typedef unsigned long long ull;
string NumberToString ( ll Number )
{
	stringstream ss;
	ss << Number;
	return ss.str();
}


ll StringToNumber ( const string &Text )//Text not by const reference so that the function can be used with a 
{                               //character array as argument
	stringstream ss(Text);
	ll result;
	return ss >> result ? result : 0;
}

void solve(){
	ll x, y , a , b;
	cin>>x>>y>>a>>b;
	ll c = maX(x,y);
	ll d= miN(x,y);
	ll e = maX(a,b), f= miN(a,b);
	if(e<c && f<d ){ // length can't be equal without rotating it
		cout<<"Escape is possible."<<endl;
	}
	else{
		 double g;
		 //if(e>=c ){
			double d_c=(double)c,d_e=(double)e,d_f=(double)f;
			//g= ((2.0*e*f*c)+(e*e - f*f)*(sqrt(e* e + f*f- c*c)))/(e*e+f*f); gives correct answer , 
			// but still above is a good practice
			
			g= ((2.0*d_e*d_f*d_c)+(d_e*d_e - d_f*d_f)*(sqrt(d_e* d_e + d_f*d_f- d_c*d_c)))/(d_e*d_e+d_f*d_f);
			//g/=(d_e*d_e+d_f*d_f);
			//cout<<"g1"<<g<<endl;
			if((d-g)>0.0000001){  // don't use d>=g , it gives wrong answer
				cout<<"Escape is possible."<<endl;
			}
			else{
				cout<<"Box cannot be dropped."<<endl;
			}
			
	}
	
	
}
int main(){
	//std::ios::sync_with_stdio(false);  
	// uncomment it or use scanf and printf
	//cout << "Minimum value for long long int(or other datatype): " << std::numeric_limits<long long int>::min() << '\n';
	// instead of min() use max() to get the maximum value in the previous case
	//scanf returns the number of items succesfully converted  or EOF on error
	
    //int t = 1;
	int t;
    cin>>t;
    while(t--){
        solve();
    }

}

// int(1e6) is equivalent to 10^6
