#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	vector<int> v1 = {8,6,7,10};
	vector<int> temp (4,99);

	cout<<"Before swapping: ";  
    for_each(temp.begin(), temp.end(), [](int x) {  
    cout << x << " ";  
  	}); 

  	iter_swap(temp.begin() + 3, v1.begin() + 2);

  	cout<<"\nAfter swapping: ";  
    for_each(temp.begin(), temp.end(), [](int x) {  
    cout << x << " ";  
  	}); 

}