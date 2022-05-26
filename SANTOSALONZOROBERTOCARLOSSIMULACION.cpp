#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <random>
#include <ctime>
using namespace std;
unsigned long int a=630360016,m=2147483647,s=1 ;
vector<unsigned long int> v={1,1973272912, 281629770, 20006270, 1280689831, 2096730329, 1933576050, 913566091,
			     246780520, 1363774876, 604901985, 1511192140, 1259851944, 824064364, 150493284,
			     242708531, 75253171, 1964472944, 1202299975, 233217322, 1911216000, 726370533,
			     403498145, 993232223, 1103205531, 762430696, 1922803170, 1385516923, 76271663,
			     413682397, 726466604, 336157058, 1432650381, 1120463904, 595778810, 877722890,
			     1046574445, 68911991, 2088367019, 748545416, 622401386, 2122378830, 640690903,
			     1774806513, 2132545692, 2079249579, 78130110, 852776735, 1187867272, 1351423507,
			     1645973084, 1997049139, 922510944, 2045512870, 898585771, 243649545, 1004818771,
			     773686062, 403188473, 372279877, 1901633463, 498067494, 2087759558, 493157915,
			     59710427, 153090798, 1814496276, 536444882, 1663153658, 855503735, 67784357,
			     1432404475, 619691088, 119025595, 880802310, 176192644, 1116780070, 277854671,
			     1366580350, 1142483975, 2026948561, 1053920743, 786262391, 1792203830, 1494667770,
			     1923011392, 1433700034, 1244184613, 1147297105, 539712780, 1545929719, 190641742,
			     1645390429, 264907697, 620389253, 1502074852, 927711160, 364849192, 2049576050,
			     638580085, 547070247};	 //Esta es nuestra semilla
random_device rd;
mt19937 genMT19937(rd());
uniform_real_distribution<double> U01{0.0, 1.0};
uniform_int_distribution<int> UD{1,6};

inline int Dado() //Son funciones
{
  return UD(genMT19937);
}
 
enum Resultado { Menores, Siete, Mayores };

Resultado Lanzamiento() //son funciones
{
	int resultado = Dado()+Dado();
	if( resultado < 7 )
	   return Menores;
	if( resultado > 7 )
	   return Mayores;
    return Siete;
}

Resultado Eleccion()
{
  return Resultado(floor(3*U01(genMT19937)));
}

 			     
void sUniforme()
{
  s=v[int( time(NULL) )%int( v.size() )];
}
 
double Uniforme()
{
  static unsigned long int z=s;
  z*=a;
  z%=m;
  if( z==0 )
    return 1.0/m;
  return double(z)/m;
}
enum Resultad { Menore, Siet, Mayore };

int Dad()
{
  return floor(6*Uniforme())+1;
}

Resultad Lanzamient()
{
  int resultado = Dad()+Dad();
  if( resultado < 7 )
    return Menore;
  if( resultado > 7 )
    return Mayore;
  return Siet;
}

Resultad Eleccio()
{
  return Resultad(floor(3*Uniforme()));
}

