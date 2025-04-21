// Created on: 2025-04-11 15:33
// Author: Safwan_Ibrahim

#include <bits/stdc++.h>
using namespace std;

#define ld double
#define endl '\n'
const double pi = 3.14159265358979323846; 

void Try() {
    ld a, b, d;

    scanf("%lf%lf%lf", &a, &b, &d);
    // printf("%.6f %.6f %.6f\n", a, b, d);

    ld l = d / sqrt(2);

    ld carea = pi * (d/2.0) * (d/2.0);

    ld sqarea = l * l;

    ld xtra = carea - sqarea;

    ld cl = l/2.0;

    ld narea = pi * cl * cl;
    narea/=2.0;

    narea *= 4.0;

    ld ans = narea - xtra;

    printf("%.10lf\n", ans);
}

int32_t main() {
    // ios_base::sync_with_stdio(0);cin.tie(0);

    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++) {
        Try();
    }
    return 0;
} 