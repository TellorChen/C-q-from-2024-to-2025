#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	
	if (a>b && a>c){
		printf("%d",a);
	}
	else if (b>a && b>c){
		printf("%d",b);
	}
	else{
		printf("%d",c);
	}

	return 0;
}

