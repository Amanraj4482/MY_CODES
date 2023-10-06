// RAT IN A MAZE PROBLEM
// 0-> rasta is blocked
// 1->rasta open hai
// find all solution to reach destination
// rat has only move by 4 type up down left right
//  faltu solutions ni nikalenege
// jo dabba already visit ho chuka h usko visit ni krna h
// 2d array of boolean type -> visited marked on shell moved

// constrains
// safe condition is when ->
// 1-> index is inside array
// 2->that box should be of 1
//  3->that box should not be visited previously

// when visiting the box mark it true and again returing to it mark it false is called backtracing
// D=(i+1,j)
// R=(i,j+1)
// L=(i,j-1)
// U=(i-1,j)

#include <iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][4],
 vector<vector<bool> > &visited) {
  if( ((i>=0 && i < row) && (j >= 0 && j< col)) &&
      (arr[i][j] == 1 ) &&
      (visited[i][j]==false)) {
    return true;
  }
  else {
    return false;
  }
}

void solveMaze(int arr[][4], int row,int col, int i, int j,
vector<vector<bool> > &visited, vector<string>& path, string output  ) {

  //base case
  if(i == row-1 && j == col-1) {
    //answer found
    path.push_back(output);
    return;
  } 

  //Down -> i+1, j
  if(isSafe(i+1, j, row, col, arr, visited)) {
    visited[i+1][j] = true;
    solveMaze(arr, row, col, i+1, j, visited, path, output + 'D');
    //backtrack 
    visited[i+1][j] = false;
  }

  //Left -> i, j-1
  if(isSafe(i, j-1, row, col, arr, visited)) {
    visited[i][j-1] = true;
    solveMaze(arr, row, col, i, j-1, visited, path, output + 'L');
    //backtrack 
    visited[i][j-1] = false;
  }

  //Right -> i, j+1
  if(isSafe(i, j+1, row, col, arr, visited)) {
    visited[i][j+1] = true;
    solveMaze(arr, row, col, i, j+1, visited, path, output + 'R');
    //backtrack 
    visited[i][j+1] = false;
  }

  //Up-> i-1, j
if(isSafe(i-1, j, row, col, arr, visited)) {
    visited[i-1][j] = true;
    solveMaze(arr, row, col, i-1, j, visited, path, output + 'U');
    //backtrack 
    visited[i-1][j] = false;
  }


}

int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  int maze[4][4] = { {1,0,0,0}, 
                 {1,1,0, 1},
                 {1,1,0,0},
                 {0,1,1,1}};

  if(maze[0][0] == 0) {
    cout << "No Path Exists " << endl;
    return 0;
  }

  int row = 4;
  int col = 4;

  vector<vector<bool> > visited(row, vector<bool>(col,false));
  //src ki value k true mark kredete h 
  visited[0][0] = true;

  vector<string> path;
  string output = "";

  solveMaze(maze,row,col, 0,0, visited, path, output);

  cout << "printing the results:-> " << endl;
  for(auto i: path) {
    cout << i << " ";
  }
  cout << endl;
  if(path.size() == 0 ){
    cout << "No Path Exists " << endl;
  }

  
  return 0;
}
