#include <iostream>
using std::cout;
using std::endl;

class Person
{
public:
	std::string _name; // ����
};
//class Student : public Person
class Student : virtual public Person
{
protected:
	int _num; //ѧ��
};
//class Teacher : public Person 
class Teacher : virtual public Person
{
protected:
	int _id; // ְ�����
};
class Assistant : public Student, public Teacher
{
protected:
	std::string _majorCourse; // ���޿γ�
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