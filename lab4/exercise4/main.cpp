#include <iostream>
#include "Student_info.h"
#include "Student_group.h" // switch between vector and list based Student_group here
#include "grade.h"
#include "extract_fails.h"
 
using std::cin;
using std::cout;
using std::endl;
 
int main()
{
 
    Student_group students;
    Student_info record;
 
    // read and store all the student's data.
    while (read(cin, record))
        students.push_back(record);
 
    // Extract the failed students
    Student_group students_failed = extract_fails(students);
 
    // sort vector and sort list are different
    // so we remove from here for now.
 
    cout << endl;
 
    // Report passing students
    cout << "These students have passed." << endl;
    for (Student_group::const_iterator iter = students.begin();
         iter != students.end(); ++iter)
        cout << iter->name << " (" << grade(*iter) << ")" << endl;
 
    cout << endl;
 
    // Report failing students
    cout << "These students have failed." << endl;
    for (Student_group::const_iterator iter = students_failed.begin();
         iter != students_failed.end(); ++iter)
        cout << iter->name << " (" << grade(*iter) << ")" << endl;
 
    return 0;
}