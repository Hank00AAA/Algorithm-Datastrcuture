//
//  main.cpp
//  offer_5
//
//  Created by hhs on 2019/6/1.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<stack>
using namespace std;

stack<int> stack1; //入
stack<int> stack2; //出

void push(int node) {
    stack1.push(node);
}

int pop() {
    if(stack2.empty()){
        while(!stack1.empty()){
            int tmp = stack1.top();
            stack2.push(tmp);
            stack1.pop();
        }
    }
    int tmp = stack2.top();
    stack2.pop();
    return tmp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
