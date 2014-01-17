int factorielle(int n) {
	int i, r=1;
	for(i = 1 ; i<= n ; i++) {
		r = r*i;
	}
	return r;
}

float cnp(int n, int p) {
	int num ;
	int den ;
	num = factorielle(n);
	den = factorielle(p)*factorielle(n-p);
	return num/den;
}

int factorrecur(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
