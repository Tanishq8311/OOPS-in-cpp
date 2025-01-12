// file handling is a mechanism to store the data in a file and retrieve it whenever required.
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

// int main(){
//     // file ko open karna 
//     ofstream fout;
//     fout.open("zoom.txt");  //create kar deag aur open kar dega
//     // file ko write karna
//     fout<<"Hello World"<<endl;
//     fout<<"This is a file handling program"<<endl;
//     // file ko close karna
//     fout.close(); //resource free kar dega

//     // file ko read karna
//     ifstream fin;
//     fin.open("zoom.txt");
//     string str;
//     while(fin){
//         getline(fin,str);
//         cout<<str<<endl;
//     }
//     fin.close();
//     return 0;

// }

int main(){
    vector<int> arr(5);
    cout<<"Enter 5 numbers"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    // file open
    ofstream fout;
    fout.open("numbers.txt");
    fout<<"original array"<<endl;
    for(int i=0;i<5;i++){
        fout<<arr[i]<<endl;
    }
    fout<<"Sorted array"<<endl;
    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }
    fout.close();
    // file read
    // ifstream fin;
    // fin.open("numbers.txt");
    // int x;
    // while(fin){
    //     fin>>x;
    //     cout<<x<<endl;
    // }
    // fin.close();
}