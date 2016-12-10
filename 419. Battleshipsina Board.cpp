class Solution {
public:
	int count = 0;
	int countBattleships(vector<vector<char>>& board) {

		for (int i1 = 0; i1 < board.size(); i1++) {
			for (int i2 = 0; i2 < board[i1].size(); i2++) {
				if ((i2 == 0 || board[i1][i2 - 1] != 'X') && (i1 == 0 || board[i1 - 1][i2] != 'X') &&
					board[i1][i2] == 'X')
					count++;
			}
		}
		return count;
	}
};
