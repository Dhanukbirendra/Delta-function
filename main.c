#include<stdio.h>
FILE *fout1;
double delta(int, double, double);

int main() {
  double t=0.001;
  int i;
  double x;
  fout1=fopen("delta.dat","w"); 
  for(i=-225;i<=350;i++){
    x=0.01*(double)i;
      fprintf(fout1,"%5.3lf %24.15lf\n",x,delta(50,(double)x,t));
	}
  fclose(fout1);
 }
 

