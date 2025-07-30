#include <iostream>
#include <string>
using namespace std;
class teacher{
  private:
  double salary;

  public:
  // properties // attributes
  string  name;
  string  dept;
  string  subject;

  // methods // member function
  void changedept( string newdept){
    dept = newdept;
  };
  // setter
  void setsalary(double s){
    salary = s;
  };
  // getter
double getsalary(){
  return salary;
}
};
 int main(){
  // obj
  // to acess any obj we use a dot opreator {t1.name}
  teacher t1;
  t1.name = "Aniket";
  t1.dept = "comps";
  t1.subject = "os";
  t1.setsalary(2435);
  
  cout << t1.name <<endl;
  cout << t1.getsalary() << endl;

  return 0;

 }

