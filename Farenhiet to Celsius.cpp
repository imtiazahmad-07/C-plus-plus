#include <iostream>

int main() {
  
  double tempf = 83.0; //temperature in farenheit
  double tempc;		   //temperature in Celsius
  
  tempc = (tempf - 32) / 1.8;  //From farenhiet to Celsius
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}