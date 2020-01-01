#ifndef Yushant
#define Yushant
using namespace std;
#define N 19
vector<char> Finals;
map<vector<int>,vector<int>> mp;
map<vector<int>,int> varstore;
map<vector<int>,int> statedone;
map<pair<char,char>,char> finalresult;
int globalvar=65;
char dead;
bool notpresent(vector<int> vec,int n);
void epsilon(char mat[N][N],vector<int> trans,int n);
void qnotclosure(char mat[N][N],int n);
void transition(char mat[N][N],vector<int> statemade,int n,char c);
bool checkpresence(map<vector<int>,int> state);
vector<int> check(map<vector<int>,int> state);
#endif
