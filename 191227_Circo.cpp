#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int acientos [25] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
void sillas ();
int llenado_silla (int n);
int luga (int lugar);

int main(int argc, char** argv)
{
     sillas ();
	 return 0;
}

void sillas ()
{
	 int seleccion,r,n;
	 int lugares=25;
	 
	 for (int z=0;z<25;z++)
	 {
		 cout <<"los acientos disponible son:\t"<<acientos[z]<<endl;
	 }
	 cout<<"el total de los acientos disponible son:"<<lugares<<endl;
	 while (seleccion!=1 && seleccion !=0 )
	 { 
		 do 
		 {
			 cout << "cuantos acientos deseas comprar"<<endl;
			 cin >>n;
		 }while (n<=0 || n>25);
		     
	     r=llenado_silla (n);
		 do
		 {
			 cout <<"deseas realizar otra compra o si ya iniciara la funcion? si (2) o no (1):"<<endl;
			 cin>>seleccion;
		 }while (seleccion!=1 && seleccion!=2); 
		 lugares=lugares-n;
		 cout<<" los asientos disponible son:"<<lugares<<endl;
			 	 
	 }	
}

int llenado_silla (int n)
{
	 int lugar,i;
	 
	 for (int z=0;z<n;z++)
	 {
		do
		{
			cout << "que asientos desea comprar? "<<endl;
			cin >>lugar;
			i=luga(lugar);
			acientos[i]=0;
		}while (lugar<0 || lugar>25);
	 	
			 
	
	}
		 
	 for (i=0;i<25;i++)
	 {
		 if (acientos[i]!=0)
		 {
		  	 cout <<"los acientos disponible son:\t"<<acientos[i]<<endl;
		 }	   
	 }
	 	 
}

int luga (int lugar)
{
	 int lugares;
	 lugares=lugar-1;
	 return lugares;
}
