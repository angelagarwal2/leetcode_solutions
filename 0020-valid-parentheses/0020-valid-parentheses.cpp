class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
    for(char i:str)
    {
        if(i=='('||i=='{'||i=='[')
        s.push(i);
        else if(i==')'||i=='}'||i==']')
        {
            if(s.empty())
            return false;
            char top=s.top();
            if(top!='('&&i==')'||top!='{'&&i=='}'||top!='['&&i==']')
            return false;
            s.pop();
        }
    }
    return s.empty();
    }
};