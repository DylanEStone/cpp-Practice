#include <iostream>
using namespace std;

bool accept()
{
  cout<<"Do you want to proceed (y or n)?\n";

  char answer = 0;
  cin >> answer;
  if(answer == 'y')
  {
    cout << "You picked yes!\n";
    return true;
  }
  cout << "You picked no.\n";
  return false;
}

int main()
{
  accept();
}