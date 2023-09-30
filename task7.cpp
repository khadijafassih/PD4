#include<iostream>
#include<math.h>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main()
{
  	int redRose,whiteRose,tulip;
  	cout<<"Red Rose: ";
  	cin>>redRose;
  	cout<<"White Rose: ";
  	cin>>whiteRose;
  	cout<<"Tulips: ";
  	cin>>tulip;
  	flowerShop(redRose,whiteRose,tulip);
}

void flowerShop(int redRose, int whiteRose, int tulip)
{
  float totalPrice = 0;
  totalPrice  = redRose * 2.00+whiteRose * 4.10+tulip * 2.50;
  cout << "Original Price: $"<<totalPrice << endl; 
    if(totalPrice > 200.0)
    {
      totalPrice *=0.80;
      cout<< "Price After Discount: $"<<totalPrice;
    }
    else
    {
      cout<< "No discount applied.";	
	}
}
