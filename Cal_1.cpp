# include<iostream> 
# include<stdio.h>
# include<math.h> 
using namespace std; 
int main() { 
float a,b,t,c,s,g,x; 
int z; 

cout<<"Concrete and Rod\n"; 
cout<<"---------------------------------------------------\n"; 
cout<<"Operations "; 
cout<<"------------------------------------------------\n"; 
cout<<"1: Concrete Specification \n"; 
cout<<"2: Rod Specification \n"; 
cout<<"3: Brick composition \n";
cout<<"Enter operation no: ";
cin>>z;  
switch(z) 
{ 
case 1: 
cout<<"Enter length (in feet): "; 
cin>>a; 
cout<<"Enter breadth (in feet): "; 
cin>>b; 
cout<<"Enter thickness (in feet): "; 
cin>>t;
cout<<"Total wet volume of concrete: "<<a*b*t<<" cubic feet\n";
x=1.5*a*b*t*0.0283168;
cout<<"Total dry volume of concrete: "<<x<< " cubic meter\n";
cout<<"Enter cement ratio : ";
cin>>c;
cout<<"Enter sand ratio : ";
cin>>s;
cout<<"Enter gravel ratio : ";
cin>>g;
cout<<"Cement : "<<(c*(x/(c+s+g)))*30*50<<" kg\n";
cout<<"Sand : "<<s*(x/(c+s+g))<<" cubic meter\n";
cout<<"Gravel : "<<g*(x/(c+s+g))<<" cubic meter\n";
break; 
case 2: 
cout<<"Rod diameter in mm : "; 
cin>>a; 
cout<<"Length in feet : "; 
cin>>b;
cout<<"The weight of rod is: "<<(a*a*b)/533<<" kg\n";
break; 
case 3:
cout<<"Enter length in inch: ";
cin>>a;
cout<<"Enter breadth in inch: ";
cin>>b;
cout<<"Enter thickness inch: ";
cin>>t;
x=(1.5*a*b*t)/1728;
cout<<"The dry volume of brick is: "<<x<<" cubic foot\n";
cout<<"Fly ash: "<<(0.6*x)*54*0.453592<<" kg\n";
cout<<"Sand: "<<0.15*x*0.0283168<<" cubic meter\n";
cout<<"Sand dust: "<<0.15*x*0.0283168<<" cubic meter\n";
cout<<"Cement: "<<0.1*x*0.0283168*30*50<<" kg\n";
break;
return 0;
} 
}


