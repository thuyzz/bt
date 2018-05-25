# include <iostream>
using namespace std;
 main(){
 	float T,L,H;
 	char monHoc;
 	float tong;
 	cout <<"nhap diem Toan,Li,Hoa"<<endl;
 	cin>>T>>L>>H;
 	cout<<"tong diem 3 mon la"<<endl;
 	tong=T+L+H;
 	cout<<tong;
 	if(tong>=15){
 		if((T>=4)&&(L>=4)&&(H>=4))
 	cout<<"dau"<<endl;
 	if((T>5)&&(L>5)&&(H>5))
 	cout<<"hoc deu cac mon"<<endl;
 }
 else
 cout<<"hoc chua deu cac mon"<<endl;
 defaut :
 	cout<<"thi lai!"<<endl;
 return 0;
}
 	

