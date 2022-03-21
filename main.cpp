/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
struct AmritHash
{
    int BUCKET;
    list<int> *table;
    
    AmritHash(int n)
    {
        BUCKET=n;
        table = new list<int>[BUCKET];
    }
    void insert(int s)
    {
        int i=s%BUCKET;
        table[i].push_back(s);
    }
    void Remove(int m)
    {
        int j=m%BUCKET;
        
                table[j].remove(m);
    
    }
    bool search(int k)
    {
        int i=k%BUCKET;
        for(auto x : table[i])
        {
            if(x==k)
            {
                return true;
            }
        }
        return false;
    }
    
};

int main()
{
    AmritHash obj(7);
    obj.insert(23);
    obj.insert(45);
    obj.insert(46);
    cout<<obj.search(45)<<endl;
    cout<<obj.search(5)<<endl;
    cout<<obj.search(23)<<endl;
    
    obj.Remove(45);
    cout<<obj.search(45)<<endl;
    

    return 0;
}
