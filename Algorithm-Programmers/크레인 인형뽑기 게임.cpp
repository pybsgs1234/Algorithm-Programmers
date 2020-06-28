#include <iostream>
#include <string>
#include <vector>
using namespace std;
int solution(vector<vector<int>> board, vector<int> moves);

int main() {


	return 0;
}

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	vector<int> basket;

	for (vector<int>::iterator iter = moves.begin(); iter != moves.end(); iter++) {
		for (int i = 0; i < board.size(); i++) {
			if (board[i][*iter - 1] != 0) {
				basket.push_back(board[i][*iter - 1]);
				board[i][*iter - 1] = 0;
				break;
			}
		}
		if (basket.size() < 2) {
			return;
		}
		else if (basket[basket.size() - 1] == basket[basket.size() - 2]) {
			basket.pop_back();
			basket.pop_back();
			answer = answer + 2;
		}
	}

	return answer;
}
