//
//  main.cpp
//  offer_7
//
//  Created by hhs on 2019/6/6.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

int Fibonacci(int n) {
    vector<int> fi = {0,1,1};
    if(n==0){
        return 0;
    }else if(n<=2){return 1;}
    int tmp;
    for(int i=2;i<n;++i){
        tmp = fi[1]+fi[2];
        fi[0] = fi[1];
        fi[1] = fi[2];
        fi[2] = tmp;
    }
    return fi[2];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<Fibonacci(6)<<endl;
    return 0;
}
