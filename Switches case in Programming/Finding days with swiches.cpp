#include<iostream>
using namespace std;
int main()
{
	int days;
	cout<<"Enter Any number from 1-7"<<endl;
	cin>>days;
	switch (days)
	{
		case 1:
			cout<<"The Day is Monday"<<endl;
			break;
			case 2:
				cout<<"The Day is Tuesday"<<endl;
				break;
				case 3:
					cout<<"The Day is Wednesday"<<endl;
					break;
					case 4:
						cout<<"The Day is Thursday"<<endl;
						break;
						case 5:
							cout<<"The Day is Friday"<<endl;
							break;
							case 6:
								cout<<"The Day is Saturday"<<endl;
								break;
								case 7:
									cout<<"The Day is Sunday"<<endl;
									break;
									default:
										cout<<"You Enter Invalid NUmber Chose any Number from 1-7"<<endl;
										
							
	}
	return 0;
}
