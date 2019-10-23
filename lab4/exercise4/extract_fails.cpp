#include "Student_info.h"
#include "Student_group.h"
#include "grade.h"
 

Student_group extract_fails(Student_group& students)
{
    Student_group fail;
    Student_group::iterator iter = students.begin();
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