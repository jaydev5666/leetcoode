class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char ch : s)
        {
            // If opening bracket, push to stack
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                // If stack is empty, no opening bracket to match
                if (st.empty())
                    return false;

                char top = st.top();
                st.pop();

                // Check matching brackets
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '['))
                {
                    return false;
                }
            }
        }

        // Stack should be empty at the end
        return st.empty();
    }
};
