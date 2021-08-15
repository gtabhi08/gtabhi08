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
cout<<"Cement : "<<c*(x/(c+s+g))<<" cubic meter\n";
cout<<"Sand : "<<s*(x/(c+s+g))<<" cubic meter\n";
cout<<"Gravel : "<<g*(x/(c+s+g))<<" cubic meter\n";
break; 
case 2: 
cout<<"Rod diameter in mm : "; 
cin>>a; 
cout<<"Length in feet : "; 
cin>>b;

if(a=6)
{
cout<<"The amount is : "<<b*0.675<<" kg\n";
}
else if(a=8)
{
cout<<"The amount is : "<<b*0.120<<" kg\n";
}
else if(a=10)
{
cout<<"The amount is : "<<b*0.188<<" kg\n";
}
else if(a=12)
{
cout<<"The amount is : "<<b*0.270<<" kg\n";
}
else if(a=16)
{
cout<<"The amount is : "<<b*0.480<<" kg\n";
}
else if(a=20)
{
cout<<"The amount is : "<<b*0.751<<" kg\n";
}
else if(a=25)
{
cout<<"The amount is : "<<b*1.174<<" kg\n";
}
else if(a=32)
{
cout<<"The amount is : "<<b*1.920<<" kg\n";
break;
} 
return 0;
} 
}


