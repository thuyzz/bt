# include <iostream>
using namespace std;
 main(){
	char nc1=' ';
   char nc2=' ';
	cout <<"tro choi one two three"<<endl;
	cout <<"nguoi choi 1"<<endl;
	cin >>nc1;
	cout <<"nguoi choi 2"<<endl;
	cin>>nc2;
	switch (nc1)
	{
		case 'k':
		switch (nc2){
			case 'k':
			cout<<"hoa nhau"<<endl;
			break;
			case 'b':
				cout<<"nguoi choi 2 thang nguoi 1"<<endl;
				break;
				case 'g':
					cout<<"nguoi choi 2 thua nguoi 1"<<endl;
					break;
				}
				break;
		switch (nc2){
			case 'k':
			cout<<"nguoi choi 2 thua nguoi 1"<<endl;
			break;
			case 'b':
				cout<<"hoa nhau"<<endl;
				break;
				case 'g':
					cout<<"nguoi choi 2 thang nguoi 1"<<endl;
					break;
				}
				break;
				switch (nc2){
			case 'k':
			cout<<"nguoi choi 2 thang nguoi 1"<<endl;
			break;
			case 'b':
				cout<<"nguoi choi 2 thua nguoi 1"<<endl;
				break;
				case 'g':
					cout<<"hoa nhau"<<endl;
					break;
				}
				break;
	}
	return 0;
}
