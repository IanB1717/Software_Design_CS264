#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Student_info.h"
#include "grade.h"
 

// #include "extract_fails_v3.h"      // vector<Student_info>
#include "extract_fails_v4.h"      // list<Student_info>

 
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;
using std::list;
 
int main()
{
 
 
    //typedef vector<Student_info> Student_group;
    typedef list<Student_info> Student_group;
 
    Student_group students;
    Student_info record;
 
   
    while (read(cin, record))
        students.push_back(record);
 
    
    Student_group students_failed = extract_fails(students);
 
    
 
    cout << endl;
 
    
    cout << "These students have passed." << endl;
    for (Student_group::const_iterator iter = students.begin();
         iter != students.end(); ++iter)
        cout << iter->name << " (" << grade(*iter) << ")" << endl;
 
    cout << endl;
 
   
    cout << "These students have failed." << endl;
    for (Student_group::const_iterator iter = students_failed.begin();
         iter != students_failed.end(); ++iter)
        cout << iter->name << " (" << grade(*iter) << ")" << endl;
 
    return 0;
}