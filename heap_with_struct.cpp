#include<iostream>
#include<queue>
#include<vector>


using namespace std;

// either inbuilt operator or a comparing class can be used

struct Student
{
	int roll_no, height;
	bool operator<(Student that) const {
		return this->height < that.height;
	}
};

struct CompareHeights
{
	bool operator()(Student const& p1, Student const& p2) 
    { 
        return p1.height > p2.height; 
    } 
};

int main() {
	vector<Student> v1 = {(Student){1,180}, (Student){2,190}, (Student){3,185}};
	priority_queue<Student, vector<Student>, CompareHeights> prioQueue (v1.begin(), v1.end());
	prioQueue.push((Student){4, 165});
	while (prioQueue.size() != 0) {
	    Student s = prioQueue.top();
	    prioQueue.pop();
	    cout << s.roll_no << " " << s.height << endl;
	}
	return 0;
}