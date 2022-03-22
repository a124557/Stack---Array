#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Stack{
public:
vector <string> stack;

void peek() {
  if(!stack.empty()) {
      cout << stack[stack.size()-1] << endl;
  } 
}

void push(string value) {
  stack.push_back(value);
}

void pop() {
  if(!stack.empty()) {
    stack.pop_back();
  }
}



};

int main() {
  Stack obj;
  obj.push("testing");
  obj.push("new value");
  obj.peek();
  obj.push("udemy");
  obj.push("apple");
  obj.pop();
  obj.pop();
  obj.pop();
  obj.pop();
  obj.pop();
  obj.pop();
  obj.push("new value 1");
  obj.peek();
  return 0;
}