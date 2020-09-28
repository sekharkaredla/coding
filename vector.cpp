#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	// vector<int> v2 = {1,2,3,4};
	vector<int> v1 = {6,4,7,9};

	// cout << v1 << endl;
	// cout << v2 << endl;

	// cout << v1.begin() << endl;
	// cout << v2.() << endl;

	cout<<"Before sorting: ";  
    for_each(v1.begin(), v1.end(), [](int x) {  
    cout << x << " ";  
  	});  

  	sort(v1.begin(), v1.end()); 

  	cout<<"\nAfter sorting:  ";  
  	for_each(v1.begin(), v1.end(), [](int x) {  
    cout << x << " ";  
  	});  
    
  return 0;
}