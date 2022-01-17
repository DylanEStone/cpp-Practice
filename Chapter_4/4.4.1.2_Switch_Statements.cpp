#include<iostream>
using namespace std;

int main()
{
  const double cm_per_inch = 2.54;
  int length = 1;
  char unit = 'a';
  cout << "Please enter a length followed by a unit (c or i):" << endl;
  cin >> length >> unit;
  switch(unit) {
    case 'i':
      cout << length << "in == " << cm_per_inch  << "cm" << endl;
      break;
    case 'c':
      cout << length << "cm == " << length/cm_per_inch << "in" << endl;
      break;
    default:
      cout << "Sorry, I dont know a unit called '" << unit << "'" << endl;
      break;
  }
}