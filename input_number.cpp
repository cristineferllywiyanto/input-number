#include <iostream>
using namespace std;

void main() {
	int input;
	int count = 0;
	int arr[100], temp[100];
	cout << "input number: "; cin >> input;
	while (input >= 0) {
		if (count == 0 || input % 2 == 0) {
			arr[count] = input;
			cout << "[ ";
			for (int i = 0; i <= count; i++)
			{
				cout << arr[i];
				if (i == count) {
					cout << " ]";
				}
				else {
					cout << ", ";
				}
			}
		}
		else if (input % 2 != 0) {
			for (int i = 0; i <= count - 1; i++)
			{
				temp[i] = arr[i];
			}
			arr[0] = input;
			for (int i = 0, a = 1; i <= count - 1; i++, a++)
			{
				arr[a] = temp[i];
			}
			cout << "[ ";
			for (int i = 0; i <= count; i++)
			{
				cout << arr[i];
				if (i == count) {
					cout << " ]";
				}
				else {
					cout << ", ";
				}
			}
		}
		count++;
		cout << endl << endl;
		cout << "input number: "; cin >> input;
	}
}