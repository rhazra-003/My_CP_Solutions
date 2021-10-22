/*

Anton's favourite geometric figures are regular polyhedrons. Note that there are five kinds of regular polyhedrons:

Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.
All five kinds of polyhedrons are shown on the picture below:

Anton has a collection of n polyhedrons. One day he decided to know, how many faces his polyhedrons have in total. Help Anton and find this number!

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n, cnt=0;
    cin >> n;
    
    string str;
    
    for(int i=0; i<n; i++)
    {
        cin >> str;

        if(str == "Tetrahedron")
        {    
            cnt = cnt + 4;
        }
        else if(str == "Cube")
        {
            cnt = cnt + 6;
        }
        else if(str == "Octahedron")
        {
            cnt = cnt + 8;
        }
        else if(str == "Dodecahedron")
        {
            cnt = cnt + 12;
        }
        else if(str == "Icosahedron")
        {
            cnt = cnt + 20;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
