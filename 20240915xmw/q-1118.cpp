#include <iostream>  
  
using namespace std;  
  
int main() {  
    int a, b, c;  
    cin >> a >> b >> c;  
  
    if (a + b <= c) {  
        cout<<"���ܹ���������"<<endl;  
    } else {    
        if (a == b && b == c) {  
            cout<<"�ȱ�������"<<endl;  
        } else if (a == b || a == c || b == c) {  
            cout<< "����������"<< endl;  
        } else if (a*a + b*b == c*c) { 
            cout<<"ֱ��������"<<endl;  
        } else {  
            cout<<"��ͨ������"<< endl;  
        }  
    }  
  
    return 0;  
}
