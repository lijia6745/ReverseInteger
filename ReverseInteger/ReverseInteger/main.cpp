//
//  main.cpp
//  ReverseInteger
//
//  Created by 李佳 on 16/2/3.
//  Copyright © 2016年 LiJia. All rights reserved.
//

#include <iostream>


class Solution {
public:
    int reverse(int x)
    {
        long result = 0;
        int  isNegative = (x < 0) ? -1 : 1;
        x = abs(x);
        while (x) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        int resultTmp = (int)result;
        
        return (resultTmp == result) ? resultTmp * isNegative : 0;
    }
};


int main(int argc, const char * argv[])
{
    Solution sol;
    std::cout << sol.reverse(1000000002) << std::endl;
    return 0;
}
