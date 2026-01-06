#include <iostream>
#include <string>

using namespace std;

struct phone {
	string mobile;
	string home;
};
struct parent {
	string name;
	string relationship;
	phone contact;
};
struct student {
	string id;
	string nickname;
	string lineid;
	phone mycontact;
	parent myparent;
};

void inputstudent(student& student) {
	cout << "Enter Student Information\n";

	cout << "ID :";
	cin >> student.id;

	cout << "Nickname :";
	cin >> student.nickname;

	cout << "Line ID :";
	cin >> student.lineid;

	cout << "My Contact-Mobile :";
	cin >> student.mycontact.mobile;

	cout << "My Contact-Home :";
	cin >> student.mycontact.home;

	cout << "My Parent-Name :";
	cin >> student.myparent.name;

	cout << "My Parent-Relationship :";
	cin >> student.myparent.relationship;

	cout << "My Parent-Phone Contact :";
	cin >> student.myparent.contact.mobile;

	cout << "My Parent-Phone Home :";
	cin >> student.myparent.contact.home;

}

void printstudent(const student& student) {
	cout << "\n===== Student Information =====\n";
	cout << "ID: " << student.id << "\n" << endl;
	cout << "Nickname: " << student.nickname << "\n" << endl;
	cout << "Line ID: " << student.lineid << "\n" << endl;
	cout << "\n===== Parent Information =====\n";
	cout << "My Parent name :" << student.myparent.name << "\n" << endl;
	cout << "Relationship :" << student.myparent.relationship << "\n" << endl;
	cout << "Phone Mobile :" << student.myparent.contact.mobile << "\n" << endl;
	cout << "Phone Home :" << student.myparent.contact.home << "\n" << endl;
	cout << "\n===== Contact Information =====\n";
	cout << "My Phone : Mobile :" << student.mycontact.mobile << "\n" << endl;
	cout << "My Phone : Home :" << student.mycontact.home << "\n" << endl;
}

int main() {
	student s1;
	inputstudent(s1);
	printstudent(s1);
	return 0;
}