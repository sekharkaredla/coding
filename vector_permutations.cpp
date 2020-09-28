#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	vector<int> v1 = {8,6,7,10};
	cout << "permutations without sorting : \n";
	do {
    	cout << v1[0] << ' ' << v1[1] << ' ' << v1[2] << ' ' << v1[3] << '\n';
  	} while (next_permutation(v1.begin(), v1.end()));

  	sort(v1.begin(), v1.end());

  	cout << "permutations with sorting : \n";
	do {
    	cout << v1[0] << ' ' << v1[1] << ' ' << v1[2] << ' ' << v1[3] << '\n';
  	} while (next_permutation(v1.begin(), v1.end()));
return 0;
}