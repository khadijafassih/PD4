#include<iostream>
using namespace std;
void discount(string country, float ticketPrice);
main()
{
	string country;
	float ticketPrice;
	cout<<"Enter the country's name: ";
	cin>> country;
	cout<<"Enter the ticket price in dollars: $";
    cin>> ticketPrice;
    discount(country, ticketPrice);
}

void discount(string country, float ticketPrice)
{
  float finalPrice;
   
  if(country == "Pakistan")
  {
    finalPrice = ticketPrice * 0.95;   //1-5%
  } 
  else if(country == "Ireland")
  {
    finalPrice = ticketPrice * 0.9;
   } 
   else if (country == "India")
  {
    finalPrice = ticketPrice * 0.8;
  } 
  else if(country == "England")
  {
    finalPrice = ticketPrice * 0.7;
  }
  else if(country == "Canada")
  {
    finalPrice = ticketPrice * 0.55;
  }
cout<<"Final ticket price after discount: $"<<finalPrice;
}

