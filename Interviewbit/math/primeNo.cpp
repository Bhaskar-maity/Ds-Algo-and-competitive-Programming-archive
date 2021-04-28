


#include <bits/stdc++.h>
using namespace std;
 
//  //time : o(n)
//  //not gd sln, have to optimise it
// int prime(int a){
//     int f=0;
//     if(a == 0 || a==1){
//         cout<<a<<" Non -prime" <<endl;
//         return 0;
//     }
//     for(int i=2; i<a; i++){
//         if(a%i == 0){
//             f=1;
            
//             break;
//         }
//     }

//     if(f==1) cout<<a<<" Non -prime" <<endl;
//     else
//     cout<<a<<" prime" <<endl;
// }

// //-----------------------------------------------------------------
// //time - o(n/2)
// // 18
// // 2 3 4 5 6 7 8 9 (18/2)
// int prime(int a){
//     int f=0;
//     if(a == 0 || a==1){
//         cout<<a<<" Non -prime" <<endl;
//         return 0;
//     }
//     if(a == 2 ){
//         cout<<a<<"  -prime" <<endl;
//         return 0;
//     }
//     for(int i=2; i<=a/2; i++){
//         if(a%i == 0){
//             f=1;
            
//             break;
//         }
//     }

//     if(f==1) cout<<a<<" Non -prime" <<endl;
//     else
//     cout<<a<<" prime" <<endl;
// }

//-----------------------------------------------------------------------------------
// 16
// 2 4 8 16
// 14
// 2 
int prime(int a){
    int f=0;
    if(a == 0 || a==1){
        cout<<a<<" Non -prime" <<endl;
        return 0;
    }
    if(a == 2 ){
        cout<<a<<"  -prime" <<endl;
        return 0;
    }
    for(int i=2; i<=a/2; i++){
        if(a%i == 0){
            f=1;
            
            break;
        }
    }

    if(f==1) cout<<a<<" Non -prime" <<endl;
    else
    cout<<a<<" prime" <<endl;
}

 int main()
{
    //array n no
    int arr[6] = {2,4,5,15,13,67};
    for(int i=0; i<6; i++){
        prime(i);
    }
   
}