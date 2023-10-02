#include "stack.h"
using namespace std;

int main(){
  Stack st;
  st.push(1); // 1
  st.push(2); // 1 2 
  st.push(3); // 1 2 3
  st.display();

  st.pop();
  st.display();
}