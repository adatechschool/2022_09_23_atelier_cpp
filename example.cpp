#include <iostream>



class Person {
  unsigned int m_age;
  unsigned int m_size;

public:
  unsigned int get_size() {
    return m_size;
  }
  unsigned int get_age() {
    return m_age;
  }
  Person(unsigned int a, unsigned int b): m_age(a), m_size(b) {}
};


int main(){

  Person person(5, 172);

  // std::cout << person.m_age;
  std::cout << "Age: " << person.get_age()
            << std::endl << "Taille: " << person.get_size() << std::endl;

  return 0;
}
