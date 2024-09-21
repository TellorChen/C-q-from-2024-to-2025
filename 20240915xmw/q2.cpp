#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int v;
	int a;
	
	scanf("%d%d",&v,&a);
	
	double d = 1.0 * (v * v) / (2 * a);
	
	printf("%.3lf",d);
	

	return 0;
}

