#include <iostream>
#include <string>
using namespace std;

struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;
};
void printStudent(Student s) {
	cout << "Id: " << s.id << endl;
	cout << "nickname: " << s.nickname << endl;
	cout << "lineId: " << s.lineId << endl;
	cout << "phone: " << s.phone << endl;
}
int main() {
	Student s1;
	cout << "=== Input Student1 ===\n";
	cout << "Enter of Id: ";
	cin >> s1.id;

	cout << "Enter of nickname: ";
	cin >> s1.nickname;

	cout << "Enter of lineId: ";
	cin >> s1.lineId;

	cout << "Enter of phone: ";
	cin >> s1.phone;

	cout << "\n=== Output Student1 ===\n";
	printStudent(s1);

	return 0;
}