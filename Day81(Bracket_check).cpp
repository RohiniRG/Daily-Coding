# include <bits/stdc++.h>

using namespace std;

bool ispar(string x)
    {
        stack <char> stk;
        char topp;
        for (int p = 0; p < x.length(); p++)
        {
            if (x[p] == '{' || x[p] == '(' || x[p] == '[')
            {
                stk.push(x[p]);
            }

            if (stk.empty()) 
            {
                return false;
            }
            else
            {
                switch(x[p])
                {
                    
                    case ')':
                        topp = stk.top();
                        stk.pop();
                        if (topp == '{' || topp == '[')
                        {
                            return 0;
                        }
                        break;

                    case '}':
                        topp = stk.top();
                        stk.pop();
                        if (topp == '(' || topp == '[')
                        {
                            return 0;
                        }
                        break;

                    case ']':
                        topp = stk.top();
                        stk.pop();
                        if (topp == '(' || topp == '{')
                        {
                            return 0;
                        }
                        break;
                }
            }
        }
        return stk.empty();
    }

int main()
{
    bool val = ispar("([]");
    cout<<val<<endl;
    return 0;
}

