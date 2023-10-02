```c++
#include <iostream>
using namespace std;

int main(){
  cout << "Hi guys~ :D"; << endl;
  cout << "Thank you for visiting my github~!! :D" << endl;
}
```

# 23.10.02📆 대체공휴일 수업대체

### what is "stack"..?

LIFO(Last In First Out) 의 자료구조...

쉽게말해, 가장 최근에 들어온 데이터가 가장 먼저 나간다는 뜻

stack 를 사용하는 가장 큰 이유중 하나입니다.

STL(Standard Template Library)에 정의되어있어 전처리함수처럼 include하여 사용하면 됩니다.😄

### why "stack"..?

몇가지 특징이 있어서 사용합니다.
* 인터럽트처리, 수식의 계산, 서브루틴의 복귀 번지 저장 등에 쓰임
* 그래프의 깊이 우선 탐색(DFS)에서 사용
* 재귀적(Recursion) 함수를 호출 할 때 사용

### How to declare "stack"

```c++

#include <stack>
using namespace std;

stack<int> s; // int형 선언
stack<char> s; // char형 선언
```


