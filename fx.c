double sin(double);
static double t=0.001;
static double pi=3.14159265358979;
double fx(int n, double x) {
    return sin((double)n*pi*x)*sin((double)n*pi*t);
  }


