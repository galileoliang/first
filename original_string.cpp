#include <iostream>

using namespace std;

int main()
{
    // 將"字串"看成"字元陣列"
    /*
    char name[5];
    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'h';
    name[3] = 'n';
    //name[4] = '\0';    // '\0' 就是  0
    name[4] = 0;
   */
  char name[5] = "John";    // 編譯器可以接受
   cout << name[0] << endl;
   cout << name[1] << endl;
   cout << name[2] << endl;
   cout << name[3] << endl;
   cout << name[4] << endl;
   cout << name[0] << name[1] << name[2] << name[3] << endl;
   cout << name << endl;
   cout << "-------------------------------\n";
   name[0] = 'j';
   cout << name << endl;
   cout << "-------------------------------\n";
   //name = "mary";
   cout << "+++++++++++++++++++++++++\n\n";
   name[0] = 'T';
   name[1] = 'i';
   name[2] = 'f';
   name[3] = 'f';
   name[4] = 'a';
   name[5] = 'n';
   name[6] = 'y';
   name[7] = '0';
   cout << name << endl;
    return 0;
}
