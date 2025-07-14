#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void inputList(struct node* head){
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp != NULL){
        cin >> temp->data;
        temp = temp->next;
    }
}

void solve(struct node* head){
    vector<int> v;
    struct node* temp = head;
    while(temp != NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    double ans = 0; 
    int power = 0;
    for(int i=v.size()-1; i>=0; i--){
        ans += pow(2, power) * v[i];
        power++;
    }
    cout << ans;
}

int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    head->next = second;
    second->next = third;
    third->next = NULL;

    inputList(head);

    solve(head);

    return 0;
}