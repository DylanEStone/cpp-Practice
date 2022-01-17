#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the name of the person you want to write to." << endl;

  string name;
  cin >> name;

  cout << "Dear " << name << ", " << endl;
  cout << "\tHow are you? I am fine. I miss you." << endl;

  cout << "Enter the name of another friend.\n" << endl;

  string friend_name;
  cin >> friend_name;

  cout << "Have you seen " << friend_name << endl;

  char friend_sex = 0;

  cout << "Enter m if male and f if female." << endl;
  cin >> friend_sex;

  if(friend_sex == 'm') cout << "If you see " << friend_name << ", tell them to call me." << endl;
  else if(friend_sex == 'f') cout << "If you see " << friend_name << ", please ask her to call me." << endl;
  else {
    cout << "Not a valid sex." << endl;
  }
}