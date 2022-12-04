#define MAX_LINE_LEN 100

typedef enum{false, true} bool;
typedef enum{SUCCESS=0, FAILURE=1} status;
using namespace std;

int main()
{
    int arr[] = {6,2,8,7,3,10,9,4,5,1};
    int i.n = 10;
    for (int gap = 1; gap <n; gap=pow(2,gap)+1)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
    int j;
            for (j = i; j>= gap && arr[] - gap] > temp; j-= gap)
                arr[j] = arr[] - gap];
            arr[j] = temp;
        }
    }
    cout << "Sorted array:" <<endl;
for (i=0; i<n; i++)
    cout << arr[i] <<" ";
return 0;
char* readString(char* fileName);

/*
 * mysteryExplode - takes a string of characters and explodes it
 * as follows:
 * 
 * A non-empty string such as "Code" is turned into "CCoCodCode".
 *
 *   Return a new string similar to the string given above.
 *
 *  Example:
 *   mysteryExplosion("Code") --> "CCoCodCode"
 *   mysteryExplosion("abc") --> "aababc"
 *   mysteryExplosion(":)") --> "::)"
 * 
 */
char* mysteryExplode(const char* str);
