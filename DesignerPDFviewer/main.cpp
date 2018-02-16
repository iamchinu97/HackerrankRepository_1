#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num[26],height=0,len,k=0;
    for(int i=0;i<26;i++)
    {
        cin>>num[i];
    }
    char s[10];
    cin>>s;
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        for(char j='a';j<='z';j++)
        {
            if(s[i]==j)
            {
                if(height<=num[k])
                {
                height=num[k];
                }
            }
            k++;
        }
        k=0;
    }
    cout<<height*len;
    return 0;
}
