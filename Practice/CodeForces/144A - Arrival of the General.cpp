/*

A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.

*/

#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    
    int mina(a), maxa(a), mini(0), maxi(0);
    
    for (int i=1; i<n; ++i)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    
    return 0;
}
