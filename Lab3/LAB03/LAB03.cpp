#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentID;
    string studentName;
    float score;
    string grade;

    cout << "Enter Student ID: ";
    cin >> studentID;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Score: ";
    cin >> score;


    if (score >= 90) {
        cout << "唷么 A" << endl;
    }
    else if (score >= 80) {
        cout << "唷么 B" << endl;
    }
    else if (score >= 70) {
        cout << "唷么 C" << endl;
    }
    else {
        cout << "唷么 F" << endl;
    }


    cout << "\n";
    cout << "==========Student Report==========" << endl;
    cout << "Student ID; " << studentID << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Enter Score: " << score << endl;

    return 0;
}