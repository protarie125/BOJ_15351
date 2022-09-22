#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto s = string{};
	getline(cin, s);
	while (0 < (n--)) {
		getline(cin, s);

		auto ans = int{ 0 };
		for (const auto& x : s) {
			if (' ' == x) {
				continue;
			}

			ans += x - 'A' + 1;
		}

		if (100 == ans) {
			cout << "PERFECT LIFE\n";
		}
		else {
			cout << ans << '\n';
		}
	}

	return 0;
}