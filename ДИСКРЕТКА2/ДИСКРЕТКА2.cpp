#include <iostream>  
#include <iomanip>  
#include <math.h>  
using namespace std;
int main()
{
    int A[10] = { 1,4,5,6,7,15,16,17,18,25 };
    int B[10] = { 1,2,6,7,8,9,14,16,20,24 };
    int C[10] = { 1,5,6,7,12,13,18,19,24,25 };
    int F[25];
    int W[25];
    int U[25];
    int H[25];
    int k = 0;
    int n = 10;
    int p = 0;
    int m = 0;
    for (int i = 0; i < 25; i++) {
        U[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        F[i] = B[i];
    }
    for (int i = 0; i < 25; i++) {//A zap 
        for (int j = 0; j < 10; j++) {
            if (U[i] != A[j])
                k++;
        }
        if (k == 10)
        {
            H[p] = U[i]; k = 0; p++;
        }
        else k = 0;
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < 10; j++) {// A_zap and B 
            if (H[i] != B[j])
                k++;
        }
        if (k == 10)
        {
            F[n] = H[i]; k = 0; n++;
        }
        else k = 0;
    }
    int b = 0;
    int q = 0;
    int l = 0;
    for (int i = 0; i < n; i++) { //-A 
        for (int j = 0; j < 10; j++) {
            if (F[i] != A[j])
                b++;
        }
        if (b == 10) {
            W[q] = F[i]; b = 0; q++;
        }
        else
            b = 0;
    }
    l = q;
    for (int i = 0; i < 10; i++) { //with B 
        for (int j = 0; j < q; j++) {
            if (B[i] != W[j])
                b++;
        }
        if (b == q) {
            W[l] = B[i]; b = 0; l++;
        }
        else
            b = 0;
    }
    for (int i = 0; i < l; i++) { //only C 
        for (int j = 0; j < 10; j++) {
            if (W[i] == C[j])
                b++;
        }
        if (b > 0) {
            W[m] = W[i]; b = 0; m++;
        }
        else
            b = 0;
    }
    cout << "F = ";
    for (int i = 0; i < m; i++) {
        cout << W[i] << " ";
    }
    return 0;
}