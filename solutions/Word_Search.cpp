/*Given an m x n grid of characters board and a string word, return true if word exists in the grid.
The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.*/

// Solution :- 

class Solution {
private:
    bool dfs(std::vector<std::vector<char>>& board, const std::string& word, int r, int c, int index) {
        // Base Case: All characters in word matched successfully
        if (index == word.length()) {
            return true;
        }

        int rows = board.size();
        int cols = board[0].size();

        // Boundary checks and character matching
        if (r < 0 || r >= rows || c < 0 || c >= cols || board[r][c] != word[index]) {
            return false;
        }

        // Save current character and mark cell as visited
        char temp = board[r][c];
        board[r][c] = '#';

        // Explore all 4 possible directions (Up, Down, Left, Right)
        bool found = dfs(board, word, r + 1, c, index + 1) ||
                     dfs(board, word, r - 1, c, index + 1) ||
                     dfs(board, word, r, c + 1, index + 1) ||
                     dfs(board, word, r, c - 1, index + 1);

        // Backtrack: Restore original character
        board[r][c] = temp;

        return found;
    }

public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (board[r][c] == word[0] && dfs(board, word, r, c, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};
