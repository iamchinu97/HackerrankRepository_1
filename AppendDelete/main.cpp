#include <iostream>
using namespace std;

int main()
{
    string word1,word2;
    int len1,len2,k,i=0,flag=0,total;
    cin>>word1;
    cin>>word2;
    cin>>k;
    len1=word1.length();
    len2=word2.length();
    while(word1[i]!='\0' || word2[i]!='\0')
    {
        if(word1[i]==word2[i])
        {
            flag++;
        }
        else
        {
            break;
        }
        i++;
    }
    total=((len1-flag)+(len2-flag));
    if((k-total)==0)
        cout<<"Yes";
    else if((k-total)<0)
        cout<<"No";
    else
    {
        if((k-total)%2==0)
            cout<<"Yes";
        else
        {
            if((k-total)>=2*flag)
                cout<<"Yes";
            else
                cout<<"No";
        }
    }
    return 0;
}
