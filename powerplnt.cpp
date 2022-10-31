#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


    int P;
    cin >> P;
    vector<int> s, dl;
    s.resize(P);
    dl.resize(P);
    vector<int> tX;
    vector<int> tY;
    tX.reserve(P);
    tY.reserve(P);

    for(int l = 0 ; l < P ; l ++)
    {
        int X,Y;

        cin >> X;
        cin >> Y;

        auto it = upper_bound(tY.begin(),tY.end(),Y);

        int pos = it - tY.begin();
        tY.insert(it, X);
        tX.insert(tX.begin() + pos, Y);

        int i = pos;
        if (i == 0)
        {
            s[0] = X;
            dl[0] = max(0, Y - D);
            ++i;
        }
        while(i <= l)
        {
            s[i] = s[i-1] + tX[i];
            dl[i] = max(dl[i-1],s[i] - tY[i]);
            ++i;
        }

        cout << dl[l] << endl;
            
    }
    return 0;