# include <iostream>
#include <math.h> 
using namespace std;
 main(){
 	int a,b,c;
 	float S;
 	cout <<"nhap a, b, c ";
 	cin>>a>>b>>c;
 	if (((a + b) > c )&&((a + c) > b )&&((b + c) > a))
 	cout<<"a,b,c la 3 canh cua 1 tam giac"<<endl;
 	else 
 	cout<<"a,b,c ko phai la 3 canh cua 1 tam giac"<<endl;
 	if (((a + b) > c )&&((a + c) > b )&&((b + c) > a)){
	 cout<<"dien tich cua tam giac do la"<<endl;
 	S=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
 	cout<<S;
 }
 return 0;
}
 	
 	
