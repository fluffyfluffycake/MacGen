#include <iostream>
#include <string>
#include <time.h>
#include <unistd.h>

int main() 
{
  std::string hex_char [16] = {"1","2","3","4","5","6","7","8","9","0","a","b","c","d","e","f"};
  std::string prefix [5] = {"f81edf","4cf95d","00a00d","00001a","c8ddc9"};
  srand(time(NULL));
  std::cout << prefix[rand() % 5];
  for(int i=0; i<=5; i++)
  {
    std::cout<<hex_char [rand() % 16];
  }
  std::cout.flush();
  sleep(5);
  return 0;
}
