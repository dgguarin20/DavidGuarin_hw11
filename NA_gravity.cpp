#include<iostream>
#include<ctime>
using namespace std;

float funcdv(int G, int M, float x, float h, float Vmenos1);
float funcdx(float V, float h, float xmenos1);
  
int main()
{
  //iniciar variables
  int G;
  int M;

  G = 10;
  M = 1000;

  float ma;
  float x0;
  
  float v0;
  float h;
  //cout << "inserte m: \n";
  //cin >> ma;
  //cout << "inserte x: \n";
  //cin >> x0;
  //cout << "inserte v: \n";
  //cin >> v0;
  //cout << "insert h o dt: \n";
  //cin >> h;

  ma = 10;
  x0 = 3;
  v0 = 0;
  h = 0.01;
  
  float x1;
  float v1;
  // se obtiene el siguiente valor con la suma de su delta
  x1 = x0 +v0*h;
  v1 = v0 + (-(G*M)/(x0*x0))*h;
  float x1mas;
  float v1mas;
  int c;
  float t=0;

  //se aplica a 1000 resultados
  for(c = 0; c<1000; c++)
    {
      //se encuentra t
      t = t+h;
      //se encuentra el x siguiente
      x1mas = funcdx(v1,h,x0);

      //despues el v siguiente
      v1mas = funcdv(G,M,x1,h,v0);
      
      v0 = v1;
      v1 = v1mas;
      x0 = x1;
      x1 = x1mas;
      // se imprimen
      cout<< x0 << " " << v0 << " " << t;
      cout << "\n";
    }
    
  
}
//Usamos Leap-frog

//primera funcion
float funcdv(int G, int M, float x, float h, float Vmenos1)
{
  return -1*((G*M*2.*h)/(x*x))+Vmenos1;
}
//segunda funcion
float funcdx(float V, float h, float xmenos1)
{
  return 2*h*V + xmenos1;
}
