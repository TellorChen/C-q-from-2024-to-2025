#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	double a,b,c;
	cin>>a>>b>>c;
	if (a > b && a > c){
		printf("%.2lf",a);
	}
	else if (b > a && b > c){
		printf("%.2lf",b);
	}
	else if (c > a && c > b){
		printf("%.2lf",c);
	}
	
	return 0;
}

