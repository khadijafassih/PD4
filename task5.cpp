#include<iostream>
#include<math.h>
using namespace std;
void possibleBonus(int positionA, int positionB);
main()
{
 int positionA, positionB;
 cout<<"Enter your position: ";
 cin>> positionA;
 cout<<"Enter your friend's position: ";
 cin>> positionB;
 possibleBonus(positionA, positionB);	
}

void possibleBonus(int positionA, int positionB) 
{  
//int positionA, positionB;
  if((positionB-positionA)<=6)
 {
 	cout << "true"; 
  }  
  else 
  {
  	cout << "false";
  }
} 
