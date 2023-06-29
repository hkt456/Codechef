#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Movie {
    int spaceRequired;
    int imdbRating;
};

bool sortByRating(const Movie& m1, const Movie& m2) {
    return m1.imdbRating > m2.imdbRating;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<Movie> movies(n);
        for (int i = 0; i < n; i++) {
            cin >> movies[i].spaceRequired >> movies[i].imdbRating;
        }

        sort(movies.begin(), movies.end(), sortByRating);

        int highestRating = 0;
        for (const Movie& movie : movies) {
            if (movie.spaceRequired <= x) {
                highestRating = movie.imdbRating;
                break;
            }
        }

        cout << highestRating << endl;
    }

    return 0;
}
