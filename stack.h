#include <iostream>
using namespace std;

inline void error(char *str){
  cout << str << "\n";
  exit(1);
}

const int MAX_STACK_SIZE = 20; // 스택의 최대크기

class Stack{
  private:
    int topIdx; // top index
    int data[MAX_STACK_SIZE];

  public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();
    int size();
    void display();
};