#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define STRMAX 8 

using namespace std;

string printFizzBuzz(int num) {
  string word;
	
  if (num % 3 == 0) {
    word = "fizz";
  }
  if (num % 5 == 0) {
    word += "buzz";
  } 
  if (word == "") {
    word = to_string(num); 
  } 

  return word;
}
