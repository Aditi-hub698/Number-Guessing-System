#include <iostream>
using namespace std;

int main()
{
  cout<<"====NUMBER GUESSING SYSTEM====="<<endl;

  int attempts = 1;
  int secretNumber = 70;

  int n;
  cout<<"Enter your number: "<<endl;
  cin>>n;


  while (n!= secretNumber)
  {
  if (n > secretNumber)
  {
    cout<<"Too HIGH! Try again!"<<endl;
cout<<"Enter another number:";
cin>>n;
  }
 
  
  else if (n < secretNumber)
  {
    cout<<"Too LOW! Try again!"<<endl;
    cout<<"Enter another number: ";
    cin>>n;
  }
attempts++; 
  }
  
   cout << "Congratulations! You guessed the correct number." << endl;
cout<<" You have guessed the number in "<<attempts<< " attempt(s)." << endl;

return 0;
}
  




