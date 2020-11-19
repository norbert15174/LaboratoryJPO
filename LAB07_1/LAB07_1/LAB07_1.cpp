// LAB07_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector> 
using namespace std;

class Person {
    string imie;
    string nazwisko;
    unsigned long int pesel;
public:
    Person() {
        this->imie = "Jan";
        this->nazwisko = "Kowalski";
        this->pesel = 12345678901;
    }
    Person(string imie, string nazwisko, unsigned long int pesel) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->pesel = pesel;
    }
    void setImie(string imie) {
        this->imie = imie;
    }
    void setNazwisko(string nazwisko) {
        this->nazwisko = nazwisko;
    }
    void setPesel(unsigned long int pesel) {
        this->pesel = pesel;
    }
    string getImie(string imie) {
        return this->imie;
    }
    string getNazwisko(string nazwisko) {
        return this->nazwisko;
    }
    unsigned long int getPesel(unsigned long int pesel) {
        return this->pesel;
    }
    virtual string to_string() {
        return "{\n imie : " + this->imie +
            " nazwisko : " + this->nazwisko +
            " pesel : " + std::to_string(pesel) + "}";
    }
};

class Student : public Person {
    unsigned long int numerIndeksu;
    string kierunekStudiow;
public:
    Student() : Person(){
        this->numerIndeksu = 0;
        this->kierunekStudiow = "EiT";
    }
    Student(unsigned long int numerIndeksu, string kierunekStudiow) : Person() {
        this->numerIndeksu = numerIndeksu;
        this->kierunekStudiow = kierunekStudiow;
    }
    void setNumerIndeksu(unsigned long int numerIndeksu) {
        this->numerIndeksu = numerIndeksu;
    }
    void setKierunekStudiow(string kierunekStudiow) {
        this->kierunekStudiow = kierunekStudiow;
    }
    unsigned long int getNumerIndeksu(unsigned long int numerIndeksu) {
        return this->numerIndeksu;
    }
    string getKierunekStudiow(string kierunekStudiow) {
        return this->kierunekStudiow;
    }
    string to_string() {
        return "{\n kieruneStudiow: " + kierunekStudiow +
            " numerIndeksu: " + std::to_string(numerIndeksu)  + Person::to_string() + "}";
    }
};

ostream& operator<<(ostream& out, Student& student)
{// operator wyjścia
    out << student.to_string();
    return out;
}

int main()
{
    Person person = Person();
    cout << person.to_string();
    Student student = Student();
    cout << student;
    vector<Person> students;
    students.push_back(Student());
    students.push_back(Student());

    for (Person a : students) {
        cout << a.to_string();
    }


    vector<Person*> students2;
    students2.push_back(new Student());
    students2.push_back(new Student());
    cout << endl << endl;
    for (Person *a : students2) {
        cout << a->to_string();
    }


}


