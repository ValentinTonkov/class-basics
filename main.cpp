#include <iostream>
using namespace std;

//definition of a class
class Student{
public:
    //public fields
    string name;
    int age;
    string fn;
};

int main() {

    //Student s1, s2, s3, s4;

    //array of objects
    Student students[100];

    //inserting data from command line
    // for all 100 students
    for (int i = 0; i < 100; ++i) {
        cout<<"Student nomer "<<i<<endl<<"Vuvedete ime";
        getline(cin, students[i].name);
        cout<<"Vuvedete godini: ";
        cin>>students[i].age;
        cin.ignore(100,'\n');
        cout<<"Vuvedete fn: ";
        getline(cin, students[i].fn);
    }

    return 0;
}
