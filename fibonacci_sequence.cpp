#include <iostream>
using namespace std;
int fibonacciNumGen(int num) {
  int firstNum = 0;
  int secondNum = 1;
  int nextNum;
  for (int i = 0; i < num; i++) {
    nextNum = firstNum + secondNum;
    // cout << nextNum << " \n";
    int oldFirstNum = firstNum;
    firstNum = secondNum;
    secondNum = oldFirstNum + secondNum;
  }
  return nextNum;
}
int main() {
  cout << "| FIBONACCI SEQUENCE GENERATOR |\n\n";
  cout << "Please enter the amount of times the sequence is ran: ";

  int input;
  cin >> input;
  if (input == 0) {
    cout << "Incorrect input...";
    return 0;
  } else {
    int answer = fibonacciNumGen(input);
    cout << answer;
  }

  return 0; 
}
