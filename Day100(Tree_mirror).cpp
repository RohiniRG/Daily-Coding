/*
Given a Two Binary Trees, write a function that returns true if one is mirror of other, else returns false.
*/
// **********************************************************************************************************

int areMirror(Node* a, Node* b) {

        vector <int> v1;
        stack <Node*> stk;
        
        stk.push(a);
        while (!stk.empty()){
            Node* t = stk.top();
            stk.pop();
            v1.push_back(t->data);
            
            if (t->right){
                stk.push(t->right);
            }
            if (t->left){
                stk.push(t->left);
            }
        }
        
        vector <int> v2;
        
        stk.push(b);
        while (!stk.empty()){
            Node* v = stk.top();
            stk.pop();
            v2.push_back(v->data);
            
            if (v->left){
                stk.push(v->left);
            }
            
            if (v->right){
                stk.push(v->right);
            }
        }
        
        if (v1 == v2) return 1;
        else return 0;
    }

