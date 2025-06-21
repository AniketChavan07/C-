// inheritance 
// when properties & member function of base class are passed on to the derived class
// Below code of inheritance is non parameterized construcion
#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    string name;
     int no_of_legs;
    // Animal(string name,int no_of_legs ){
    //     this->name = name;                // parametrized constructor its not called a auomatically
    //     this-> no_of_legs = no_of_legs;
    // }
       Animal (){
            // non parametrized construction 
          cout<<"base class\n";
       };

};
class Bird :public Animal{
    public:

     Bird(){
        cout<<"derived class\n";

     }
    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"no_of_legs:"<<no_of_legs<<endl;

    };

  };
int main (){
    Bird b1;
    b1.name= "parrot";
    b1.no_of_legs= 2;
    b1.getinfo();
    return 0;
}
// in the inheritance there are a first call a base class and then call a derived class
// this code is a parameterized constructor
#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    string name;
     int no_of_legs;
    Animal(string name,int no_of_legs ){
        this->name = name;                // parametrized constructor its not called a auomatically 
        this-> no_of_legs = no_of_legs;
    }
    //    Animal (){
    //         // non parametrized construction 
    //       cout<<"base class\n";
    //    };

};
class Bird :public Animal{
    public:

     Bird(string name,int no_of_legs):Animal( name, no_of_legs){
        // cout<<"derived class\n";

     }
    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"no_of_legs:"<<no_of_legs<<endl;

    };

  };
int main (){
    Bird b1("pecock",2);
 
    b1.getinfo();
    return 0;
}
