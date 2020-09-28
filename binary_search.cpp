#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	vector<int> v1 = {8,6,7,10};
	sort(v1.begin(), v1.end());
	cout << binary_search(v1.begin(), v1.end(), 7) << endl;
	cout << binary_search(v1.begin(), v1.end(), 11) << endl;
	return 0;
}