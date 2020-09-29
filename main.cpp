//#pragma GCC optimize("O1")
//#pragma GCC optimize("O2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
template<typename F,typename S,typename T>struct Triple{F first;S second;T third;Triple(F a,S b,T c){first=a,second=b,third=c;}Triple(){first=F(0),second=S(0),third=T(0);}};
template<typename F,typename S,typename T>bool operator<(const Triple<F,S,T>&a,const Triple<F,S,T>&b){return(a.first<b.first?true:(a.first==b.first?(a.second<b.second?true:(a.second==b.second?a.third<b.third:false)):false));}
template<typename F,typename S,typename T>ostream&operator<<(ostream&os,const Triple<F,S,T>&a){os<<a.first<<' '<<a.second<<' '<<a.third;return os;}
template<typename Fi,typename Se,typename Th,typename Fo>struct Quad{Fi first;Se second;Th third;Fo fourth;Quad(Fi a,Se b,Th c,Fo d){first=a,second=b,third=c,fourth=d;}Quad(){first=Fi(0),second=Se(0),third=Th(0),fourth=Fo(0);}};
template<typename Fi,typename Se,typename Th,typename Fo>bool operator<(const Quad<Fi,Se,Th,Fo>&a,const Quad<Fi,Se,Th,Fo>&b){return(a.first<b.first?true:(a.first==b.first?(a.second<b.second?true:(a.second==b.second?(a.third<b.third?true:(a.third==b.third?a.fourth<b.fourth:false)):false)):false));}
template<typename Fi,typename Se,typename Th,typename Fo>ostream&operator<<(ostream&os,const Quad<Fi,Se,Th,Fo>&a){os<<a.first<<' '<<a.second<<' '<<a.third<<' '<<a.fourth;return os;}
typedef long long ll;
typedef unsigned long long ull;
#define int ll
typedef long double ld;
typedef pair<int,int>pii;
typedef Triple<int,int,int>ti;
typedef Quad<int,int,int,int>qi;
typedef vector<int>vi;
typedef vector<vi>vvi;
#define LONG_INF 3000000000000000000
#define INT_INF 1063741824
#define ui unsigned int
#define double ld
#define fi(f,t) for(int i=f;i<int(t);++i)
#define fj(f,t) for(int j=f;j<int(t);++j)
#define fk(f,t) for(int k=f;k<int(t);++k)
#define fq(n) for(int q=0;q<int(n);++q)
#define fs(s) for(auto&shift:s)
#define within_bounds(x,y,a,b) (x>-1&&y>-1&&x<a&&y<b)
#define CLEAR "\x1B[2J\x1B[H"
const int MOD=1000000007;
const int POW2ML=33554432;//32Mb
const int PRECISION=6;
const vector<pii>SHIFTS={{0,1},{-1,0},{0,-1},{1,0}};
const vector<pii>KING_SHIFTS={{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1}};
const vector<pii>KNIGHT_SHIFTS={{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2}};
template<typename T>inline void print_array(const vector<T>&a,const int w=1,const char s=' '){for(size_t i=0;i<a.size()-1;++i)cout<<setw(w)<<a[i]<<s;cout<<setw(w)<<a.back()<<endl;}
template<typename T>inline void print_matrix(const vector<vector<T>>&m,const int w=1,const char s=' '){for(size_t i=0;i<m.size();++i)print_array(m[i],w,s);cout<<endl;}
template<typename T>inline void print_set(const set<T>&a,const int w=1,const char s=' '){if(a.size()>0){auto stop=prev(a.end());for(auto it=a.begin();it!=stop;it++)cout<<setw(w)<<(*it)<<s;cout<<setw(w)<<(*stop);}cout<<endl;}
template<typename T>inline void print_multiset(const multiset<T>&a,const int w=1,const char s=' '){if(a.size()>0){auto stop=prev(a.end());for(auto it=a.begin();it!=stop;it++)cout<<setw(w)<<(*it)<<s;cout<<setw(w)<<(*stop);}cout<<endl;}
template<typename K,typename V>inline void print_map(const map<K,V>&m,const int w=1,const char s=' '){for(auto&it:m)cout<<setw(w)<<it.first<<s<<setw(w)<<it.second<<endl;}
const auto boostIO=[](){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed<<setprecision(PRECISION);return 0;}();
inline double logn(const double&n,const double&base){return log(n)/log(base);}
inline int mod(const int&a,const int&b=MOD){int r=a%b;return(r<0?r+b:r);}
inline int pown(int n,int power,const int modulo=MOD){int res=1;while(power){if(power&1)res=mod(res*n,modulo);n=mod(n*n,modulo);power>>=1;}return res;}
inline int gcd(int a,int b){while(b){a%=b;swap(a,b);}return a;}
inline int lcm(const int&a,const int&b){return abs(a*b)/gcd(a,b);}
inline int min(const pii&p){return(p.first<p.second?p.first:p.second);}


int32_t main()
{
  

  cout.flush();
  getchar();
  return 0;
}

