
#include <iostream>
#include <vector>
using namespace std;

// RPLB
int main() {
	int T; // Number of cases
	int N; // Number of bushes	// 1<= N <= 1000
	int K; // Maximum number of blueberries Teresa will pick	// 1<= K <= 1000
	cin >> T;
	int temp;
	int* blueberry_nums;
	int* max_blueberries;
	int bush_size[1][1];
	//vector<int> answer_vector;
	//vector<int>::iterator iter_answer;

	for (size_t cases = 1; cases <= T; cases++) {
		// Obtains input for N and K
		cin.ignore();
		cin >> N >> K;
		bush_size[N+1][N]; // [column][row]
		
		// Takes user input of blueberry values and stores in an array
		for (int j = 0; j < N; j++) {
			cin >> blueberry_nums[j];
		}

		// Processes the data
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N + 1; k++) {
				if (k == 0) {
					bush_size[0][j] = 0;
				}
				bush_size[k][j] = blueberry_nums[j];
			}

		}
		//// Creates a new vector
		//vector <int> bush_vector;
		//vector<int>::iterator i;

		//// Obtains the number of berries per bush
		//string input;
		//getline(cin, input);
		//istringstream bush_input(input);
		//for (size_t i = 0; i < N; i++) {
		//	bush_input >> temp;
		//	bush_vector.push_back(temp);
		//}
		//i = bush_vector.begin(); // Iterates through the vectors starting at the beginning
		//int answer_temp_1 = 0;
		//int answer_temp_2 = 0;
		//int current_optimal = 0;
		//vector<int>::iterator iter_temp = i;

		//for (int k = 0; k < N-2; k++) {

		//	answer_temp_1 = *i;
		//	i++;
		//	i++;

		//	answer_temp_1 += *i;
		//	if (answer_temp_1 > K) {
		//		answer_temp_1 -= *iter_answer;
		//	}
		//	if (answer_temp_1 > answer_temp_2) {
		//		answer_temp_2 = answer_temp_1;
		//		current_optimal = answer_temp_2;
		//	}
		//	i = iter_temp;
		//	for (int j = 0; j < k; j++) {
		//		i++;
		//	}
		//}
		//answer_vector.push_back(current_optimal);
	}

	//// Provides the answer for the DP problem
	//iter_answer = answer_vector.begin();
	//for (int i = 0; i < T; i++) {
	//	cout << "Scenario #" << i + 1 << ": " << *iter_answer << endl;
	//	iter_answer++;
	//}
	//return 0;
}
