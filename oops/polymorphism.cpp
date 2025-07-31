// it is a constructor overloading and compile time polymorphism 
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    // Non-parameterized constructor
    Student() {
        cout << "Non-parameterized constructor\n";
    }

    // Parameterized constructor
    Student(string name) {
        this->name = name;
        cout << "Parameterized constructor\n";
    }
};

int main() {
    Student s1;// non paramterized constructor
    Student s1();// paramterized constructor

    return 0;
}

function overloading : same name and same class but they only differ a parameters return type it should be same or diffrent

#include<iostream>
#include<string>
using namespace std;
class print {
    public:
    void show(int x){
        cout<<"int :"<< x<< endl;

    }
    void show(char ch){
        cout << "char :"<< ch<< endl;
    }
};
int main(){
    print p1;
    p1.show('r');// char
    p1.show(23);// int 
    return 0;
}

// operator overloading :using  a same operator a multiple ways
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex result;
        result.real = this->real + obj.real;
        result.imag = this->imag + obj.imag;
        return result;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 4.5);

    Complex sum = c1 + c2;  // Operator overloading in action

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}

// run time polymorphism
// example 
// function overridding 
// parent and child both contain the same function with different implementation
// the parent class function is said to be overridden
#include<iostream>
#include<string>
using namespace std;
class parent{
    public:
    void getinfo(){
        cout<<"base class";
    }
};
class child:public parent{
   public:
   void getinfo(){
    cout<<"child class";
   }
};
int main(){
    child c1;
    c1.getinfo();
    return 0;
}