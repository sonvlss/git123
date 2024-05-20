#include <iostream>
using namespace std;
int main(){
int month, year, days;
cout << "nhap vao thang:";
cin >> month;

switch (month){
	case 2:
		cout<<"nhap vao nam:";
		cin>>year;
		if((year%4==0 && year%100 !=0)|| year%400==0)
		{
			days=29;
		}
		else{
			days=28;
			
		}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			days=30;
			break;
		default:
			days=31;
			break;
	}
	cout <<"thang"<<month<<"co"<<days<<"ngay."<<endl;
	return 0;
}
			
