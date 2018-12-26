#include <iostream>
using std::cout;
using std::endl;

class Person
{
public:
	std::string _name; // 姓名
};
//class Student : public Person
class Student : virtual public Person
{
protected:
	int _num; //学号
};
//class Teacher : public Person 
class Teacher : virtual public Person
{
protected:
	int _id; // 职工编号
};
class Assistant : public Student, public Teacher
{
protected:
	std::string _majorCourse; // 主修课程
};

void Test()
{
	Assistant a;
	a.Student::_name = "djh";
	a.Teacher::_name = "jh";
	cout << a.Student::_name << endl;
	cout << a.Teacher::_name << endl;
}

int main()
{
	Test();
	return 0;
}