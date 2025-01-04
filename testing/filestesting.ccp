#include <iostream>
#include <fstream>
#include <string>
#include <iomainip>

using namespace std;

int main() {
  string filename;
  ifstream inputFile;
  int number, count = 0, sum = 0;

  count << "Enter the filename: ";
  cin >> filename;

  inputFile.open(filename);
  if(!inputFile) {
  count << "Error: File not found" << end1;

