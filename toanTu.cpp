# include <iostream>
using namespace std;
 main(){
 	int x,y;
 	char toanTu;
 	float kq;
 	cout<<"nhap x =";
 	cin >>x;
 	cout <<"nhap y =";
 	cin>>y;
 	switch (toanTu){
 		case '+':
 			kq=x+y;
 			cout<<kq;
 			cout<<"tong la"<<endl;
 			break;
 			case '-':
 				kq=x-y;
 				cout<<kq;
 				cout <<"hieu la"<<endl;
 				break;
 				case '*':
                  kq=x*y;
                  cout<<kq;
			cout<<"tich la"<<endl;
 					break;
 					defaut :
 						{
 							if (y==0)
 								cout<<"khong tinh dc phep chia"<<endl;
 								else
 								{
 									kq=x/y;
 									cout<<"thuong la"<<endl;
								 }
							 }
							 break;
						 }
	 return 0;
}
