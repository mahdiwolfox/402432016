#include <iostream>

using namespace std;



int main(){

cout << "enter a number: ";
int number,binery,reverse,k,numbers;
cin >> number;

    for (int i = number; i > 0; i /= 2 ){

       binery = i % 2;
        
       k = binery ;
    cout << k;
    }
int a,n,s=0;
cout << endl << " write the number again ";
cin >> numbers;
while (numbers > 0)  
{
a = numbers % 10;
s = s * 10 + a;
numbers = numbers / 10;
}
cout << s << endl;
}
//                                                         402432016 - mohammad mahdi naghian


// :,(استاد من هرکاری کردم عدد معکوس نشد






