// 反轉數字時加上一個數字再做溢位判斷，因為已經超過了編譯器會出錯
// 有些解法會在加上數字前跟 INT_MAX/10 做比較
// 但個人認為差距在10以內會查不出來
// 所以本題解法為使用 long int

#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long ans = 0;
        do
        {
            ans = ans * 10 + x % 10;
            x /= 10;
        } while (x != 0);                                    //非 0 (NULL) 為真、0 (NULL) 為偽
        return ans > INT32_MAX || ans < INT32_MIN ? 0 : ans; //integer overflows
    }
};

int main()
{
    Solution s;
    cout << s.reverse(-145223) << endl;
    cout << s.reverse(1534236469) << endl;
    cout << s.reverse(-2147483648) << endl;
    return 0;
}