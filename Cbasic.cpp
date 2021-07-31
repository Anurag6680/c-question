#include<iostream>
using namespace std;








  




int main()
{
   
   
    
    // 1  print all natural no
    // int n;
    // cin>>n;
    // for(int i=0; i<=n; i++){
    //   cout<<i<<" ";
    // }
    //  2   print all no in reverse
    //  int n;
    // cin>>n;
    // for(int i=n; i>=1; i--){
    //   cout<<i<<" ";
    // }
    // 3 print all alphabets
    // int i;
    // for(i=97; i<=122; i++){
    //   cout<<(char)i<<" ";
    // }
    // 4 print even no 1 to n
    // int n;
    // cin>>n;
    // for(int i=0; i<=n; i+=2){
    //   cout<<i<<" ";
    // }
    // 5 print odd no 1 to n
    //  int n;
    // cin>>n;
    // for(int i=1; i<=n; i+=2){
    //   cout<<i<<" ";
    // }
    // 6 sum of all natural no
    // int n;
    // cin>>n;
    // int sum=0;
    // for(int i=0; i<=n; i++){
    //   sum+=i;
    // }
    // cout<<sum<<" ";
    // 7 sull of all even no
    //  int n;
    // cin>>n;
    // int sum=0;
    // for(int i=0; i<=n; i+=2){
    //   sum+=i;
    // }
    // cout<<sum<<" ";
    // 8 sum of all odd no
    //  int n;
    // cin>>n;
    // int sum=0;
    // for(int i=0; i<=n; i++){
    //   if(i%2!=0){
    //   sum+=i;
    // }
    // }
    // cout<<sum<<" ";
    // 9 table
    // int n;
    // cin>>n;
    // for(int i=1; i<=10; i++){
    //   cout<<n<<" * "<<i<<"="<<n*i<<endl;
    // }
    // 10 count  no of digit
    // int n;
    // cin>>n;
    // int count=0;
    // do{
    //   n/=10;
    //   ++count;
    // }while(n>0);
    // cout<<count<<" ";
    // 11 find first and last digit
//     int n;
//     cin>>n;
//     int first,last;
//     first=n%10;
//     last=n;
//     while(last>10){
//       last=last/10;
//     }
// cout<<first<<last;
// 12                sum of fst and last no
//      int n;
//     cin>>n;
//     int first,last,sum;
//     first=n%10;
//     last=n;
//     while(last>10){
//       last=last/10;
//     }
//     sum=first+last;
// cout<<sum;
// 13 swap fst and last digit
// int n;
// cin>>n;
// int temp,f,l,rev=0,swa;
// temp=n;
// l=n%10;
// while(n>10)
//   n=n/10;
//   f=n;

//   n=temp/10;
//   while(n>10){
//     rev=(rev*10)+ n%10;
//     n=n/10;
//       }
// swa=l;
// while(rev>0){
//   swa=(swa*10)+rev%10;
//   rev=rev/10;
// }
// swa=swa*10+f;
// cout<<swa;
// 14 sum of digit
// int n;
// cin>>n;
// int f=0;
// while(n>0){
//  f+=n%10;
//  n/=10;
  
// }
// cout<<f;
// 15 product of digit
//  int n;
//  cin>>n;
//  int p=1;
//  while(n>0){
//    p*=n%10;
//    n/=10;
//  }
//  cout<<p;
// 16 rever a no
// int n;
// cin>>n;
// int rev=0;

// while(n!=0){
//   rev=(rev*10)+(n%10);
//   n/=10;
// }
// cout<<rev;
// 17 palindrome
// int n;
// cin>>n;
// int rev=0;
// int temp;
// temp=n;
// while(n!=0){
//   rev=(rev*10)+(n%10);
//   n/=10;
// }
// // temp=n;
// // cout<<"rev is"<<rev<<endl;
// if(rev==temp){
//   cout<<"palin";
// }
// else{
//   cout<<"not";
// }
// 18 frequency of each  digit

// int n,d;
// cin>>n>>d;
// int c=0;
// while(n>0){
//   if(n%10==d)
//   c++;
//   n=n/10;
// }
// cout<<c;
// 19 no to words
// long int n;
  //  cin>>n;
  //  int num=0,r;
  //  while(n!=0){
  //    r=n%10;
  //    num=num*10+r;
  //    n/=10;

  //  }
  //  n=num;
  //  while(n>0){
  //    r=n%10;
  //  switch(r){
  //  case 1:
  //  cout<<"one";
  //  break;
  //  case 2:
  //  cout<<"two";
  //  break;
  //  case 3:
  //  cout<<"three";
  //  break;
  //  case 4:
  //  cout<<"four";
  //  break;
   
   
  //  }
  //  n=n/10;
  //  }
//  20 ascii char
// int n;

// for(int i=65; i<=97; i++){
// cout<<"ascii no is"<<i<<"="<<(char)i<<endl;
// }
//  int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j<=n-i)
//             {
//             cout<<"  ";
//             }
//             else{
//                 cout<<"* ";
//             }
//                     }
//     cout<<endl;
//     }



// int decimal to binary
// int n;
// cin>>n;
// int rem;

// while(n>0){
//   rem=n%2;
//   cout<<rem;
//   n/=2;
// }
//binary to decimal

// 	int n;
// cin>>n;
// int rem,dec=0,b=0;
// while(n>0){
//    rem=n%10;
// n/=10;
// dec+=rem*pow(2,b);
//    ++b;
// }
// cout<<dec;










      
    




 
  
  



  return 0;
}