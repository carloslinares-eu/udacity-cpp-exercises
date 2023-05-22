#include <cassert>
#include <stdexcept>
#include <string>
#include <utility>


// TODO: Define "Student" class
class Student {
 public:
  Student(std::string input_name, int input_grade, float input_GPA);

  // accessors
  std::basic_string<char> get_name() const {return name;}
  int get_grade () const {return grade;}
  float get_GPA () const {return GPA;}

  // mutators
  void set_name (std::basic_string<char> input_name) {
      name = std::move(input_name);
  };

  void set_grade (int input_grade) {
      grade = input_grade;
  }

  void get_GPA (float input_GPA) {
      GPA = input_GPA;
  }

 private:
  std::string name;
  int grade;
  float GPA;

  const int minimum_grade = 0;
  const int maximum_grade = 12;
  const float minimum_GPA = 0.0;
  const float maximum_GPA = 4.0;
};

Student::Student(std::string input_name, int input_grade, float input_GPA) :name (std::move(input_name)),
grade (input_grade), GPA (input_GPA) {
    if (grade < minimum_grade or grade > maximum_grade) {
        throw std::invalid_argument("Grade is from 0 (kindergarten) to 12");
    }
    if (GPA < minimum_GPA or GPA > maximum_GPA) {
        throw std::invalid_argument("GPA is from 0.0 to 4.0");
    }
}


// TODO: Test
int main() {
    Student valid_student("Karl Linares", 5, 3.9);
    assert(valid_student.get_name() == "Karl Linares");
    assert(valid_student.get_grade() == 5);
    assert(valid_student.get_GPA() == 3.9f);

    bool caught{false};
    try{
        Student invalid_student("Karl Linares", -6, 3.9);
    }
    catch (...) {
        caught = true;
    }
}