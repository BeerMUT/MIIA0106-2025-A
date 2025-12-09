#include <iostream>
using namespace std;

int main() {
	cout << "===== FOR LOOP =====" << "\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
	cout << "===== WHILE LOOP =====" << "\n";
	int i = 1;
	while (i <= 10) {
		cout << i << "\n";
		i++;
	}
	cout << "===== DO WHILE LOOP =====" << "\n";
	i = 1;
	do{
		cout << i << endl;
		i++;
	} while (i<= 10);
	return 0;
}