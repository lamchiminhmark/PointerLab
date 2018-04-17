#include <iostream>

using namespace std;

void PassByValue(int number)
{
    cout << "PassByValue() is being called" << endl;
    number += 1;
    cout << "The new num1 in PassByValue is: " << number << endl;
}

void PassByRef(int* pNum)
{
    cout << "PassByRef() is being called" << endl;
    *pNum = 50;
    cout << "pNum is: " << *pNum << endl;
}

class Person {
private:
    string _name;
    int _age;
    double _height;
    double _weight;

public:
    Person()
        : _name {}, _age {}, _height {}, _weight {}
    {}

    string getName() {
        return _name;
    }

    int getAge() {
        return _age;
    }

    double getHeight() {
        return _height;
    }

    double getWeight() {
        return _weight;
    }

    string setName(string newName)
    {
        string oldName = getName();
        _name = newName;
        return oldName;
    }
};

void ModifyPerson(Person& person)
{
    person.setName("Minh");
}

int main()
{
    int num1 {};
    int* pNum {};
    num1 = 3;
    *pNum = 5;
    PassByValue(num1);
    PassByRef(pNum);
    cout << "The pNum in main() is: " << *pNum << endl;
    double* pDouble;
    *pDouble = 5.6;
    cout << "pDouble is: " << *pDouble << endl;
    delete pDouble;
    cout << "pDouble is: " << *pDouble << endl;
    Person minh{};
    cout << "This person name is: " << minh.getName();
    cout << ", age is: " << minh.getAge();
    cout << ", height is: " << minh.getHeight();
    cout << ", weight is: " << minh.getWeight() << endl;
    ModifyPerson(minh);
    cout << "After ModifyPerson(): " << endl;
    cout << "This person name is: " << minh.getName();
    cout << ", age is: " << minh.getAge();
    cout << ", height is: " << minh.getHeight();
    cout << ", weight is: " << minh.getWeight() << endl;
}

