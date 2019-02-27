#include<bits/stdc++.h>
using namespace std;
#define raed read
#define REP(i,a,b)  for (int i=a;i<=b;i++)
#define _REP(i,a,b) for (int i=a;i>=b;i--)
#define P pair<long long,long long>
#define ll long long
/*template<typename T>
inline void read(T &x){
	x=0;int w=1;char ch=0;
	while (ch<='0'||ch>='9') {
		if (ch=='-') w=-1;
		ch=getchar();
	}
	while (ch>='0'&&ch<='9') {
		x=(x<<1)+(x<<3)+ch-'0';
		ch=getchar();
	}
	x=x*w;
}*/
inline ll read(){
	ll x=0;int w=1;char ch=0;
	while (ch<='0'||ch>='9') {
		if (ch=='-') w=-1;
		ch=getchar();
	}
	while (ch>='0'&&ch<='9') {
		x=(x<<1)+(x<<3)+ch-'0';
		ch=getchar();
	}
	return x*w;
}
template<typename T>
inline void _write(T x){
	if (x>=10) _write(x/10);
	putchar(x%10+'0');
}
template<typename T>
inline void write(T x){
	if (x<0) putchar('-'),x=-x;
	_write(x);
}
#define MP 2000010
bool is_prime[MP];
void get_primes_till(ll x){
	memset(is_prime,true,sizeof(is_prime));
	is_prime[1]=false;
	REP(i,2,x){
		if (!is_prime[i]) continue;
		REP(l,2,x/i) is_prime[l*i]=false;
	}
}
int main(){
	ll num;
	num=read();
	get_primes_till(num);
	write(is_prime[num]);
	return 0;
}


