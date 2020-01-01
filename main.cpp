#include <bits/stdc++.h>
#include "declarations_.h"
using namespace std;
int main()
{
    cout<<"****************************NFA TO DFA CONVERSION****************************\n\n";
    //(a+b)
    /*char mat[N][N]{
    {'0','e','0','e','0','0'},
    {'0','0','a','0','0','0'},
    {'0','0','0','0','0','e'},
    {'0','0','0','0','b','0'},
    {'0','0','0','0','0','e'},
    {'0','0','0','0','0','0'}
    }*/
    //(a+b)*
/*
    char mat[N][N]={
    {'0','e','0','0','0','0','0','e'},
    {'0','0','e','0','e','0','0','0'},
    {'0','0','0','a','0','0','0','0'},
    {'0','0','0','0','0','0','e','0'},
    {'0','0','0','0','0','b','0','0'},
    {'0','0','0','0','0','0','e','0'},
    {'0','e','0','0','0','0','0','e'},
    {'0','0','0','0','0','0','0','0'}
    };
*/
    //(a+bb)*
/*
    char mat[N][N]={
    {'0','e','0','0','0','0','0','0','e'},
    {'0','0','e','0','e','0','0','0','0'},
    {'0','0','0','a','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','e','0'},
    {'0','0','0','0','0','b','0','0','0'},
    {'0','0','0','0','0','0','b','0','0'},
    {'0','0','0','0','0','0','0','e','0'},
    {'0','e','0','0','0','0','0','0','e'},
    {'0','0','0','0','0','0','0','0','0'}
    };
*/

    //(a+b)*abb
    /*
    char mat[N][N]={
    {'0','e','0','0','0','0','0','e','0','0','0'},
    {'0','0','e','0','e','0','0','0','0','0','0'},
    {'0','0','0','a','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','e','0','0','0','0'},
    {'0','0','0','0','0','b','0','0','0','0','0'},
    {'0','0','0','0','0','0','e','0','0','0','0'},
    {'0','e','0','0','0','0','0','e','0','0','0'},
    {'0','0','0','0','0','0','0','0','a','0','0'},
    {'0','0','0','0','0','0','0','0','0','b','0'},
    {'0','0','0','0','0','0','0','0','0','0','b'},
    {'0','0','0','0','0','0','0','0','0','0','0'}
    };*/

    //(aaa+bb)*
/*
    char mat[N][N]={
    {'0','e','0','0','0','0','0','0','0','0','e'},
    {'0','0','e','0','0','0','e','0','0','0','0'},
    {'0','0','0','a','0','0','0','0','0','0','0'},
    {'0','0','0','0','a','0','0','0','0','0','0'},
    {'0','0','0','0','0','a','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','e','0'},
    {'0','0','0','0','0','0','0','b','0','0','0'},
    {'0','0','0','0','0','0','0','0','b','0','0'},
    {'0','0','0','0','0','0','0','0','0','e','0'},
    {'0','e','0','0','0','0','0','0','0','0','e'},
    {'0','0','0','0','0','0','0','0','0','0','0'}
    };
*/

    //(a+bb)*abb
    /*char mat[N][N]={
    {'0','e','0','0','0','0','0','0','e','0','0','0'},
    {'0','0','e','0','e','0','0','0','0','0','0','0'},
    {'0','0','0','a','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','e','0','0','0','0'},
    {'0','0','0','0','0','b','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','b','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','e','0','0','0','0'},
    {'0','e','0','0','0','0','0','0','e','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','a','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','a','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','b'},
    {'0','0','0','0','0','0','0','0','0','0','0','0'},
    };*/

    //a*ba*bb
  /*  char mat[N][N]={
    {'0','e','0','e','0','0','0','0','0','0'},
    {'0','0','a','0','0','0','0','0','0','0'},
    {'0','e','0','e','0','0','0','0','0','0'},
    {'0','0','0','0','b','0','0','0','0','0'},
    {'0','0','0','0','0','e','0','e','0','0'},
    {'0','0','0','0','0','0','a','0','0','0'},
    {'0','0','0','0','0','e','0','e','0','0'},
    {'0','0','0','0','0','0','0','0','b','0'},
    {'0','e','0','e','0','0','0','0','0','b'},
    {'0','0','0','0','0','0','0','0','0','0'}
    };
*/
    //(a+b)*abb(a+b)*b

    char mat[N][N]={
    {'0','e','0','0','0','0','0','e','0','0','0','0','0','0','0','0','0','0','0'},
    {'0','0','e','0','e','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','a','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','e','0','0','0','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','b','0','0','0','0','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','e','0','0','0','0','0','0','0','0','0','0','0','0'},
    {'0','e','0','0','0','0','0','e','0','0','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','a','0','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','b','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','b','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','e','0','0','0','0','0','e','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','0','e','0','e','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','0','0','a','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','e','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','b','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','e','0','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','e','0','0','0','0','0','e','0'},
    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','b'},
    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'}
    };
    /*int n;cin>>n;
    qnotclosure(mat,N);
    /*for(map<vector<int>,int>::iterator it=statedone.begin();it!=statedone.end();it++){
        vec=it->first;
        for(auto k:vec){cout<<k<<" ";}cout<<endl;
    }
    transition(mat,vec,8,'a');
    transition(mat,vec,8,'b');cout<<"start"<<endl;
    for(map<vector<int>,int>::iterator it=statedone.begin();it!=statedone.end();it++){
        vec=it->first;cout<<it->second<<endl;
        for(auto k:vec){cout<<k<<" ";}cout<<endl;
    }*/
    qnotclosure(mat,N);
    while(checkpresence(statedone)){
        vector<int> vec=check(statedone);
        transition(mat,vec,N,'a');
        transition(mat,vec,N,'b');
    }
    /*for(map<vector<int>,int>::iterator it=statedone.begin();it!=statedone.end();it++){
        vector<int> vec=it->first;cout<<it->second<<endl;
        for(auto k:vec){cout<<k<<" ";}cout<<endl<<endl;
    }*/
    cout<<"State\ta\tb\n\n";
    for(map<pair<char,char>,char>::iterator it=finalresult.begin();it!=finalresult.end();it++){
        pair<char,char> p=it->first;
        char c=it->second;it++;
        char c1=it->second;
        if(c1=='~'){continue;}
        if(find(Finals.begin(),Finals.end(),p.first)!=Finals.end()){
            if(c=='~'){cout<<p.first<<"(FS)\t"<<"NULL"<<"\t"<<c1<<endl;}
            else{cout<<p.first<<"(FS)\t"<<c<<"\t"<<c1<<endl;}
        }
        else{
            if(c=='~'){cout<<p.first<<"\t"<<"NULL"<<"\t"<<c1<<endl;}
            else{cout<<p.first<<"\t"<<c<<"\t"<<c1<<endl;}
        }
    }
    cout<<"\n\nFS=Final State\nNULL=Dead State\n\n";
    //if(dead!='\0'){cout<<"\n\n"<<dead<<" IS THE DEAD STATE\n";}
    /*if(Finals.size()==1){cout<<"\nFinal state is\n"<<Finals[0];}
    else{
        cout<<"\nFinal states are\n";
        for(auto k:Finals){
            cout<<k<<" ";
        }cout<<endl;
    }*/

    /*for(map<vector<int>,int>::iterator it=statedone.begin();it!=statedone.end();it++){
        vector<int> vee=it->first;
        for(auto k:vee){cout<<k<<" ";}cout<<endl;
    }*/
    return 0;
}

