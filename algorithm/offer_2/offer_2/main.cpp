//
//  main.cpp
//  offer_2
//
//  Created by hhs on 2019/5/30.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

void replaceSpace(char *&str,int length) {
    int space_num = 0;
    for(int i=0;i<length;++i){
        if(str[i]==' '){
            space_num+=1;
        }
    }
    int n_length = length + 2*space_num;
    char* n_str = new char[n_length+1];
    n_str[n_length] = 0;
    int point = 0;
    for(int i=0;i<length;++i){
        if(str[i]==' '){
            n_str[point++]='%';
            n_str[point++]='2';
            n_str[point++]='0';
        }else{
            n_str[point++]=str[i];
        }
    }
    str = n_str;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char* str = "We Are Happy.";
    cout<<str<<endl;
    replaceSpace(str, 13);
    cout<<str<<endl;
    
    return 0;
}
