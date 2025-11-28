#include <iostream>
#include <cstring>

using namespace std;

int main() {
  cout << "Hello World\n";

  char buf[80];
  const char* input = "this is too long";
  strcpy(buf, input);
  
  return 0;
}

void oob() {
    int arr[3];
    arr[3] = 42; // array out of bounds
}

void uninit() {
    int x = 2;
    int y = x + 2; // uninitialized
}
