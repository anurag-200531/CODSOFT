#include <iostream>
using namespace std;
int main(){
    float a,b;
    char choice;
    cout <<"Simple Calculator"<<endl;
    cout <<"Enter any Two number"<<endl;
    cin>>a >>b;
    cout<<"a:"<<a <<",b:"<<b<<endl;
    cout<<"\n Press 1.(+) for addition"<<endl;
    cout<<"\n Press 2.(-) for subtraction"<<endl;
    cout<<"\n Press 3.(*) for multiplication"<<endl;
    cout<<"\n Press 4.(/) for Division"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch (choice)
    {
    case '1' :
        cout<<(a+b)<<endl;
        break;
    case '2' :
        cout << (a-b)<<endl;
        break;
    case '3' :
        cout << (a*b) <<endl;
        break;
    case '4':
     if (b==0){
        cout << "infinte"<<endl;
    }
    else{
        cout << (a/b)<<endl;
     }
        break;
    default:
        cout << " you choice passed way key"<<endl;
    }
    return 0;
}