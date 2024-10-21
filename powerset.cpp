#include <iostream>  
#include<math.h>

using namespace std;

void powerset(int set[], int size) {
	int  powersetsize = pow(2, size);
	for (int i = 0; i < powersetsize; i++) {
		cout << "{";
		for (int j = 0; j < size; j++) {
			if (i & (1 << j)) {
				cout << set[j];
			}
		}
		cout << "}" << endl;
	}
}

int main() {
	int size;
	cout << "輸入集合大小:";
	cin >> size;
	int* set = new int[size];
	cout << "輸入集合理的元素:";
	for (int i = 0; i < size; i++) {
		cin >> set[i];
	}
	cout << "所有集合:" << endl;
	powerset(set, size);

	delete[] set;
	return 0;
}
