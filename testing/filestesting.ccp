#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  string filename;
  ifstream inputFile;
  int number, count = 0, sum = 0;

  cout << "Enter the filename: ";
  cin >> filename;

  inputFile.open(filename);
  if(!inputFile) {
   cout << "Error: File not found!" << endl; //
  return 1;
}

  while (inputFile >> number) {
  sum += number;
  count++;
}


if (count == 0) {
cout << "Not working right now maybe later" << end;
} else{
cout << "Count: " << count << endl; 
 cout << "Sum: " << sum << endl;
 cout << fixed << setprecision(2) << "Average: " << static_cast<double>(sum) / count << endl;
}

inputFile.close();
return 0;
}
