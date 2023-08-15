#include<iostream>
using namespace std;

 int answerofthesum(int n){
    int ans = ((n -2) + 2000);
   return ans;
   }
int anwswegeter(int n ){
    int myrow = (999 - n);
    return myrow;
    }
bool check(int n){
    if(n<=999){
       return true;
      }
    else{
      return false;
    }
   } 
int totalcheck(int a , int b , int c , int d , int e ){ 
    int sumofall = a+b+c+d+e;
    cout<<" Here we go..!! "<<endl;
    cout<<"---"<<a<<"---"<<endl;
    cout<<"---"<<b<<"---"<<endl;
    cout<<"---"<<c<<"---"<<endl;
    cout<<"---"<<d<<"---"<<endl;
    cout<<"---"<<e<<"---"<<endl;
    cout<<"---"<<"+-------"<<endl;
    cout<<"   "<<sumofall<<"   "<<endl;
    cout<<"----------"<<endl;
    return sumofall;
} 

int main() {
   int answerofsum;
   int answerofsum1;
   int answerofsum2;
   int first2digit;
   int second3digit; 
   int third3digit; 

   cout<<"Welcome to the Addition Challenge! As the host, I will predict the answers to the first step of addition. However, to make it fair and ideal, I will have only two chances to get each prediction correct before revealing the next four steps of addition."<<endl;
   cout<<" Now enter the any three digit number  :"<<endl;
   cout<<"example :=  727 "<<endl;
   cin>>first2digit;
   if(check(first2digit)==true) {
   answerofsum  = answerofthesum(first2digit);
   cout << " I know what will happens in futher So, Im predicting the answer would be " << answerofsum <<" if we add 5 step of addition rules would be i will have 2 chances it ideal and fair  "<<endl;
   int second3digit; 
   cout<<" NOW enter 2nd  three  digit numbers  :"<<endl;
   cin>>second3digit;
   if(check(second3digit) == true){
   answerofsum1 =  anwswegeter(second3digit);
   cout<<"NOW its my chance : = "<<endl;
   cout<<answerofsum1<<endl;
   int third3digit; 
   cout<<" bro enter 3nd the any three  digit numbers  :"<<endl;
   cin>>third3digit;
   if(check(third3digit)==true){
   answerofsum2 =  anwswegeter(third3digit);
   cout<<"and my last chance  : = "<<endl;
   cout<<answerofsum2<<endl;
  char a ;
  cout<<" LET HAVE SAME FUN , WHAT WOULD YOU LIKE T20 to ODI matches"<<endl;
  cin>>a;
  cout<<" great to know that about you i also like "<<  a     <<" than continue with the game "<<endl;
  int total =  totalcheck(first2digit, second3digit , answerofsum1 , third3digit ,answerofsum2 );
  cout<<total<< "===" << answerofsum << " and hence i tould you "<<endl; 
    }
    }
    }
  else {
    cout<<" USER INPUT ERROR -- please check your input"<<endl;
  }
   return 0;
}