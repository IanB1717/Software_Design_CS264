//do not touch this file
#ifndef GUARD_Customer_info
#define GUARD_Customer_info
#include <iostream>
#include <string>
#include <vector>
struct Customer_info {
  std::string name;
  std::vector<double> items;
};

bool compare(const Customer_info&, const Customer_info&);
std::istream& read(std::istream&, Customer_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif
