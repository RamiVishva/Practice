//Topic : 2D Array
//Link : https://leetcode.com/problems/word-search/description/

#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    bool check(vector<vector<char>> &board, string word, int i, int j, int n, int m,int k){
        if(k>=word.size()){
        return true;
        }
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]=='.' || word[k]!=board[i][j]){
            return false;
        }
        if(word.size()==1 && board[i][j]==word[k]){
            return true;
        }
        board[i][j]='.';
        bool temp = false;
        int x[4]={0,0,-1,1};
        int y[4]={-1,1,0,0};
        for(int index=0;index<4;index++){
            temp=temp || check(board,word,i+x[index],j+y[index],n,m,k+1);
        }
        board[i][j]=word[k];
        return temp;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        if(n==0){
            return false;
        }
        int m=board[0].size();
        if(word.size()==0){
            return false;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word[0]==board[i][j]){
                    if(check(board,word,i,j,n,m,0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

class Solution2 
{
public:
    bool searchNext(vector<vector<char>> &board, string word, int row, int col, 
    int index, int m, int n) 
    {
        // if index reaches at the end that means we have found the word
        if (index == word.length())
            return true;

        // Checking the boundaries if the character at which we are placed is not 
        //the required character
        if (row < 0 || col < 0 || row == m || col == n || board[row][col] != 
        word[index] or board[row][col] == '*')
            return false;

        // this is to prevent reusing of the same character again and again
        char c = board[row][col];
        board[row][col] = '*';

        // top direction
        bool top = searchNext(board, word, row - 1, col, index + 1, m, n);
       
        // right direction
        bool right = searchNext(board, word, row, col + 1, index + 1, m, n);
       
        // bottom direction
        bool bottom = searchNext(board, word, row + 1, col, index + 1, m, n);
        
        // left direction
        bool left = searchNext(board, word, row, col - 1, index + 1, m, n);

        board[row][col] = c; // undo change

        return top || right || bottom || left;
    }
    bool exist(vector<vector<char>> board, string word) 
    {

        int m = board.size();
        int n = board[0].size();

        int index = 0;

        // First search the first character
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++)
             {
                 if (board[i][j] == word[index]) 
                 {
                    if (searchNext(board, word, i, j, index, m, n))
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};