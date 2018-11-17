/*Delta.c from Closure relation of eigenfunction of particle in box */
/* Author: Birendra Dhanuk */
double fact(int);
double sin(double);
static double t=0.001;
static double pi=3.14159265358979;
double fx(int, double);
double delta(int N,double x, double t){
double sum;
int n;
	sum=0.0;
	for(n=1;n<=N;n++){
	sum+=2*sin(n*pi*x)*sin(n*pi*t);
	}
return sum;
}

