#ifndef Gurad_grade_h
#define Guard_grade_h

#include <vector>;
#include "student_info.h";
double grade(double,double,double);
double grade(double,double,const std::vector<double>&);
double grade(const Student_info&);

#endif