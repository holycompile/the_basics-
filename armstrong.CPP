/* here's a program on armstrong number 
Eg: 153 , 1634
     cube each of the digits and finally find the sum of them to get the exact number again
*/
#include<iostream>
using namespace std;
int pro(int x){
    return (x*x*x);
}
int main()
{
    int a,sum=0;
    cout<<"Enter the number: ";
    cin>>a;
    int copy=a;
    while(a>0)
    {
        int r=a%10;
        sum+=pro(r);
        a=a/10;
    }
    if(sum==copy)
    cout<<"Yes armstrong ";
    else
    cout<<"Not a armstrong";

}
