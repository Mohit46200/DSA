#include <iostream> 
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
 void solution(vector<vector<int>>& maze,vector<string>& ans,
    int i,int j,string s){
        if(i==maze.size() || j==maze.size() || i<0 || j<0){
            return;
        }
        if(maze[i][j]==0){
            return;
        }
        if(i==maze.size()-1 && j==maze.size()-1){
            ans.push_back(s);
            return;
        }
        maze[i][j] = 0;            //important part
        s.push_back('D');
        solution(maze,ans,i+1,j,s);
        s.pop_back();
        s.push_back('L');
        solution(maze,ans,i,j-1,s);
        s.pop_back();
        s.push_back('R');
        solution(maze,ans,i,j+1,s);
        s.pop_back();
        s.push_back('U');
        solution(maze,ans,i-1,j,s);
        s.pop_back();
        maze[i][j] = 1;             //important part
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        string s;
        solution(maze,ans,0,0,s);
        return ans;
    }
int main() {
    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans =ratInMaze(maze);
    for(const auto& ans:ans){
        cout<<ans<<'\t';
    }
}