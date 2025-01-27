class Solution {
public:
    char fun(int n)
    {
        string word="a";
        while(word.length()<n)
        {
            string rev="";
            for(int i=0;i<word.length();i++)
            {
                int temp=word[i];
                char s=temp+1;
                rev+=s;
            }
            word.append(rev);
        }
        return word[n-1];

    }
    char kthCharacter(int k) {
        char res= fun(k); 
        return res;
    }
};