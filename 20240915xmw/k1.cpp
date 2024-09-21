#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	//占位符 int %d  longlong %ld  float %f  double %lf  char %c
	//保留小数 %.2f  %.4lf 
	printf("123123\n");
	printf("123123\n");
	printf("%d\n",123123);
	
	int a;
	double b;
	
	scanf("%d%lf",&a,&b);
	printf("%d %lf",a,b);
	
	return 0;
}

