// https://takeuforward.org/data-structure/find-the-repeating-and-missing-numbers/

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int S = 0, S2=0;
	int x = 0, y=0;
	for(int i = 0; i< n;i++){
		S+= arr[i];
		S2 += (arr[i] * arr[i]);
	}
	int Sn = n*(n+1)/2;
	int S2n = n*(n+1)*(2*n+1)/6;

	//equal to x-y
	int val1 = S-Sn;
	
	//equal to x2-y2
	int val2 = S2-S2n;

	//x+y
	val2 = val2/val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
	x = (val1 + val2)/2;
	y = x - val1;

	return {y, x};
}
