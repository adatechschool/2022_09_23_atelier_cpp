#include <iostream>
#include <string>


struct Job {
  std::string name;
  Job(std::string job) {
    name = job;
  }
};

class Person {
protected:
  unsigned int m_age;
  unsigned int m_size;

public:
  Job* job;
  const unsigned int ID;

  unsigned int get_size() const {
    return m_size;
  }
  unsigned int get_age() const {
    return m_age;
  }
  Person(unsigned int id, unsigned int a, unsigned int b): ID(id) {
    this->m_age = a;
    this->m_size = b;
    this->job = new Job("dev");
  }
  ~Person() {
    delete this->job;
  }
};


class Enfant: public Person {
private:
  std::string m_name;
public:
  void set_name(std::string name) {
    this->m_name = name;
  }
  Enfant(unsigned int a, unsigned int b, unsigned int c): Person(a, b, c) {};

  void print() {
    std::cout << "ID: " << this->ID << std::endl
              << "Name: '" << this->m_name << "' (size: " << this->m_name.length() << ")" << std::endl
              << "Age: " << this->get_age() << std::endl
              << "Taille: " << this->get_size() << std::endl
              << "Job: " << this->job->name << std::endl;
  }


};


int main(){

  Enfant person(1, 5, 172);
  person.set_name("pepito");
  person.print();

  return 0;
}
