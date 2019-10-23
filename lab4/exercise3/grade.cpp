#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"
 
using std::domain_error;
using std::vector;
 
// definitions for the grade functions from S4.1/52, S4.1.2/54, S4.2.2/63
 
// compute a student's overall grade from midterm and final exam
// grades and homework grade (S4.1/52)
double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}
 
double grade(double midterm, double final, const vector<double>& hw)
{
    if (hw.size() == 0)
        throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}
 

double grade(const Student_info& s)
{
    return grade(s.midterm, s.final, s.homework);
}
 

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}