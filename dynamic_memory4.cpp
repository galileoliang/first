#include <iostream>

using namespace std;

int main(int argc, char* argv[], char* env[])  // 這個版本的 main 函式包含了環境變數 (env)
{
    // 如果你的程式需要使用作業系統的環境變數，可以從 env 陣列中取得它們
    cout << "環境變數列印如下：" << endl;

    // 使用迴圈遍歷 env 陣列，列出所有的環境變數
    for (int i = 0; env[i] != nullptr; i++) {
        cout << env[i] << endl;  // 每個環境變數都以 "KEY=VALUE" 的形式顯示
    }

    return 0;
}
