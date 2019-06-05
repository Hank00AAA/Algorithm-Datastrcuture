//
//  main.cpp
//  offer_6
//
//  Created by hhs on 2019/6/5.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

/*把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
*/

int minNumberInRotateArray(vector<int> rotateArray) {
    if(rotateArray.size()==0){
        return 0;
    }
    int left = 0, right = rotateArray.size()-1;
    int mid;
    while(true){
        mid = (left+right)/2;
        if(right - left ==1){
            return rotateArray[right];
        }
        if(rotateArray[mid]<rotateArray[left]){
            right = mid;
            continue;
        }else if(rotateArray[mid]>rotateArray[right]){
            left = mid;
            continue;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> test = {6,7,1,2,3,4,5};
    cout<<minNumberInRotateArray(test);
    return 0;
}
