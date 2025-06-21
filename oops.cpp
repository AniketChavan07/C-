//encapsulation 
//encapsulation is wrapping up data and member function in a single unit called class
// there are a four pillars of encapsulation 
//1 encapsulation
//2 abstraction
//3 inheritance
//4 polymorphism 


//encapsulation
// #include<iostream>
// #include<string>
// using namespace.std;
// class Teacher {
//     private:
//     double salary;//data hide 
//    public:
//     string name ;
//     string id ;
//     string dept ;
//     void changedept(string newdept){
//         dept = newdept;
//     }
//     void setsalary(double s){//setter func its used to set a value
//         salary =s;
//     }
//     void getsalary (){//get fun is used to a get a value
//         return salary;
//     }

// };
// int main {
//     Teacher t1;
//     t1.name= "Smile";
//     t1.id = "kgjjg";
//     t1.dept = "comp";
//     t1.salary = 13456;
//     cout << t1.name<<endl ;

// }

// constructor 
// special method invoked automatically at time of object creation used for intialisation
// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher {
//     private:
//     double salary;//data hide 
//    public:
//    Teacher(string n,string i,string d,double sal){//parameterized constructor
//    name = n ;
//    i = id;
//    dept = d;
//    sal = salary;
    
//    };
//     string name ;
//     string id ;
//     string dept ;
//     void changedept(string newdept){
//         dept = newdept;
//     }
//     void setsalary(double s){//setter func its used to set a value
//         salary =s;
//     }
//      double getsalary(){//get fun is used to a get a value
//         return salary;
//     }

//     void getinfo(){
//       cout<<"name:"<<name<<endl;
//       cout<<"dept:"<<dept<<endl;
//     };
// };
// int main () {
//     Teacher t1 ("Aniket","jgjjg","comps",57737);//parameterized constructor
//      Teacher t2(t1);
//      //t1.getinfo();
//      t2.getinfo();// its a copy constructor there are copy a parameter of t1 
// }
// constructor are three types 
// non parametrized 
// and parameterized constructor
// copy constructor
 
// in c++ there are special type of a pointer is called a "this" pointer it points to a current obj

//copy constructor
//special constructor (default) used to copy properties of one object into another
// two types of copy constructor
// shallow  copy constructor 
// deep copy constructor

// shallow constructor
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
      string* subPtr;
    Student(string name , string sub){
        this->name= name;// there are we use a "this" pointer.
        this->subPtr = new string;
        *subPtr = sub;// derefrence a subptr val
    }
    Student(Student &obj){
        this->name = obj.name;// this is our custom copy constructor in it we can change a data also 
        this-> subPtr = obj.subPtr;
    }
      void getinfo(){       
        cout<< "name:"<<name<<endl;
        cout << "sub:"<<subPtr<<endl;
      }
};
int main (){
    Student s1("Aniket","c++");
    Student s2(s1);// it is  a defaulat copy constructor
     s1.getinfo();
*(s2.subPtr)="java";
s1.getinfo();

}
