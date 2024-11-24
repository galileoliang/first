#include <iostream>

using namespace std;

// 在有了 "字串是字元指標" 的基礎知識下來看main的第二個參數
int main(int a, char* b[])  // 如果你對main傳入第二個參數,它的型態必須是: 字串陣列 ===> 字串必須以"字元指標"的形式出現
                                       // 所以 char* b[]  可以看成  char* b 與  b[] 的結合體,就是 字串陣列的意思
                                       // 如果你傳入這個參數,這個參數便代表命令列的各個字串
{
    cout << "hello\n";
    cout << b[0];        // 命令列的第一個字串
    cout << endl;
    cout << b[1];        // 命令列的第二個字串
     cout << endl;
    cout << b[2];        // 命令列的第三個字串
    return 0;
}
