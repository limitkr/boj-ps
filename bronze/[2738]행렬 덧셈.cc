#include <bits/stdc++.h>
using namespace std;

int A[100][100], B[100][100];
int N, M;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;

  for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) {
	  cin >> A[i][j];
	}
  }

  for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) {
	  cin >> B[i][j];
	}
  }

  for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) {
		cout << A[i][j] + B[i][j] << " ";
	}
	cout << "\n";
  }
}