inline int digit_root(int n) {
  int sum = 0;

  while (n) {
    sum += n % 10;
    n /= 10;

    if (!n && sum / 10) {
      n = sum;
      sum = 0;
    }
  }

  return sum;
}
