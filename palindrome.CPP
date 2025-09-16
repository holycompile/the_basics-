/* code for palindrome number 
 Eg: 121 
  what you need to do is to reverse the digits and you will get the same number again!
  */
 #include<iostream>
using namespace std;
int main()
{
    int a,copy,rev=0;
    cout<<"Enter the number: ";
    cin>>a;
    //calculation
    copy=a;
    while(a>0)
    {
        int r=a%10;
        rev=(rev*10)+r;//reversing the number
        a=a/10;
    }
    if(copy==rev)
    cout<<"Yes palindrome"<<endl;
    else 
    cout<<"Not plaindrome"<<endl;
    return 1;


}
