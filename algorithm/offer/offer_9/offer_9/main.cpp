//
//  main.cpp
//  offer_9
//
//  Created by hhs on 2019/6/7.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>

int rectCover(int number) {
    if(number==0){return 0;}
    if(number==1) {return 1;}
    if(number==2){return 2;}
    return rectCover(number-1)+rectCover(number-2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
