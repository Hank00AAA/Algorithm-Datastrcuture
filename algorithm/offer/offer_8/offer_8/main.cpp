//
//  main.cpp
//  offer_8
//
//  Created by hhs on 2019/6/6.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

/*一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/

int jumpFloorII(int n) {
    if(n==0){
        return 0;
    }else if(n==1){return 1;}
    return 2*jumpFloorII(n-1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<jumpFloorII(3);
    return 0;
}
