//
//  main.cpp
//  offer_3
//
//  Created by hhs on 2019/5/30.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

struct ListNode{
    int val;
    struct ListNode* next;
    ListNode(int x): val(x), next(NULL){};
};

vector<int> printListFromTailToHead(ListNode* head){
    vector<int> result;
    if(head==NULL)
        return result;
    ListNode* tmp = head;
    while(tmp!=NULL){
        result.push_back(tmp->val);
        tmp=tmp->next;
    }
    int length = result.size();
    int point = 0;
    int change;
    reverse(result.begin(), result.end());
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=10;
    ListNode head = ListNode(n--);
    ListNode* tmp = &head;
    while(n>=0){
        tmp->next = new ListNode(n--);
        tmp = tmp->next;
    }
    vector<int> res = printListFromTailToHead(&head);
    for(vector<int>::iterator point=res.begin();point!=res.end();++point){
        cout<<*point<<" ";
    }
    return 0;
}
