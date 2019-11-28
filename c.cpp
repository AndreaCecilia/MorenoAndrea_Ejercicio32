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
double const ratio =c*c/(cl*cl);
// inicializo las funciones
double const L=1;
void relleno(int N,float **m, float * x, float * y );
void imprimir(int N,float **m, float * x, float * y );

// Creo el main
int main () {
 // Inicialozación
//cout<<"Escriba un numero del 3 al 11"<<endl;

//int N=0;

//cin>>N;

int N=101;

float ** xi = new float *[N];
float *x =new float[N];
float *y =new float[N];
for (int i =0; i <N; ++i){
  xi[i] = new float[10];}


 relleno(N,xi,x,y);

 
 imprimir(N,xi,x,y);
 


   return 0;
}
//Creo la funcion relleno

void relleno(int N,float **m, float * x, float * y ){
  for(int ii=0;ii<N; ii++){
      
     for(int ij=0;ij<10; ij++){
      
         if(ij==0){

        m[ii][ij]=pow(10, -4)*sin((2*3.1415/L)*ii);

       }

       else{ m[ii][ij]=0;   }
       
     }

  }
  for(int ii=1;ii<N-1; ii++){
      
     for(int ij=1;ij<10; ij++){
      if(ij==1){

        m[ii][ij]=m[ii][0]+ 0.5*ratio*(m[ii+1][0]+ m[ii-1][0] -2*m[ii][0]);
 
        
       }

       else if(ij==2){

        m[ii][ij]=2*m[ii][1]- m[ii][0]+0.5*ratio*(m[ii+1][1]+ m[ii-1][1] -2*m[ii][1]);

        
       } 
      
      
     }
   
  }

  for(int ii=1;ii<N-1; ii++){
      
        m[ii][2]=2*m[ii][1]- m[ii][0]+0.5*ratio*(m[ii+1][1]+ m[ii-1][1] -2*m[ii][1]);
       
     }

  for(int ii=1;ii<N-1; ii++){
      for(int lol=2; lol<9; lol++){
      
        m[ii][lol+1]=2*m[ii][lol]- m[ii][lol-1]+0.5*ratio*(m[ii+1][lol-1]+ m[ii-1][lol] -2*m[ii][lol]);
  }
  }
       
     
  
}



void imprimir(int N,float **m, float * x, float * y ){
for(int i=0; i<N;i++){
  for(int j=0; j<10;j++){
  cout<<' '<<m[i][j]<<' ';
  }
  cout<<endl;
}
}


