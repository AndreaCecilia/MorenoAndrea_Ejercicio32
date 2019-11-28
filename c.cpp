#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
using 
namespace std;
// Defino las constantes del sistema

double const rho= 0.01; // densidad
double const ten=40;
//tension
double const c= sqrt(ten/rho);
//Propagación de la velocidad
double const cl= c;
//criterio CFL
double ratio =c*c/(cl*cl);
// inicializo las funciones

void relleno(int N,float **m);


// Creo el main
int main () {
 // Inicialozación
//cout<<"Escriba un numero del 3 al 11"<<endl;

//int N=0;

//cin>>N;

int N=101;

float ** xi = new float *[N];

for (int i =0; i <N; ++i){
  xi[i] = new float[3];}

relleno(N,xi);


   return 0;
}
//Creo la funcion relleno

void relleno(int N,float **m){
  cout<<"la matriz es: "<<endl;
  for(int ii=0;ii<N; ii++){
      
     for(int ij=0;ij<3; ij++){
       if(ii<81){
         if(ij==0){

        m[ii][ij]=0.00125*ii;
       cout<<" "<<m[ii][ij]<<" ";
       }
       else if(ii<101){
         if(ij==0){

        m[ii][ij]=0.1 -0.00*(ii-80);
       cout<<" "<<m[ii][ij]<<" ";
         }
       }

       } 
      
      
     }
   cout<<endl;
  }
  
}




