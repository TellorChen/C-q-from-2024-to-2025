#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int a;
	int b;
	scanf("%d%d",&a,&b);
	if (a == 123 && b == 456){
		cout<<"��¼�ɹ�";
	}
	else if (a != 123 ){
		cout<<"�˺Ŵ���";
	}
	else if (a == 123 && b != 456){
		cout<<"�������";
	} 

	return 0;
}
//&& b == 456
