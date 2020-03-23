#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<class T>

T suma(T v[], int vbegin, int vend, T element)
{
    int S = 0;
    for(int i=vbegin; i<vend; i++)
        S+=v[i];
    S+=element;
    return S;
}

int main()
{
    int v1[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = suma<int>(v1,0,3,5);
    cout<<sum<<'\n';

    vector<double> b= {1, 2, 3, 4, 5, 6, 7};
    double sum1 = 0;
    for_each(b.begin(), b.end(), [&s](double x)
             {
                 sum1 += x;
             });
    cout<<sum1;

    return 0;
}
