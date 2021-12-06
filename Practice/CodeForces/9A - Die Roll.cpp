// https://codeforces.com/contest/9/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int y, w, p=0;
	cin >> y >> w;
	
	if(y >= w)
	{
	    p = 7-y;    
	}
	else
	{
	    p = 7-w;
	}

    switch(p)
	{
	    case 0:
			cout << "0/1";
			break;
		case 1:
			cout << "1/6";
			break;
		case 2:
			cout << "1/3";
			break;
		case 3:
			cout << "1/2";
			break;
		case 4:
			cout << "2/3";
			break;
		case 5:
			cout << "5/6";
			break;
        case 6:
			cout << "1/1";
			break;
        
		default:
			cout << "Not Possible";
	}
    
	return 0;
}
