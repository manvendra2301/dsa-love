class Solution
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }
    // lowercase karne ka functon
    char Tolowercase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    // palindrome check karne ka function

    bool checkpalindrome(string a)
    {
        int start = 0;
        int end = a.length() - 1;
        while (start <= end)
        {
            if (a[start] != a[end])
            {
                return 0;
            }
            else
            {
                start++;
                end--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {

        // faltu character hatao
        string temp = "";
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        // lowercase mai kar do

        for (int j = 0; j < s.length(); j++)
        {
            temp[j] = Tolowercase(temp[j]);
        }

        return checkpalindrome(temp);
    }
};