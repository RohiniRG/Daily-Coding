#include <iostream>

using namespace std;

class DLL
{
    char data;
    DLL *next = NULL;
    DLL *prev = NULL;

    public:
        char returnData(DLL *head) {
            if (head)
                return head->data;
            return '0';
        }

        DLL* newnode(char val);
        DLL* insertEnd(DLL* head, char val);
        DLL* deletion(DLL* head, DLL* node);
        DLL* searchNode(DLL* , char);
};

DLL* DLL:: newnode(char val) {
    DLL* temp = new DLL;

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    
    return temp;
}


DLL* DLL::insertEnd(DLL* head, char val) {
    DLL* temp = newnode(val);
    DLL* curr = head;

    if (head==NULL){
        head = temp;
    }
    else {
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }
    return head;    
}


DLL* DLL :: deletion(DLL* head, DLL* node){
    if (head == NULL){
        cout<<"Empty"<<endl;
    }

    if (node==head){
        head = head->next;
        // head->prev = NULL;
        delete(node);
    }
    else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        delete(node);
    }
    return head;
}

DLL* DLL :: searchNode(DLL* head, char value){
    if (head == NULL) 
        return NULL;
    
    while(head->data!=value && head!=NULL) {
        head = head->next;
    }
    return head;
}

string firstNonRepeatedChars(string s){
    DLL D;
    DLL* head = NULL;
    int repeated[26] = {0};
    DLL* address[26] = {NULL};

    for(int i=0; i<s.length(); i++){

        int index = int(s[i]) - 97;

        if (repeated[index] == 1) {
            char val = D.returnData(head);

            if (val!='0') {
                s[i] = val;
            }
            else s[i] = '#';

            continue;
        }
        else if(address[index] != NULL){
            repeated[index] = 1;
            head = D.deletion(head, address[index]);
        }
        else{
            head = D.insertEnd(head, s[i]);
            address[index] = D.searchNode(head, s[i]);
        }

        char val = D.returnData(head);
        if (val!='0') {
            s[i] = val;
        }
        else s[i] = '#';
    }
    return s;
}


int main() {
    cout<<"Answer: "<<firstNonRepeatedChars("pqimpqysf")<<endl;
    return 0;
}