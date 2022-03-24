#include <iostream>
#include <conio.h>

void Read2(int&, int&);
int Max(int, int);
void WriteMax(int);

using namespace std;

int main() {
	int val1, val2, maxVal;

	Read2(val1, val2);
	maxVal = Max(val1, val2);
	WriteMax(maxVal);
	
	_getch();
	return 0;
}

void Read2(int& v1, int& v2) {
	cout << "Masukkan Nilai (2 bilangan bulat) : ";
	cin >> v1 >> v2;
}

int Max(int v1, int v2) {
	if (v1 > v2) {
		return v1;
	} else {
		return v2;
	}
}

void WriteMax(int val) {
	cout << val << " adalah yang terbesar." << endl;
}