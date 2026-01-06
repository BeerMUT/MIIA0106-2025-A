#include <iostream>
#include <string>
using namespace std;

struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;
};
void swapStudents(Student &a, Student &b) {
	Student temp = a;
	a = b;
	b = temp;
}
void printStudent(Student students[],int size) {
	for (int i = 0; i < size; i++) {
		cout << "Id: " << students[i].id << endl;
		cout << "nickname: " << students[i].nickname << endl;
		cout << "lineId: " << students[i].lineId << endl;
		cout << "phone: " << students[i].phone << endl;
		cout << "--------------------------\n";
	}
}
int main() {
	const int SIZE = 5;
	Student students[SIZE];
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
	// SWAP
	swapStudents(students[0], students[1]);
	// OUTPUT
	cout << "\n=== Student List After Swap ===\n";
	printStudent(students, SIZE);

	return 0;
}