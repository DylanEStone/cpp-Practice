#include <iostream>
using namespace std;

// Counts the occurences of x in p[]
int count_x(char* p, char x)
{
  if(p==nullptr) return 0;
  int count = 0;
  while(*p){
    if(*p==x)
      ++count;
    ++p;
  }
  return count;
}

int  main()
{
  char letters[7] {'a','b','c','c','d','e','f'};
  char* p = &letters[0];
  cout << count_x(p, 'c') << endl;

  return 0;
}