bool notpresent(vector<int> vec,int n){
    return find(vec.begin(),vec.end(),n)==vec.end();
}

void epsilon(char mat[N][N],vector<int> trans,int n){
    vector<int> pushepsilon;
    if(trans.size()==1&&trans[0]==-1){
        pushepsilon.push_back(-1);
        mp[trans]=pushepsilon;
        statedone[pushepsilon]=1;
        varstore[pushepsilon]=126;
        char cc=static_cast<char>(126);
        dead=cc;
        finalresult[{cc,'a'}]=cc;
        finalresult[{cc,'b'}]=cc;
        return;
    }
    for(int i=0;i<trans.size();i++){
        pushepsilon.push_back(trans[i]);
    }
    for(int i=0;i<pushepsilon.size();i++){
        int el=pushepsilon[i];
        for(int j=0;j<n;j++){
            if(mat[el][j]=='e'&&notpresent(pushepsilon,j)){
                pushepsilon.push_back(j);
            }
        }
    }
    //for(auto k:pushepsilon){cout<<k<<" ";}cout<<endl;
    mp[trans]=pushepsilon;
    statedone[pushepsilon]=0;
    if(find(pushepsilon.begin(),pushepsilon.end(),N-1)!=pushepsilon.end()){
            //cout<<"yes";
        Finals.push_back(static_cast<char>(globalvar));
    }
    varstore[pushepsilon]=globalvar++;
}


void qnotclosure(char mat[N][N],int n){
    vector<int> pushepsilon;
    pushepsilon.push_back(0);
    for(int i=0;i<pushepsilon.size();i++){
        int el=pushepsilon[i];
        for(int j=0;j<n;j++){
            if(mat[el][j]=='e'&&notpresent(pushepsilon,j)){
                pushepsilon.push_back(j);
            }
        }
    }
    if(find(pushepsilon.begin(),pushepsilon.end(),N-1)!=pushepsilon.end()){
            //cout<<"yes";
        Finals.push_back(static_cast<char>(globalvar));
    }
    varstore[pushepsilon]=globalvar++;
    statedone[pushepsilon]=0;
}


void transition(char mat[N][N],vector<int> statemade,int n,char c){
    vector<int> newtrans;
    for(int it=0;it<statemade.size();it++){
        int itt=statemade[it];
        for(int i=0;i<n;i++){
            if(mat[itt][i]==c){
                //cout<<"index\n";
                  //  cout<<it<<"\t"<<i<<endl;
                newtrans.push_back(i);
            }
        }
    }
    //cout<<"current state\n";
    //for(auto k:statemade){cout<<k<<" ";}cout<<endl;
    //cout<<"newtrans for "<<c<<endl;
    //for(auto k:newtrans){cout<<k<<" ";}cout<<endl;
    if(newtrans.size()==0){
        newtrans.push_back(-1);
    }

    if(mp.find(newtrans)==mp.end()){epsilon(mat,newtrans,n);}
    map<vector<int>,vector<int>>::iterator it=mp.find(newtrans);
    vector<int> findchar=it->second;

    int ch=varstore[findchar];
    char ch2=static_cast<char>(ch);

    int statemadeindex=varstore[statemade];
    char statemadechar=static_cast<char>(statemadeindex);
    finalresult[{statemadechar,c}]=ch2;
    if(c=='b'){statedone[statemade]=1;}
}

bool checkpresence(map<vector<int>,int> state){
    for(map<vector<int>,int>::iterator it=state.begin();it!=state.end();it++){
        if(it->second==0){
            return true;
        }
    }return false;
}

vector<int> check(map<vector<int>,int> state){
    for(map<vector<int>,int>::iterator it=state.begin();it!=state.end();it++){
        if(it->second==0){
            return it->first;
        }
    }
}
