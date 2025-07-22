#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;
int main(){
    srand(time(0));
    int num=rand()%10+1;
    int n;

    do{
        cout<<"guess the number (1 to 10):";
        cin>>n;

        if(n>num){
            cout<<"number is too high!Try again\n ";
        }else if(n<num){
            cout<<"number is too low!Try again\n";
        }
    }  while (n!=num);

    cout<<"congratulation you guess the number correctly.\n";
    getch();
    return 0;

    
}

