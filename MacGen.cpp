#include <iostream>
#include <string>
#include <time.h>
#include <unistd.h>

int main() 
{
  std::string hex_char [16] = {"1","2","3","4","5","6","7","8","9","0","a","b","c","d","e","f"};
  srand(time(NULL));
  std::cout << "f81edf";
  for(int i=0; i<=5; i++)
  {
    std::cout<<hex_char [rand() % 16];
  }
  std::cout.flush();
  sleep(5);
  return 0;
}
