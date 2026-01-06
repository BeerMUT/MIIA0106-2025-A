#include <iostream>
#include <string>
using namespace std;

struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;
};
int main() {
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << "===\n";
		cout << "Enter of Id: ";
		cin >> students[i].id;

		cout << "Enter of nickname: ";
		cin >> students[i].nickname;

		cout << "Enter of lineId: ";
		cin >> students[i].lineId;

		cout << "Enter of phone: ";
		cin >> students[i].phone;

		cout << endl;
	}
	// OUTPUT
	cout << "\n=== Student List ===\n";
	for (int i = 0; i < SIZE; i++) {
		// TODO: cout &lt;&lt; students[i]...
		cout << students[i].id << " " << students[i].nickname << " " << students[i].lineId << " " << students[i].phone << endl;
		cout << "--------------------------\n";
	}
	return 0;
}