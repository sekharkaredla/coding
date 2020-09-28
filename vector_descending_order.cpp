#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool larger(int i, int j) {
	return i>j;
}

int main() {
	vector<int> v1 = {1,2,3,4};

	cout << "before sorting : " << endl;
	for_each(v1.begin(), v1.end(), [](int x){
		cout << x << " ";
	});

	sort(v1.begin(), v1.end(), larger);

	cout << "\nafter sorting : " << endl;
	for_each(v1.begin(), v1.end(), [](int x){
		cout << x << " ";
	});

	return 0;
}