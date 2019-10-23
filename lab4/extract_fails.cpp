#include "Student_info.h"
#include "grade.h"
#include <vector>
#include <list>
 
using std::vector;
using std::list;
 
 

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}
 

vector<Student_info> extract_fails_v1(vector<Student_info>& students)
{
    vector<Student_info> pass, fail;
 
    for (vector<Student_info>::size_type i = 0;
         i != students.size(); ++i)
         if (fgrade(students[i]))
            fail.push_back(students[i]);
         else
            pass.push_back(students[i]);
 
    students = pass;
    return fail;
}
 

vector<Student_info> extract_fails_v2(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;
 
    // invariant: elements [0,i) of students represent passing grades
    while (i != students.size())
    {
        if (fgrade(students[i]))
        {
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        }
        else
            ++ i;
    }
    return fail;
}
 
// separate passing and failing student records
// version 3: iterators but no indexing; still potentially slow
// (S5.3/82)
vector<Student_info> extract_fails_v3(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}
 

list<Student_info> extract_fails_v4(list<Student_info>& students)
{
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}