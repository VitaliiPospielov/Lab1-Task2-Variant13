#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c,P;
	cin>>a>>b;
	c=sqrt(pow(a,2)+pow(b,2));
	P=a+b+c;
	cout<<c<<" "<<P;	
	return 0;
}
