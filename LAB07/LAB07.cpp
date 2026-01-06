#include<iostream>
#include<string>
using namespace std;

struct student {
	string Id;
	string nickname;
	string lineId;
	string phone;
};
int main() {
	student s1;
	cout << "=== Input Student1 ===\n";
	cout << "Enter of Id: ";
	cin >> s1.Id;

	cout << "Enter of nickname: ";
	cin >> s1.nickname;

	cout << "Enter of lineId: ";
	cin >> s1.lineId;

	cout << "Enter of phone: ";
	cin >> s1.phone;

	cout << "\n=== Output Student1 ===\n";
	cout << "Id: " << s1.Id << endl;
	cout << "nickname: " << s1.nickname << endl;
	cout << "lineId: " << s1.lineId << endl;
	cout << "phone: " << s1.phone << endl;
	
	return 0;
}