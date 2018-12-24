#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Person
{
  public:
    Person(std::string name = "djh"):_name(name)
    {}

    Person(const Person& p):_name(p._name)
    {}
     
    Person& operator=(const Person& p)
    {
      if(this != &p)
      {
        _name = p._name;
      }
      return *this;
    }
     
    ~Person()
    {}
    void Print()
    {
      cout << "name: " << _name << "-age: " << _age << endl;
    }
  protected:
    std::string _name = "djh";
    int _age = 18;

};

class Student : public Person
{
  public:
    Student(std::string name,int sid):Person(name),_sid(sid)
    {}
 
    Student(const Student &s):Person(s),_sid(s._sid)
    {}

    Student& operator=(const Student& s)
    {
      if(this != &s)
      {
        Person::operator=(s);
        _sid = s._sid;
      }
    }


  protected:
    int _sid;
};

//class Teacher : public Person 
//{
//  protected:
//    int _jobid;
//};

int main()
{
  //Student st;
  //Person *p = &st;
  //Person& pp = st;
  //pp.Print();
  //Student s;
  //Teacher t;
  //s.Print();
  return 0; 
}


// can not inherit
// class NOinherit
// {
//    public:
//      static NOinherit Get()
//      {
//         return NOinherit();
//      }
//    private:
//      NOinherit()
//      {}
// };
