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
        long long sum = 0;
        while (x) {
            sum = sum * 10 + x % 10;
            x /= 10;
        }
        return (sum == (int)sum) ? (int)sum : 0;
    }
};


int main(int argc, const char * argv[])
{
    Solution sol;
    std::cout << sol.reverse(-1000000002) << std::endl;
    return 0;
}
