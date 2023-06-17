#include <iostream>

int main()
{
    // Datatypes
    int age = 25;

    double salary = 9.5;

    char grade = 'A';

    // string (object that represents a sequence of text)
    // std::string name = "Prasath";
    // std::string address = "kovilpatti, Tamilnadu";
    // std::cout << "My name is " << name << " and my age is " << age << ". I am from " << address << "and my yearly CTA is Rs: " << salary << "L.";

    // const - read only value
    const double PI = 3.14;
    double radius = 34;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}