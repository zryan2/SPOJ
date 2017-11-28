//#include <iostream>
//using namespace std;
//
//// THREECOL
//int most_green[10010][2];
//int least_green[10010][2];
//int test_size;
//char input[1000];
//int tree[10010][2]; // [num][child (left, right)]
//
//
//					// Builds a tree using an array
//int node;
//void build_tree() {
//	if (node == test_size)
//		return;
//	int curr_node = node;
//	node++;
//	if (input[curr_node] == 1) {
//		tree[curr_node][0] = node;
//		build_tree();
//	}
//	else if (input[curr_node] == 2) {
//		tree[curr_node][0] = node;
//		build_tree();
//		tree[curr_node][1] = node;
//		build_tree();
//	}
//}
//
//void calculate_solution(int n, int is_green) {
//
//}
//
//int main() {
//	int num_tests;
//	cin >> num_tests; // Number of test cases
//	for (int i = 0; i < num_tests; i++) {
//		cin >> input; // Test_case to be processed
//		test_size = strlen(input);
//		node = 0;
//		build_tree();
//		cout << most_green << " " << least_green << endl;
//	}
//	return 0;
//}