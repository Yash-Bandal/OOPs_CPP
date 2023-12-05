#include<iostream>

using namespace std;

class StudyFame {
  private:
    int a, b;
  public:
    void getData();
    void swap_number();
    void display();
};
// get the data from user
void StudyFame::getData() {
  cout << "Enter Two Numbers: ";
  cin >> a >> b;
}

// swap the number
void StudyFame::swap_number() {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
// print the number on screen
void StudyFame::display() {
  cout << "a = " << a << " b = " << b << endl;
}
int main() {
    
 // creating object of class
  StudyFame s;
  
  s.getData();
  cout << "Before swapping" << endl;
  s.display();

  s.swap_number();
  cout << "After swapping" << endl;
  s.display();
  return 0;
}
