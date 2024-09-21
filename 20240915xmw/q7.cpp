#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int a;
	int b;
	scanf("%d%d",&a,&b);
	if (a == 123 && b == 456){
		cout<<"µÇÂ¼³É¹¦";
	}
	else if (a != 123 ){
		cout<<"ÕËºÅ´íÎó";
	}
	else if (a == 123 && b != 456){
		cout<<"ÃÜÂë´íÎó";
	} 

	return 0;
}
//&& b == 456
