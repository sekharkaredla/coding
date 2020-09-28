#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Student
{
	int roll_no, height;
	bool operator<(Student that) const {
		return this->height < that.height;
	}

	Student(int roll_no, int height) {
		this->roll_no = roll_no;
		this->height = height;
	}
};

int main(){
	vector<Student> v1 = {Student(1,180), Student(2,190), Student(3,185)};
	sort(v1.begin(), v1.end());
	for_each(v1.begin(), v1.end(), [](Student x) {  
    cout << x.roll_no << " " << x.height << endl;  
  	});
	return 0;
}