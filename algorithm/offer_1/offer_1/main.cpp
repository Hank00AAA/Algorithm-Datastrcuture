//
//  main.cpp
//  1
//
//  Created by hhs on 2019/5/30.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

bool Find(int target, vector<vector<int>> array){
    if(array.size()==0||array[0].size()==0)
        return false;
    int x = 0, y=array[0].size()-1;
    for(;x<array.size()&&y>=0;){
        if(target > array[x][y]){
            ++x;
            continue;
        }else if(target < array[x][y]){
            --y;
            continue;
        }else{
            return true;
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<vector<int>> test={{1,2,3},{4,5,6},{7,8,9}};
    cout<<Find(4,test)<<endl;
    
    return 0;
}
