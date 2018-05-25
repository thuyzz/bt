# include <iostream>
using namespace std;
 main(){
 	string thu [7]={"cn","thu 2","thu 3","thu 4","thu 5","thu 6","thu 7"};
 	int thang [13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 	int k,n;
 	int tongNgay=0;
 	cout<<"nap k,n"<<endl;
 	cin>>k>>n;
 	for(int i=1; i<n; i++){
 		tongNgay += thang[i];
	 }
	 tongNgay += k;
	 cout<<tongNgay<<endl;
	 int t = tongNgay % 7;
	 cout<<thu[t];
}
 	
 	
