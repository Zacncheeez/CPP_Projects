/*
Zach Tobin
10/2/25

This code holds entries for students, where the user can add students first name,
last name, student id, and GPA. They can also remove the student. And they can print
all the information of all the students.


Citations:
1.  Emilio Vasquez-Pettit. Helped with the pointers and the add and remove student functions.
*/


#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <vector>

using namespace std;

//struct of the student
struct Student
{
    char fn[81] = {'\0'};
    char ln[81] = {'\0'};
    int id;
    float gpa;
};

//Adds a student, Emilio helped here with the pointers.
void addStudent(vector<Student*>& students) {
  Student* george = new Student;
  cout << "Please enter first name, last name, ID, and GPA:" << endl;
        cin >> george ->fn;
        cin >> george ->ln;
        cin >> george->id;
        cin >> george->gpa;
          
    students.push_back(george);

}

//Prints all the stored students.
void printStudent(const vector<Student*>& students) {
    for (const Student* s : students) {
        cout << "Name: " << s->fn << " " << s->ln << ", ID: " << s->id << ", GPA: " << s->gpa << endl;
  }
}

//Deletes student based off the id the user inputs. Emilio helped here as well.
void deleteStudent(vector<Student*>& students) {
    int answer;
    cout << "ID of student you want removed: " << endl;
    cin >> answer;
    for(int i = 0; i < students.size(); i++) {
        if(students[i]->id == answer)
	  {
            cout << "Removed: " << students[i]->fn << " " << students[i]->ln << endl;
	    delete students[i];
	    students.erase(students.begin() + i);
        }
    }
}



int main()
{
  vector<Student*> students;
  int choice = 0;

  //Loops until the user quits
  for(;;){

    //Asks the user what to do.
    cout << "What would you like to do?: " << endl;
    cout << "1 = Add student " << endl;
    cout << "2 = Print students " << endl;
    cout << "3 = Delete student " << endl;
    cout << "4 = Quit " << endl;
    
    cin >> choice;

    //if statements that choose what function to run.
    if (choice == 1) {
      addStudent(students);
    }
    else if (choice == 2) {
      printStudent(students);
    }
    else if (choice == 3) {
      deleteStudent(students);
    }
    else if (choice == 4) {
        break;
    }


    }
  return 0;
}

