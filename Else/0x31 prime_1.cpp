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
bool is_prime(ll a){
	int b=sqrt(a);
	for (int i=2;i<=b;i++){
		if (!(a%i)) return false;
	}
	return true;
}
int main(){
	ll num;
	num=raed();
	write(is_prime(num));
	return 0;
}

