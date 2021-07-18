#include <iostream>
#include <string>
#include <time.h>

int main() 
{
  std::string hex_char [16] = {"1","2","3","4","5","6","7","8","9","0","a","b","c","d","e","f"};
  srand(time(NULL));
  for(int i=0; i<=11; i++)
  {
    std::cout<<hex_char [rand() % 15];
  }
  return 0;
}
