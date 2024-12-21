#include<iostream>
using namespace std;

void printcounting(){
    for(int i=1;i<=100;i++){
        cout<<i<<endl;
    }
}
int SimpleInterest(int p,int r,int t){
    int si=(p*r*t)/100;
    return si;
}
void PrimeNumber(){
    int i;
    int j;
    for( i=2;i<=100;i++){
        for( j=1; j<i;j++){
            if(i%j==0){
            break;
        }  
    }
    if(i==j){
            cout<<i<<" ";
        }

    }
}
bool voting(int age){
    if(age>=18){
       cout<<" you are eligible for vote "<<endl;
    }
    else{
       cout<<" you are not eligible for vote "<<endl;
    }

}
int sipcalculator(int a,int b){
    char op;
    cout<<"enter the operator are +,-,*,%,/ :"<<endl;
    cin>>op;
    switch (op){
        case '+' :cout<<a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        case '%':cout<<a%b<<endl;
        break;
        default : cout<<" unavaiable operator"<<endl;
    }
}
int main (){
    //printcounting();
    //int p,r,t;
    //cin>>p>>r>>t;
   // int SI= SimpleInterest(p,r,t);
   // cout<<" simple interest = "<<SI<<endl;
   //PrimeNumber();
   //int age;
   //cout<<" enter age of voter : "<<endl;
   //cin>> age;
  // voting(age);
  int a;
  int b;
  cout<<" enter the value of a and b :";
  cin>>a>>b;
  sipcalculator(a,b);
   return 0;
}

   