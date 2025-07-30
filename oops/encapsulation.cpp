#include <iostream>
#include <string>
using namespace std;
class teacher{
  private:
  double salary; // data hiding 
   public:
   // non parametrized
//    teacher() {
//     cout<< "hi iam constructor\n";
//    }
   
   //  parametrized
   teacher(string n,string d, string s,double sal) {
    name = n;
    dept = d;
    subject = s;
    salary =sal;
   }

   // copy constructor
   teacher(teacher &orgobj) {
    cout<< "hi iam constructor\n";

    name = orgobj.n;
    dept = orgobj.d;
    subject = orgobj.s;
    salary = orgobj.salary;
   }
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
//   void setsalary(double s){
//     salary = s;
//   };
//   // getter
// double getsalary(){
//   return salary;
// }
void getinfo(){
    cout << "name :" << name << endl;
    cout << "subject :" << subject << endl;

}
};
 int main(){
  // obj
  // to acess any obj we use a dot opreator {t1.name}
  teacher t1("aniket","comp","os","45235");//constructor call

  teacher t2(t1); // defualt copy constructor call 
  t1.getinfo();

  return 0;

 }

