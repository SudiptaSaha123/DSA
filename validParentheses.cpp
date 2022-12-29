// Problem Link : https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104

bool isValidParenthesis(string expression)
{
    stack<char>s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];
        
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }else{
            if(!s.empty()){
                char top = s.top();
                if((top == '(' && ch == ')')
                  ||(top == '{' && ch == '}')
                  ||(top == '[' && ch == ']')){
                    s.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}