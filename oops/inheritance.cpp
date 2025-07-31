// #include<iostream>
// #include<string>
// using namespace std;

// class  insect{
//     public:
//     int no_of_wings ;
//     string name;
//     // parametrized constructor
//      insect(int no_of_wings,string name){
//         this->no_of_wings=no_of_wings;
//         this->name =name;
//         cout<<"base class\n";

//      }

// };
// class flies : public insect{
//     public:
//     flies(int no_of_wings,string name) :insect(no_of_wings,name){
//         cout<<"derived class\n";
//     }
//     // member function
//     void getinfo(){
//         cout<<"no of wings :" << no_of_wings<<endl;
//         cout<<"name :"<< name<< endl;
//     }
// };
// int main(){
//     flies f1(2,"Butterflies");
//     f1.getinfo();
//     return 0;
// }


// // multilevel inheritance

// #include<iostream>
// #include<string>
// using namespace std;

// // Base class
// class Insect {
// public:
//     int no_of_wings;
//     string name;

//     // Parameterized constructor
//     Insect(int no_of_wings, string name) {
//         this->no_of_wings = no_of_wings;
//         this->name = name;
//         cout << "Base class: Insect\n";
//     }
// };

// // First derived class
// class Flies : public Insect {
// public:
//     Flies(int no_of_wings, string name) : Insect(no_of_wings, name) {
//         cout << "Derived class: Flies\n";
//     }

//     void showBasicInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Number of wings: " << no_of_wings << endl;
//     }
// };

// // Second derived class (multilevel)
// class HouseFly : public Flies {
// public:
//     string color;

//     HouseFly(int no_of_wings, string name, string color)
//         : Flies(no_of_wings, name) {
//         this->color = color;
//         cout << "Derived class: HouseFly\n";
//     }

//     void getinfo() {
//         showBasicInfo();
//         cout << "Color: " << color << endl;
//     }
// };

// // Main function
// int main() {
//     cout << "Multilevel Inheritance Example:\n";

//     HouseFly h1(2, "Housefly", "Black");
//     h1.getinfo();

//     return 0;
// }



// // multiple inheritance

// #include<iostream>
// #include<string>
// using namespace std;

// // First base class
// class Animal {
// public:
//     string name;

//     Animal(string name) {
//         this->name = name;
//         cout << "Base class: Animal\n";
//     }
// };

// // Second base class
// class Feature {
// public:
//     int no_of_legs;

//     Feature(int no_of_legs) {
//         this->no_of_legs = no_of_legs;
//         cout << "Base class: Feature\n";
//     }
// };

// // Derived class with multiple inheritance
// class Dog : public Animal, public Feature {
// public:
//     string breed;

//     Dog(string name, int no_of_legs, string breed)
//         : Animal(name), Feature(no_of_legs) {
//         this->breed = breed;
//         cout << "Derived class: Dog\n";
//     }

//     void getinfo() {
//         cout << "Name: " << name << endl;
//         cout << "Number of legs: " << no_of_legs << endl;
//         cout << "Breed: " << breed << endl;
//     }
// };

// // Main function
// int main() {
//     cout << "Multiple Inheritance Example:\n\n";

//     Dog d1("Tommy", 4, "Labrador");
//     d1.getinfo();

//     return 0;
// }

// inheritance class
#include<iostream>
#include<string>
using namespace std;

// First base class
class Animal {
public:
    string name;

    Animal(string name) {
        this->name = name;
        cout << "Base class: Animal\n";
    }
}; 
// first child class
class bird : public Animal {
public:
    string breed;

    bird(string name, string breed)
        : Animal(name) {
        this->breed = breed;
        cout << "Derived class: bird\n";
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
    }
};



// Derived class with multiple inheritance
class Dog : public Animal {
public:
    string breed;

    Dog(string name, string breed)
        : Animal(name) {
        this->breed = breed;
        cout << "Derived class: Dog\n";
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
    }
};

// Main function
int main() {
    cout << "heirarchal Inheritance Example:\n\n";
    bird b1("mayur", "peacock");

    Dog d1("Tommy", "Labrador");
    b1.getinfo();
    d1.getinfo();

    return 0;
}

