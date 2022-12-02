#include "Group.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Group {
public:
	class Student {
	public:
		string name;
		string school;
		string grade;
		int age;
		Student(string name, string school, string grade, int age) {
			this->name = name;
			this->school = school;
			this->grade = grade;
			this->age = age;
		}
	};
	list<Student> students;
	void addStudent(Student studentToBeAdded) {
		students.push_back(studentToBeAdded);
	}
	void displayGroup() {
		for (Student student : students) {
			cout << "Name = " << student.name << " "
				<< "School = " << student.school << " "
				<< "Grade = " << student.grade << " "
				<< "Age = " << student.age << '\n';
		}
	}
};