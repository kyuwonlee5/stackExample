#include <stack>
#include "stack.h"

// stack 생성자
Stack::Stack(){
  topIdx = -1; // top Index를 -1로 지정, stack이 공백상태일때는 -1
}

void Stack::push(int x){
  if(isFull) {
    error("stack full ERROR");
  }
  topIdx += 1; // +1칸씩 데이터 쌓기
  data[topIdx] = x;
}

int Stack::pop(){
  if(isEmpty){
    error("stack empty ERROR");
  }
  topIdx -= 1; // -1칸씩 데이터 삭제
  return data[topIdx];
}

int Stack::peek(){
  if(isEmpty){
    error("stack empty ERROR");
  }
  return data[topIdx];
}

bool Stack::isFull(){
  if(topIdx == MAX_STACK_SIZE) {
    return true;
  } else {
    return false;
  }
}

bool Stack::isEmpty(){
  if(topIdx == -1) {
    return true;
  } else {
    return false;
  }
}

int Stack::size(){
  return topIdx + 1;
}

void Stack::display(){
  cout << "현재 stack의 사이즈는" << topIdx << " 입니다." << endl;
}