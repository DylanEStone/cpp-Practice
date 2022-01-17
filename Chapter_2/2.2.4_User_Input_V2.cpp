#include <iostream>
using namespace std;

bool accept2()
{
  cout<<"Do you want to proceed (y or n)\n";

  char answer = 0;
  cin>>answer;

  switch(answer){
    case 'y':
      cout<<"You picked yes\n";
      return true;
    case 'n':
      cout<<"You picked no.\n";
      return false;
    default:
      cout<<"I'll take for a no.\n";
      return false;
  }
}

int main()
{
  accept2();
}