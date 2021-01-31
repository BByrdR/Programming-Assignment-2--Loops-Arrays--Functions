#include<iostream>
using namespace std;
void main() {
double tax,product,total,cal;
cout<<("Please Enter herer Your Product Price : ")endl;
cin>>product;
cout<<("Enter here how many Percent Sales tax in this Product : ")endl;
cin>>tax;
cal=product*(tax*0.01);
total=product+cal;
cout<<("The product price is : ")<<product<<endl;
cout<<("The sales tax for this product is : ")<<cal<<endl;
cout<<("The total of both tax and product is : ")<<total;<<endl;
}
