#include <stdio.h>
#include <stdlib.h>

typedef unsigned int u_int;

// Radix Sort Implementation
// Reference:
// https://stackoverflow.com/questions/29019318/optimizing-qsort
int *radix_sort(int *pData, int *pTemp, const size_t count) {
  size_t mIndex[4][256] = {0};
  size_t i, j, m;
  u_int u;

  for (i = 0; i < count; i++) {
    u = pData[i];
    for (j = 0; j < 4; j++) {
      if (j != 3)
        mIndex[j][(size_t)(u & 0xff)]++;
      else
        mIndex[j][(size_t)((u ^ 0x80) & 0xff)]++;
      u >>= 8;
    }
  }
  for (j = 0; j < 4; j++) {
    size_t n = 0;
    for (i = 0; i < 256; i++) {
      m = mIndex[j][i];
      mIndex[j][i] = n;
      n += m;
    }
  }
  u_int *pDst = (u_int *)pTemp;
  u_int *pSrc = (u_int *)pData;
  for (j = 0; j < 4; j++) {
    for (i = 0; i < count; i++) {
      u = pSrc[i];
      if (j != 3)
        m = (size_t)(u >> (j << 3)) & 0xff;
      else
        m = (size_t)((u >> (j << 3)) ^ 0x80) & 0xff;
      pDst[mIndex[j][m]++] = u;
    }
    u_int *pTmp = pSrc;
    pSrc = pDst;
    pDst = pTmp;
  }
  return (int *)pSrc;
}

int N, B;

int main() {
  scanf("%d %d", &N, &B);
  int arr[N], temp[N];
  for (int i = 0; i < N; i++)
    scanf("%d", &arr[i]);

  radix_sort(arr, temp, N);

  int sum = 0, cnt = 0;
  for (int i = N - 1; i >= 0; i--) {
    if (sum >= B)
      break;
    sum += arr[i];
    cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}