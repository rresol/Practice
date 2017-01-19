#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

typedef struct Suffix{
	int index;
	char *suff;
}suffix;

int cmp(suffix a, suffix b){
	return strcmp(a.suff,b.suff)<0?1:0;
}
int *buildSuffixArray(char* txt, int n){
	suffix suffixes[n];
	for(int i=0;i<n;i++)
	{
		suffixes[i].index =i;
		suffixes[i].suff = txt +i;
	}
	sort(suffixes,suffixes+n,cmp);
	int *suffixArr = new int[n];
	for(int i=0;i<n;i++){
		suffixArr[i] = suffixes[i].index;
	}
	return suffixArr;
}

void search(char *pat, char *txt, int *suffArr, int n)
{
    int m = strlen(pat);  // get length of pattern, needed for strncmp()

    // Do simple binary search for the pat in txt using the
    // built suffix array
    int l = 0, r = n-1;  // Initilize left and right indexes
    while (l <= r)
    {
        // See if 'pat' is prefix of middle suffix in suffix array
        int mid = l + (r - l)/2;
        int res = strncmp(pat, txt+suffArr[mid], m);

        // If match found at the middle, print it and return
        if (res == 0)
        {
            cout << "Pattern found at index " << suffArr[mid];
            return;
        }

        // Move to left half if pattern is alphabtically less than
        // the mid suffix
        if (res < 0) r = mid - 1;

        // Otherwise move to right half
        else l = mid + 1;
    }

    // We reach here if return statement in loop is not executed
    cout << "Pattern not found";
}
void printArr(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	char txt[] = "banana";
	char pat[] = "bana";

	int n = strlen(txt);
	int *suffixArr = buildSuffixArray(txt,n);
	printArr(suffixArr,n);
	search(pat,txt,suffixArr,n);
	return 0;
}
