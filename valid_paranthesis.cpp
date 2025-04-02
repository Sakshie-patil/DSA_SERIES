 bool isValid(string str) {
        stack<char>s;
        int n =str.size();
        for(int i=0;i<n;i++) {

            // opening bracket
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            s.push(str[i]);
                }
            // closing bracket
            else  {
                // if closing bracket is coming when there is no opening bracket present in stack i.e when stack is empty => invalid
                if(s.size() == 0) {
                    return false;
                }
                // if matching then 
                if((s.top() == '(' && str[i] == ')') ||
                    (s.top() == '{' && str[i] == '}') ||
                    (s.top() == '[' && str[i] == ']')) {
                        s.pop();
                    }
                    // if not matching then false => invalid
                    else {
                        return false;
                    }
             }
        }

        return s.size() == 0;
    }
