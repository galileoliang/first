#include <iostream>

using namespace std;


int main(int argc, char* argv[])    // argc ---> argrumnet count, argv ---> argrument vector
{

    /*
    cout << "Input two number:\n" ;
    int a, b;
    cout << "First:" ;
    cin >> a;
     cout << "Second:" ;
    cin >> b;
    cout << "You have input " << a << " and " << b << " sum is " << a + b << endl;
   */
   if (argc != 3){
      cout << "使用本程式,你必須傳入2個整數" << endl;
      exit(1);
   }
    int a, b;
    a = atoi(argv[1]);   // atoi ----> 將字串轉成int
    b = atoi(argv[2]);
    cout << "You have input " << a << " and " << b << " in command, Their sum is " << a + b << endl;
    return 0;
}