int main ()
{
	 long double z1,x,u,u2,y,r,t,w,z,p,a,l;
	 double c4,c5,c6,c7,no1; 
	 int s,s1,Mesa = 0, apuestas,no,i ;  
	 unsigned long int b,c1,c2,c3 ; 
	 //sUniforme();  Manda a llamar la funcion y esta nos genera una semilla
	 do{ 
	 do{
         cout<<"                                            ESCUELA SUPERIOR DE FISICA Y MATEMATICAS        "<<endl;
	     cout<<"                                            ALUMNO: SANTOS ALONZO ROBERTO CARLOS            "<<endl;
	     cout<<"  1.  JUEGO FERIA PLUS"<<endl;
	     cout<<"  2.  JUEGO FERIA  2"<<endl;
	     cout<<"  3.  MID-SQUARE "<<endl;
	     cout<<"  4.  METODO DE CONGRUENCIAS  LINEALES"<<endl;
	     cout<<"  5.  METODO TRANSFORMADA INVERSA CONTINUA: X~EXP(1)     X=-log(U)"<<endl;
	     cout<<"  6.  METODO TRANSFORMADA INVERSA CONTINUA: X~EXP(B)  X=-beta*log(1-U)"<<endl;
	     cout<<"  7.  METODO TRANSFORMADA INVERSA CONTINUA:X=-sqrt(U) "<<endl;
	     cout<<"  8.  METODO TRANSFORMADA INVERSA CONTINUA: X~TRIANGULAR DERECHA "<<endl;
         cout<<"  9.  METODO DE COMPOSICION PARA GENERAR X~LAPLACE.1"<<endl;
         cout<<"  10. METODO DE COMPOSICION PARA GENERAR X~LAPLACE.2"<<endl;
         cout<<"  11. METODO DE COMPOSICION PARA GENERAR X~LAPLACE.3"<<endl;
	     cout<<"  12. METODO DE COMPOSICION X~TRIANGULAR DERECHA "<<endl;     
		 cout<<"  13. METODO DE CONVOLUCION PARA GENERAR X~m-Erlang(B).1"<<endl;
		 cout<<"  14. METODO DE CONVOLUCION PARA GENERAR X~m-Erlang(B).2"<<endl;		   
         cout<<"  15. METODO DE ACEPTACION PARA GENERAR X~BERNOULLI(P) "<<endl;
         cout<<"  16. METODO DE ACEPTACION Y RECHAZO PARA APROXIMAR PI (METODO MONTECARLO))"<<endl;
         cout<<"  17. METODO DE ACEPTACION Y RECHAZO PARA GENERAR A R~RADIAL"<<endl;
         cout<<"  18. METODO DE ACEPTACION Y RECHAZO PARA GENERAR: X~GAMMA_A_MENOR_1_1   0<alpha<1"<<endl;
         cout<<"  19. METODO DE ACEPTACION Y RECHAZO PARA GENERAR: X~GAMMA_A_MAYOR_1_1     alpha>1"<<endl;
         cout<<"  20. METODO DE ACEPTACION Y RECHAZO PARA GENERAR: X~GAMMA     alpha<1"<<endl;  
   	     cout<<"  21. METODO DE ACEPTACION Y RECHAZO: X~Beta(4,3)"<<endl;		        
         cout<<"  22. METODO BOX-MULLER(NORMAL) PARA GENERACION DE VARIABLES ALEATORIAS NORMALES: X,Y~N(0,1) "<<endl;
         cout<<"  23. METODO POLAR (MARSAGLIA-BRAG) PARA GENERACION DE VARIABLES ALEATORIAS NORMALES: X,Y~N(0,1)  "<<endl;
         cout<<"  24. METODO PARA GENERAR A POISSON: X~POISSON.1 (lambda)"<<endl;  //9
         cout<<"  25. METODO PARA GENERAR A POISSON: X~POISSON.2"<<endl; //10
	     cout<<"  26. METODO PARA GENERAR X~GEOMETRICA(p)  "<<endl;
	     system("color 07");
	     cout<<"ESCOGE EL METODO"<<endl;
	     cin>> no1;
		 system("cls"); //Borra la pantalla	 	 
       }while(no1!=1 & no1!=2 & no1!=3 & no1!=4 & no1!=5 & no1!=6 & no1!=7 & no1!=8 & no1!=9 & no1!=10 & no1!=11 & no1!=12 & no1!=13 & no1!=14 & no1!=15 & no1!=16 & no1!=17 & no1!=18 & no1!=19 & no1!=20 & no1!=21 & no1!=22 & no1!=23 & no1!=24 &no1!=25 & no1!=26  );	
	    no=no1;
		switch (no)
		{
	        case 1:
	         cout<<"                   ESCOGISTE JUEGO FERIA PLUS            "<<endl;
	         Resultado eleccion, lanzamiento;
	         cout<<" CUANTAS APUESTAS:  "<<endl;
	         cin>> apuestas;
	         time_t t0;
	         time_t t1;
	         t0=clock();
	         for( int a=0; a<apuestas; a++ )
	           {
		         eleccion = Eleccion();
		         lanzamiento = Lanzamiento();
		         if( eleccion != lanzamiento )
		             Mesa++;
		         else
		             if( eleccion == Siete )
		                 Mesa-=4;
		             else 
		                 Mesa--;
	           }
	         t1=clock();
	         cout<<"Tiempo transcurrido : "<<double(t1-t0)/CLOCKS_PER_SEC<<" segs."<<endl;
	         cout<<"Despues de "<<apuestas<<" apuestas la mesa gano "<<Mesa<<endl;
	         cout<<"Ganacia esperada aproximada es "<<double(Mesa)/apuestas<<endl;
	        break;
	        case 2:
	         cout<<"                   ESCOGISTE JUEGO FERIA 2            "<<endl;
	         sUniforme();
             Resultad eleccio, lanzamient;
             cout<<"Cuantas apuestas : ";
             cin>>apuestas;
             for( int a=0; a<apuestas; a++ )
	           {
	             eleccio = Eleccio();
	             lanzamient = Lanzamient();
	             if( eleccio != lanzamient )
	                 Mesa++;
	             else
	                 if( eleccio == Siet )
	                     Mesa-=4;
	                 else
	                     Mesa--;
	           }
             cout<<"Despues de "<<apuestas<<" apuestas la mesa gano "<<Mesa<<endl;
             cout<<"Con una ganacia media de "<<double(Mesa)/apuestas<<endl;
	         break;
	       case 3:
	       	 sUniforme();
	       	 do{
		         system("cls"); //Borra la pantalla
	       	     cout<<"                   ESCOGISTE MID-SQUARE           "<<endl;	       	 	
	       	  	cout<<"Ingrese un numero mayor de 5 cifras: "<<endl;
	             cin>>b;	
				}while((b/1000)<9);

	         cout<<"¿ Cuantos numeros pseudoaleatorios quieres? "<<endl;
             cin>>s1;
             cout<<endl;
             cout<<"Aplicando MID-SQUARE tenemos los  "<<s1<<" numeros pseudoaleatorios"<<endl;
	         for(int x=0;x<s1;x++)
			   { 
	             c1=b/(pow(10,2)); // Dividimos el número original entre 100, y como definimos la variable en entero, entonces solo nos dara la parte entera
		         c2=c1% 10000; //Divide al numero entero entre 10000, y se queda con la parte entera 
		         c3=pow(c2,2); //Eleva al cuadrado al numero 
		         c4=c3/100000000.0; // Divide el numero que elevamos al cuadrado entre 100000000
		         cout<<"El numero "<<x+1<<" pseudoaleatorio "<<" es: "<<c4<<endl;
		         b=c3; //Renombra a b con el numero que habiamos elevado al cuadrado 
		       }
	        break;
	       case 4:
	       	 sUniforme();
             m=1147483647 ;	
	         do{ 	// Esto lo hago para que al ingresar los datos cumpla las condiciones del metodo
	             system("cls"); //Borra la pantalla
	             
	             cout<<"                   ESCOGISTE METODO DE CONGRUENCIAS  LINEALES\n INGRESA m,a,c y z0 cuidando que cumplan las siguientes condiciones: "<<endl; 
	             cout << "1. \n m>0 \n m>a \n m>c \n m>z0 \n "<<endl;
	             cout << "2. Todas las variables deben ser enteros positivos" << endl;
	             cout << "Ingresa z0 "<<endl; 
	             cin>>b;
	             cout << "Ingresa a "<<endl; 
	             cin>>c1;
	             cout << "Ingresa c "<<endl; 
	             cin>>c2;
	             cout << "Ingresa m "<<endl; 
	             cin>>c3;
	           }while (b<=0 || c1<=0 || c2<=0 || c3<=0 || c3<=c1|| c3<=c2 || c3<=b ); 
	         cout<<"¿ CUANTOS NUMEROS ALEATORIOS QUIERES?= "<<endl;
             cin>>s1;
             cout<<"Z           No. pseudoaleatorio"<<endl;
	         for (int x=0;x<s1;x++)
    	       {
    	         c5=((c1*b)+c2)%c3; //Calcula Z_{n+1}
    	         c6=c3; //Esto lo hice para que pueda hacer la division (los dos en double)
    	         c4=c5/c6; // Obtiene el numero aleatorio 
       	         cout<<"Z"<<x+1<<"="<<c5<<"          "<<" U"<<x+1<<"="<<c4<<endl;	 //Lo escribe
    	         b=c5; // Renombra a Z_{n} por 
		       }
	         if(c3<s1)
			   {
	  	         cout<<"Como "<<"m<i o sea "<<c3<<"<"<<s1<<"  Implica que el no. de iteraciones (i) rebasa el ciclo completo (m)"<<endl;
                 cout <<"Por eso los numeros pseudoaleatorios empiezan a repetir"<<endl;	  
	           }
          break;
            case 5:
           	 sUniforme();
             m=1147483647 ;	
          	 cout<<"                                 ESCOGISTE EL METODO DE TRANSFORMADA INVERSA CONTINUA:X~EXP(1)  X=-log(U) \n "<<endl;
          	 cout<<" Sea F una funcion de distribucio n continua y estrictamente creciente en I={x pertenece R: 0<F(x)<1}, "<<endl;
          	 cout<<"  entonces el siguiente metodo regresa una variable aleatoria con funcion de distribucio F"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s;
			 cout <<"ui                      xi"<<endl;
             for(no=0; no <s; no++ )
			 {
			 	 u=Uniforme();
                 x=-log(u); //Manda a llamar a la función y le aplica el logaritmo con signo negativo
                 cout <<"u"<<no+1<<"= "<<u<<"         x"<<no+1<<"=-log("<<u<<")="<<x<<endl;
			 }
          break;
          case 6:
           	 sUniforme();
             m=1147483647 ;	
			 cout<<"                                 ESCOGISTE EL METODO DE TRANSFORMADA INVERSA CONTINUA:X~EXP(B)  X=-beta*log(1-U) \n "<<endl;
          	 cout<<" Sea F una funcion de distribucio n continua y estrictamente creciente en I={x pertenece R: 0<F(x)<1}, "<<endl;
          	 cout<<"  entonces el siguiente metodo regresa una variable aleatoria con funcion de distribucio F"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s;	
			 cout<<"Ingresa el valor beta"<<endl;
			 cin>>c4;
			 cout <<"ui                      xi"<<endl;
          	for(no=0; no<s; no++ )
			 { 
			     u=Uniforme();
	             x=-c4*log(1-u); //Manda a llamar la funcion y hace la operacion
	             cout <<"u"<<no+1<<"= "<<u<<"         x"<<no+1<<"=-"<<c4<<"*log(1-"<<u<<")="<<x<<endl;
	         }
           break;
           case 7:
           	 sUniforme();
             m=1147483647 ;	
	       	 cout<<"                                 ESCOGISTE EL METODO DE TRANSFORMADA INVERSA CONTINUA:  X=-sqrt(U) \n "<<endl;
          	 cout<<" Sea F una funcion de distribucio n continua y estrictamente creciente en I={x pertenece R: 0<F(x)<1}, "<<endl;
          	 cout<<"  entonces el siguiente metodo regresa una variable aleatoria con funcion de distribucio F"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s;
			 cout <<"ui                      xi"<<endl;
          	for(no=0; no<s; no++ )
			 { 
			     u=Uniforme();
	             x=sqrt(u); //Manda a llamar la funcion y hace la operacion
	             cout <<"u"<<no+1<<"= "<<u<<"         x"<<no+1<<"=sqrt("<<u<<") ="<<x<<endl;
	         }
		   break;
		   case 8:
           	 sUniforme();
             m=1147483647 ;		   	
		   	 cout<<"                                 ESCOGISTE EL METODO DE TRANSFORMADA INVERSA CONTINUA X~TRIANGULAR DERECHA"<<endl;
          	 cout<<" Sea F una funcion de distribucio n continua y estrictamente creciente en I={x pertenece R: 0<F(x)<1}, "<<endl;
          	 cout<<"  entonces el siguiente metodo regresa una variable aleatoria con funcion de distribucio F"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s;
			 c1=0.5;
			 cout <<"ui                      xi"<<endl;
			 for(no=0; no<s; no++ )
			 {
			     u=Uniforme();
			     x=((sqrt(u+((pow(c1,2))/(4*(1-c1)))))-(c1/(2*sqrt(1-c1))))*(1/sqrt(1-c1));
	             cout <<"u"<<no+1<<"= "<<u<<"         x"<<no+1<<" = "<<x<<endl;
			 }
          break;
           case 9:
           	 sUniforme();
             m=1147483647 ;	
		   	 cout<<"                                 ESCOGISTE EL METODO DE COMPOSICION PARA GENERAR X~LAPLACE.1"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s;
			 c1=0.5;   
			 cout<<"Este metodo consiste: \n Si u_i<=05 \n    x=ln(u) \n sino \n     x=-ln(u) "<<endl;   
			 cout <<"ui                   condicion              xi"<<endl;    	 
			 for(no=0; no<s; no++ )
			 {
			     u=Uniforme();
			      if(u<=0.5)
				  {  
                     x=log(u);
                     cout <<"u"<<no+1<<"= "<<u<<"         Como "<<u<<"<=0.05"<<"    x"<<no+1<<"=log("<<u<<")="<<x<<endl;
				  }
                  else
				  {
                     x=-log(u);
                     cout <<"u"<<no+1<<"= "<<u<<"         Como "<<u<<">0.05"<<"    x"<<no+1<<"=-log("<<u<<")="<<x<<endl;
				  }
			 }
           break;
           case 10:
           	 sUniforme();
             m=1147483647 ;	
		   	 cout<<"                                 ESCOGISTE EL METODO DE COMPOSICION PARA GENERAR X~LAPLACE.2"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s;
			 c1=0.5;   
			 cout<<"ESTE METODO CONSISTE: \n Si u_i<=05 \n    x=-ln(u) \n sino \n x=ln(u) "<<endl;   
			 cout <<"ui                   condicion              xi"<<endl;    	    	 
			 for(no=0; no<s; no++ )
			 {
			     u=Uniforme();
			      if(u<=0.5)
				  {  
                     x=-log(u);
                     cout <<"u"<<no+1<<"= "<<u<<"         Como "<<u<<"<=0.05"<<"    x"<<no+1<<"=-log("<<u<<")="<<x<<endl;
				  }
                  else
				  {
                     x=log(u);
                     cout <<"u"<<no+1<<"= "<<u<<"         Como "<<u<<">0.05"<<"    x"<<no+1<<"=log("<<u<<")="<<x<<endl;
				  }
			 }
           break;
           case 11:
           	 sUniforme();
             m=1147483647 ;
		   	 cout<<"                                   ESCOGISTE EL METODO DE COMPOSICION PARA GENERAR X~LAPLACE.3"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s;
			 c1=0.5;   
			 cout<<"ESTE METODO CONSISTE: \n Si u_1i<=05 \n    x=log(u2i) \n sino \n x=-log(u2i) "<<endl;   
			 cout <<"u1i            u2i                   condicion                xi"<<endl;    
			 for(no=0; no<s; no++ )
			 {
			     u=Uniforme();
			     u2=Uniforme();
			      if(u<=0.5)
				  {  
                     x=log(u2);
                     cout <<"u1"<<no+1<<"= "<<u<<"  u2"<<no+1<<"= "<<u2<<"         Como "<<u<<"<=0.05"<<"    x"<<no+1<<"=log("<<u2<<")="<<x<<endl;
				  }
                  else
				  {
                     x=-log(u2);
                     cout <<"u1"<<no+1<<"= "<<u<<"  u2"<<no+1<<"= "<<u2<<"         Como "<<u<<">0.05"<<"    x"<<no+1<<"=-log("<<u2<<")="<<x<<endl;
				  }
			 } 
			break;
		 case 12:
		 	 cout<<"                                 ESCOGISTE EL METODO DE COMPOSICION X~TRIANGULAR DERECHA "<<endl;
			 sUniforme();
             m=1147483647 ;
			 cout<<"ESTE METODO CONSISTE: \n Si u_i<a \n    Regresa u_i \n sino \n    Regresa sqrt(u_i)  "<<endl;
	     	 cout<<"Con la condicion:  0<a<1"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s1;		 	
		 	 do{ 
			     cout<<"Dame el valor de a: "<<endl;
			     cin>>c4;  
			  }while(c4<=0 || c4>=1);
			 cout <<"ui                    condicion              xi"<<endl;  
			 for(no=0; no<s1; no++ )
			 {
			     u=Uniforme();
			      if(u<c4)
				  {  
                     x=u;
                     cout <<"u1"<<no+1<<"= "<<u<<"         Como "<<u<<"<"<<c4<<"    x"<<no+1<<"= "<<u<<"= "<<x<<endl;
				  }
                  else
				  {
                     x=sqrt(u);
                     cout <<"u1"<<no+1<<"= "<<u<<"         Como "<<u<<">="<<c4<<"    x"<<no+1<<"=sqrt("<<u<<")= "<<x<<endl;
				  }
			 } 
		  break;		  		  
         case 13:
           	 sUniforme();
             m=1147483647 ;
          	 cout<<"                                 ESCOGISTE EL METODO DE CONVOLUCION PARA GENERAR X~m-ERLANG(B).1 "<<endl;
             cout<<"El metodo de convolucion es la suma de dos o mas variables aleatorias para obtener una variable aleatoria"<<endl;
             cout<<"con la distribucion de probabilidad deseada. En este caso, es la suma de todas las xi:X=x1+x2+...+xm \n"<<endl;
			 cout<<"INGRESA EL NUMERO DE SUCESOS QUE SE CUENTAN (m))="<<endl;
			 cin>>s1; //m
			 cout <<"INGRESA EL VALOR DE BETA (ES LA MEDIA DE UNA DISTRIBUCION EXPONENCIAL)"<<endl; 
			 cin>>c4; //b
			 w=0;
          	for(no=0; no<s1; no++ )
			 { 
			     u=Uniforme();
			     c6=-(c4/s1)*log(u);
			     w+=c6;
		         //cout<<"X"<<no+1<<"= "<<c6<<endl;
		    }
		     cout<<"X=X1+X2+...+X"<<no+1<<"=  "<<w<<endl;
           break;
           case 14:
           	 sUniforme();
             m=1147483647 ;
          	 cout<<"                                 ESCOGISTE EL METODO DE CONVOLUCION PARA GENERAR X~m-ERLANG(B).2 "<<endl;
          	  cout<<"El metodo de convolucion es la suma de dos o mas variables aleatorias para obtener una variable aleatoria"<<endl;
             cout<<"con la distribucion de probabilidad deseada. En este caso, es la suma del producto de las xi: X=x1*x2*x3*...xm \n"<<endl;
             cout<<"INGRESA EL NUMERO DE SUCESOS QUE SE CUENTAN (m))="<<endl;
			 cin>>s1; //m
			 cout <<"INGRESA EL VALOR DE BETA (ES LA MEDIA DE UNA DISTRIBUCION EXPONENCIAL)"<<endl; 
			 cin>>c4; //b
			 w=1;
          	for(no=0; no<s1; no++ )
			 { 
			     u=Uniforme();
			     c6=-(c4/s1)*log(u);
			     w*=c6;
		         cout<<"X"<<no+1<<"= "<<c6<<endl;
		    }
		     cout<<"X=X1*X2*...*X"<<no+1<<"=  "<<w<<endl;
           break;
		 case 15:
           	 sUniforme();
             m=1147483647 ;
		 	 cout<<"                                 ESCOGISTE EL METODO DE ACEPTACION Y RECHAZO PARA GENERAR X~BERNOULLI(p)) "<<endl;
		     cout<<"ESTE METODO CONSISTE: \n Si u_i<p \n    Regresa X=1 \n sino \n    Regresa X=0  "<<endl;
			 cout<<"Teorema. Sea 0<p<1, entonces el siguiente metodo genera X~BERNOULLI(p))"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			     cin>>s1;		 	
		 	 do{ 
			     cout<<"Dame el valor de p: 0<p<1"<<endl;
			     cin>>c4;  
			  }while(c4<=0 || c4>=1);
			 cout <<"ui                    condicion              xi"<<endl;  
			 for(no=0; no<s1; no++ )
			 {
			     u=Uniforme();
			      if(u<=c4)
				  { 
                     cout <<"u1"<<no+1<<"= "<<u<<"         Como "<<u<<"<= "<<c4<<"    x"<<no+1<<"= "<<1<<endl;
				  }
                  else
				  {
                     cout <<"u1"<<no+1<<"= "<<u<<"         Como "<<u<<"> "<<c4<<"    x"<<no+1<<"= "<<0<<endl;
				  }
			 } 
		  break;	
		 case 16:
		 	 sUniforme();
             m=1147483647 ;
		 	 cout<<"                                 ESCOGISTE EL METODO DE ACEPTACION Y RECHAZO PARA APROXIMAR PI (METODO MOTECARLO) "<<endl;
		     cout<<"ESTE METODO CONSISTE EN: \n Generar puntos IID que se encuentren dentro de un cuadrado de area 1,"<<endl; 
		     cout<<"en el cual,  dentro del cuadrado esta un circulo de diametro 1 (entre\n más grandes los puntos, mas cercana la aproximacion a pi)"<<endl;	
		     cout <<" X=2u1-1~u(-1,1) \n Y=2u2-1~u(-1,1)"<<endl;
             cout<<"INGRESA EL NUMERO DE PUNTOS QUE DESEAS="<<endl;
		     cin>>t;
			 w=0;	 	 
			 for(b=0; b<t; b++ )
			 {
			     u=Uniforme();
			     u2=Uniforme();
			     x= (2*u)-1;
                 y= (2*u2)-1; 
                 c6=pow(x,2)+pow(y,2);
                 if (c6<=1)
                 {
                     w+=1;
                 }

             }                 
			 cout<<"(c) NUMERO DE PUNTOS DENTRO DEL CIRCULO= "<<w<<endl;
             cout<<"(n) TOTAL DE NUMERO DE PUNTOS= "<<t<<endl;
             p=4*(w/t);
             cout<<" Aprox. Pi =(4*c)/n= "<<p<<endl;
		  break;
		  case 17:
		  	 sUniforme();
             m=1147483647 ;
          	 cout<<"                                 ESCOGISTE EL METODO PARA GENERAR A R~RADIAL \n "<<endl;
          	 cout<<"ESTE METODO CONSISTE EN:\n 1:Generar U~U(0,1) \n 2:Regresa x=sqrt(-2ln(u))"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s1;
			 cout <<"u1i              xi"<<endl;    
			 for(no=0;no<s1;no++)
			 {
	             u=Uniforme();
                 r=sqrt((-2)*(log(u))); 
                 cout <<"u1"<<no+1<<"= "<<"     x"<<no+1<<"=sqrt(-2ln("<<u<<")= "<<r<<endl;
             }
          break;
         case 22:
         	 sUniforme();
             m=1147483647 ;
          	 cout<<"                                 ESCOGISTE EL METODO BOX-MULLER(NORMAL): x,y~N(0,1) PARA GENERACION DE VARIABLES ALEATORIAS NORMALES "<<endl;
          	 cout<<"ESTE METODO CONSISTE EN:\n Sean dos numeros aleatorios u_1,u_2 derivados de una distribucion uniforme."<<endl;
          	 cout<<"Se realizan las transformaciones: \n x=Rcos(t)=sqrt(-2*ln(u_1))cos(2*pi*u_2)\n y=Rsen(t)=sqrt(-2*ln(u_1))sen(2*pi*u_2)"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERE DE X e Y ?="<<endl;
			 cin>>s1;
			 cout<<"x_i=Rcos(t)=sqrt(-2*ln(u_1))cos(2*pi*u_2)             y_i=Rsen(t)=sqrt(-2*ln(u_1))sen(2*pi*u_2)"<<endl;
			 for(no=0;no<s1;no++)
			 {
	             u=Uniforme();
	             u2=Uniforme();
                 r=sqrt((-2)*(log(u)));
				 t=2*3.141592653589793238463*u2;
				 x=r*(cos(t));
                 y=r*(sin(t));
				 cout<<"x"<<no+1<<"= "<<r<<"("<<cos(t)<<")= "<<x<<"                           y"<<no+1<<"= "<<r<<"("<<sin(t)<<")= "<<y<<endl;
             }
           break;
         case 23:
         	 sUniforme();
             m=1147483647 ;
          	 cout<<"                                 ESCOGISTE EL METODO POLAR (MARSAGLIA-BRAG): X,Y~N(0,1) PARA GENERACION DE VARIABLES ALEATORIAS NORMALES "<<endl;
          	 cout<<"ESTE METODO CONSISTE EN:\n 1. Generar U_1,U_2~U(0,1) \n V1=(2*u1)-1 \n V2=(2*u2)-1 \n W=V1*V1+V2*V2"<<endl;
          	 cout<<"2. Si w>1 regresar a 1. \n Sino \n y=sqrt((-2ln(w))/w) \n Regresar \n Xi=V1Y \n Yi=V2Y"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERE DE X e Y ?="<<endl;
			 cin>>s1;
          	for(no=0; no<s1; no++ )
			 { 
			 do{ 
			     u=Uniforme();
			     u2=Uniforme();
			 	 r=(2*u)-1; //V1
				 t=(2*u2)-1; //V2
				 w=pow(r,2)+pow(t,2);
			 }while(w>1);//Regresa al paso 1 hasta que w<=1
			 y=sqrt((-2)*(log(w)/w));
		     cout<<"X"<<no+1<<"=("<<r<<")("<<y<<")="<<r*y<<"                         Y"<<no+1<<"=("<<t<<")("<<y<<")="<<t*y<<endl;
		    }
           break;
	       case 24:
         	 sUniforme();
             m=1147483647 ;
          	 cout<<"                                 ESCOGISTE METODO PARA GENERAR A POISSON: X~POISSON.1(lambda) "<<endl;
          	 cout<<"Sea lambda>0, entonces el siguiente metodo regresa X~POISSON.1(lambda) \n \n"<<endl;
          	 cout<<" 1. Sea i=0,    T=1   y a=-1/lambda \n 2. Generar U_{i+1} y sea T=TU_{i+1}"<<endl;
          	 cout<<"3. Si a*ln(T)>1, regresar I=i \n    sino i=i+1 y regresar al paso 2."<<endl;
			 do
			 {
			 	cout<<"INGRESA EL VALOR DE LAMBDA"<<endl;
                 cin>>r; //lambda
			 }while(r<=0); //repite el ciclo hasta que c4>0
			 t=(-1/r);//a
				 u2=1; u=1; apuestas=1; x=1; w=1; i=0;     
			     do{
			     	 u2=x;
			         u=Uniforme();
			     	 x=u*u2;//T
			     	 w=t*log(x);//a*log(x)	
			         cout<<"T=("<<u<<")("<<u2<<")= "<<x<<"      a*log(T)=("<<t<<")*(log("<<x<<")= "<<w<<endl;
					 i=i+1;	     	 
				 } while(w<=1);
				 cout<<" Como "<<w<<">1            por lo tanto    I="<<i<<endl;			 
	       break;           
           case 25:
         	 sUniforme();
             m=1147483647 ;
          	 cout<<"                                 ESCOGISTE METODO PARA GENERAR A POISSON: X~POISSON.2(lambda) "<<endl;
          	 cout<<"Este metodo consiste en: \n 1. Generar U \n 2. Sea i=0,   T=e^{-lambda}  y Suma=T "<<endl; 
          	 cout<<" 3. Si U<=Suma, regresar I=i \n    sino  T=T*(lambda/i+1), Suma=Suma+T, i=i+1 y regresar a 3. \n"<<endl;
			 do
			 {
			 	cout<<"INGRESA EL VALOR DE LAMBDA"<<endl;
                 cin>>r; //lambda
			 }while(r<=0); //repite el ciclo hasta que c4>0
             t=exp(-r); i=0; //T
 			 x=t; //SUMA            
			 for(b=0; b<1; b++ )
			 { 	
			   i=i+1;
		       u=Uniforme();
			   if(u>x)
			    { 			
			     y=x;				    
			     u2=t;
			     w=r/(i+1);
			     t=u2*w;
			     x=y+t;
			     cout<<"i="<<i<<"   u="<<u<<">"<<"SUMA="<<y<<"      T= ("<<u2<<")("<<w<<")= "<<t<<"              SUMA=SUMA+T= "<<y<<"+"<<t<<"= "<<x<<endl;
			     b=b-1;
				 }
				if (u<=x)
				{
					 cout<<"      U<=X       "<<u<<"<="<<x<<endl;
					 b=b+1;
		        }
			  } 
				cout<<"\n Como  "<<u<<"<="<<x<<" por lo tanto     I= "<<i<<endl;			  
          break;           
 		   case 18:
         	 sUniforme();
             m=1147483647 ;
			 	cout<<"                            ESCOGISTE METODO DE ACEPTACION Y RECHAZO PARA GENERAR: X~GAMMA_A_MENOR_1_1    0<ALPHA<1"<<endl;
			 	cout<<"Este metodo consiste en: \n Generar U1 y U2 con distribucion U(0,1), y sea Y=bU1. \n Si Y<=1 ir al paso 2, en otro caso ir al paso 3"<<endl;
			 	cout<<"Sea X=Y^{1/alpha}. Si U2<=e^{-X}, regresar X, en otro caso regresasr a 1"<<endl;
			 	cout<<"Sea X=-ln(Y/alpha). Si U2<=0X^{alpha-1}, regresar X, en otro caso regresar al paso 1"<<endl; 		   	
		   	 do
			 {
			 	i=0;
			 	cout<<"\n INGRESA EL VALOR DE ALPHA \n Con la condicion de que    0<alpha<1"<<endl;
                 cin>>r; //lambda
                 if (r>0 & r<1)
                 {
                 	i=3;
				 }
			 }while( i<2 ); //repite el ciclo hasta que r>0
			 t=(r+exp(1))/exp(1);
			 for (no=0;no<2;no++)
			   {			 	
			     u=Uniforme();
			     u2=Uniforme();
			     y=t*u;
			     if(y<=1)
			        {
			 	       x=pow(y,1/r);
			 	       cout<<y<<"<=1                      X="<<y<<"^{^"<<1/r<<"}= "<<x<<endl;
			 	       if(u2<=pow(exp(1),-x))
			 	        {
			 		         cout<<"u2="<<u2<<"            e^{-X}="<<pow(exp(1),-x)<<endl;
			 		         cout<<"Como      U2<="<<pow(exp(1),-x)<<"       X= "<<x<<endl;    
			 		         no=2;
				       }
				   }
			     if(y>1)
			        {

			  	       x=-log(y/r);
			 	       cout<<y<<">1"<<"X=-log("<<y<<"/"<<r<<")= "<<x<<endl;			  	       
			  	        if(u2<=pow(x,r-1))
			  	         {
			  	             cout<<"u2="<<u2<<"   X^{alpha-1}="<<pow(x,r-1)<<endl;
			  	             cout<<"Como      U2<="<<pow(x,r-1)<<"       X="<<x<<endl;
			  		         cout<<x<<endl;
			  		          no=2;
				         }
			        }
			      no=no-1;
			   }			 	
		   break;          
           case 19:
         	 sUniforme();
             m=1147483647 ;
		   	 cout<<"               METODO DE ACEPTACION Y RECHAZO PARA GENERAR: X~GAMMA_A_MAYOR_1_1     ALPHA>1"<<endl;
		   	 cout<<"Este metodo consiste en: \n 1. Generar U1 y U2 con distribucion U(0,1), y sea V=aln(u1/(1-U1), X=alpha*e^{V}, Z=U1^{2}*U2   y   W=b+c*V-X"<<endl;
		   	 cout<<" 2. Si ln(>)<=W, regresar X, en otro caso regresar a 1."<<endl;   
		   	 do
			 {
			 	i=0;
			 	cout<<"INGRESA EL VALOR DE ALPHA \n Con la condicion de que    alpha>1"<<endl;
                 cin>>a; //lambda
                 if ( a>1)
                 {
                 	i=3;
				 }
			 }while( i<2 ); //repite el ciclo hasta que r>0
			 p=1/sqrt(2*a-1);
			 r=a-log(4);
			 t=a+(1/p);
			 for(no=0; no<2;no++)
			 {
			   u=Uniforme();
			   u2=Uniforme();
			   y=p*log(u/(1-u));
			   x=a*pow(exp(1),y);
			   z1=pow(u,2)*u2;
			   w=r+(t*y)-x;
			   if(log(z1)<=w)
			   {
			   	 no=2;
			   }	
			   no=no-1;
			 }
			 cout<<"log("<<z1<<")="<<log(z1)<<"       W=b+c*V-X= "<<r<<"+("<<t<<")("<<y<<")-"<<x<<"= "<<w<<endl;
			 cout<<"Como "<<log(z1)<<"<="<<w<<endl;
			 cout<<"X= "<<x<<endl;
			 
		   break;  
		   case 20:
         	 sUniforme();
             m=1147483647 ;
		   	 cout<<"               ESCOGISTE EL METODO DE ACEPTACION Y RECHAZO PARA GENERAR: X~GAMMA    ALPHA<1"<<endl;  
		   	 cout<<"Este metodo consiste en: \n 1. Si alpha<1, generar Y~Gamma(alpha,1) con el metodo Y~GAMMA_A_MENOR_1_1  , y regresar X=Y/lambda"<<endl;
			 do{
			 	i=0;
 			     cout<<"INGRESA EL VALOR DE LAMBDA \n CON LA CONDICION DE QUE LAMBDA>1"<<endl;
			     cin>>l;  	
				 if(l>0)
				 {
				 	i=3;
		    	 }	 	
			 }while(i<2);
			  t=(a+exp(1))/exp(1);
			  cout<<"        OCUPANDO EL METODO PARA GENERAR: Y~GAMMA_A_MENOR_1_1, tenemos que: \n"<<endl;
			 for (no=0;no<2;no++)
			   {			 	
			     u=Uniforme();
			     u2=Uniforme();
			     y=t*u;
			     if(y<=1)
			        {
			 	       x=pow(y,1/a);
			 	       if(u2<=pow(exp(1),-x))
			 	        {
			 		         cout<<u2<<"<="<<pow(exp(1),-x)<<"       Y= "<<x<<endl;    
			 		         no=2;
				       }
				   }
			     if(y>1)
			        {

			  	       x=-log(y/a);		  	       
			  	        if(u2<=pow(x,a-1))
			  	         {
			 		         cout<<u2<<"<="<<pow(x,a-1)<<"        Y= "<<x<<endl;
			  		         cout<<x<<endl;
			  		          no=2;
				         }
			        }
			      no=no-1;
			   }
			   cout<<"X=Y/lambda= "<<x<<"/"<<l<<"= "<<x/l<<endl;		   
			break;
		   case 21:
         	 sUniforme();
             m=1147483647 ;
		   	 cout<<"               ESCOGISTE EL METODO DE ACEPTACION Y RECHAZO : X~Beta(4,3)"<<endl;  
		   	 cout<<" Este metodo consiste en: \n 1. Generar U1, U2 ~U(0,1) Y=(3125/108)*U2^{3}*(1-U2)^{2} \n 2. SI U1<=Y, entonces regresar U2, SINO regresar al paso 1 "<<endl;
		   	 sUniforme();
			 for(no=0; no<2;no++)
			 {

			   u=Uniforme();
			   u2=Uniforme();
			   y=((3125/108)*pow(u2,3)*pow((1-u2),2));		   
			   if(u<y)
			   {
			   	 cout<<"Como "<<u<<"<"<<y<<"      U1<Y"<<endl;
			   	 cout<<" U2= "<<u2<<endl;
			   	 no=2;
			   }	
			   no=no-1;
			 }
		   break; 			   
		   case 26:
		   	 sUniforme();
             m=1147483647 ;
	       	 cout<<"                                 ESCOGISTE EL METODO PARA GENERAR X~GEOMETRICA(p)"<<endl;
             cout<<"¿CUANTOS NUMEROS ALEATORIOS QUIERES?="<<endl;
			 cin>>s1;
			 do{ 
			     cout<<"Dame el valor de p: 0<p<1"<<endl;
			     cin>>c4;  
			  }while(c4<=0 || c4>=1);
			 cout <<"ui                      xi"<<endl;
          	for(no=0; no<s1; no++ )
			 { 
			     u=Uniforme();
			     c5=log(u);
			     c6=log(1-c4);
	             x=c5/c6; //Manda a llamar la funcion y hace la operacion
	             cout <<"u"<<no+1<<"= "<<u<<"         X"<<no+1<<"=log("<<u<<")/log(1-"<<c4<<")= "<<c5<<"/"<<c6<<" = "<<x<<endl;
	         }
		   break;
	 }
	 do{                                                                  //Me sirve para que el usuario solo ingrese las opciones que le doy 
	 	 cout<<"¿QUIERE SEGUIR PROBANDO LOS METODOS?: \n 1.CONTINUAR \n 2.SALIRR "<<endl;
	     cin>> s; 
		 system("cls");                       //Borra la pantalla
	   }while (s!=1 && s!=2);
	}while ( s==1);
}

