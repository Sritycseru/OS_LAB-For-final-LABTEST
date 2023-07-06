#include<bits/stdc++.h>
using namespace std;
void gantchart(string str)
{
    vector<int>v;
    v.push_back(0);
    string res;
    int i,j,cnt=1;
    res='|';
    for(i=1; i<=str.size(); i++)
    {
        if(str[i]==str[i-1])
        {
            cnt++;
        }
        else
        {
            for(j=0; j<cnt/2; j++)
                res+=' ';
            res+='p';
            res+=(str[i-1]);
            for(j=0; j<cnt/2; j++)
                res+=' ';
            res+='|';
            v.push_back(v[v.size()-1]+cnt);
            cnt=1;
        }
        
    }
    for(i=0;i<res.size();i++)
        cout <<'-';
    cout << endl;
    cout<<res<<endl;
    for(i=0;i<res.size();i++)
        cout <<'-';
    cout << endl;
    int temp =0;
    for(i=0;i<res.size();i++){
        if(res[i]=='|'){
            cout << v[temp];
            temp++;
            i++;
        }
        else
            cout <<' ';

            
    }
}


int main()
{
    freopen("lab1.txt","r",stdin);
    int n,i;
    cin>>n;
    string str;
    int temp;
    int burst_time[100],turn_time[100];
    for(i=0; i<n; i++)
    {
        cin>>burst_time[i];
        temp=burst_time[i];
        while(temp--)
        {
            str+=(i+'1');
        }
    }

    // cout<<str<<endl;
    gantchart(str);

}
