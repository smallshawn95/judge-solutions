#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

double calc_area(pair<double, double> A, pair<double, double> B, pair<double, double> C) {
    pair<double, double> AB = {B.first - A.first, B.second - A.second};
    pair<double, double> AC = {C.first - A.first, C.second - A.second};
    double vector_AB = sqrt(AB.first * AB.first + AB.second * AB.second);
    double vector_AC = sqrt(AC.first * AC.first + AC.second * AC.second);
    double dot_product = AB.first * AC.first + AB.second * AC.second;
    double cos_theta = dot_product / (vector_AB * vector_AC);
    double area = 0.5 * vector_AB * vector_AC * sqrt(1 - cos_theta * cos_theta);
    return area;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<double, double>> point(n);
    for(int i = 0; i < n; i++){
        cin >> point[i].first >> point[i].second;
    }
    double max_area = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                double area = calc_area(point[i], point[j], point[k]);
                max_area = max(area, max_area);
            }
        }
    }
    cout << fixed << setprecision(6) << max_area << '\n';
    return 0;
}