#include<iostream>
#include<conio.h>
using namespace std;
//Kachu Ful--Judgement
int totc(int n){
  //n is no. of players, totc is total no. of cards to be played.
  return 52/n;
}
void sir(int x){
  if(x%4==1)
    cout<<"K  ♠    (Spade) ";
  else if(x%4==2)
    cout<<"C  ♦ (Diamonds) ";
  else if(x%4==3)
    cout<<"F  ♣    (Clubs) ";
  else if(x%4==0)
    cout<<"L  ♥   (Hearts) ";
}
void turn(int n,int y,string *a){
  //n is no. players y is iterator
  y-=1;
  int b=y%n;
  cout<<" "<<a[b]<<"     ";
}
int noc(int tot,int z){
  if(z>tot && z%tot!=0)
    return (tot-(z%tot)+1);
  else if(z==2*tot)
      return 1;
  else
    return z;
}
int main(){
  int no,c;
  cout<<"Enter no. of Players :";
  cin>>no;
  c=totc(no);
// cout<<c<<"\n";
  string pl[no];
  for(int i=0;i<no;i++){
    cout<<"Enter name of Player ["<<i+1<<"] : ";
    cin>>pl[i];
  }
  cout<<"----------Judgement----------\n";	getch();
  for(int i=1;i<=2*c;i++){
    cout<<" "<<noc(c,i)<<" ";
    turn(no,i,pl);
    sir(i);cout<<"\n";
    getch();
  }
}
