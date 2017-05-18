#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<vector>
using std::vector;

#include<string>
using std::string;

int main() {
	vector<string> spelled_out_numbers = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	cout << "Please enter a digit or a spelled-out digit: " << endl;
	int number{ -1 };
	string spelled_out_number{ "" };
	bool is_result{ false };

	while (1) {
		cin >> number;
		if (!cin) {
			cin.clear();
			getline(cin, spelled_out_number);
		}

		if ((number >= 0) && (number <= 9))
			cout << "This is " << spelled_out_numbers[number] << "." << endl;
		else if (!spelled_out_number.empty()) {
			for (int i = 0; i < 10; ++i)
				if (spelled_out_number == spelled_out_numbers[i]) {
					cout << "This is " << i << "." << endl;
					is_result = true;
				}
			if (!is_result)
				cout << "Please try again." << endl;
			is_result = false;
		}
		else
			cout << "Please try again." << endl;

		number = -1;
		spelled_out_number = "";
	}

	return 0;
}