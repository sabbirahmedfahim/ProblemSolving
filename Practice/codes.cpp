// #include <iostream>
// using namespace std;

// void reverse(int *ara, int n)
// {
//     for (int i = n-1; i >= 0; i--)
//     {
//         cout << ara[i] << " ";
//     }
// }   
// int main()
// {
    // int n;
    // cin >> n;
    // int ara[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ara[i];
    // }
    // reverse(ara, n);
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void traverse(int *ara, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << ara[i] << " ";
//     }
    
// } 
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int copiedArr[n];
//     cout << arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         copiedArr[i] = arr[i];  
//     }
//     cout << "copied array: ";
//     traverse(copiedArr, n);

//     // int sum = 0;
//     // int i = 0;
//     // while (true)
//     // {
//     //     if(i==n)
//     //     {
//     //         break;
//     //     } 
//     //     sum = sum + arr[i];
//     //     i++;
//     // }
//     // cout << sum;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void traverse(int *ara, int n)
{
    for(int i=0; i<n;i++)
    {
        cout << ara[i] << " ";
    }
} 
int main()
{ 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1; i<n; i++) // outer loop is for PASS
    {
        for(int j=0; j<n-i; j++) // inner loop is STEP
            // j++ is tracker
        {
            if(arr[j] > arr[j+1]) // compare
                swap(arr[j], arr[j+1]); // change
        }
    }
    // traverse(arr, n);
    int countDuplicate = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] == arr[i+1]) countDuplicate++;
    }
    cout << countDuplicate;


    return 0;
}


