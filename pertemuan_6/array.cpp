include <iostream>
using namespace std;
int main()
{
    system("cls");

    string nama[5] = {Andi, Budi, Santi, Wanto, Denis};

    nama[0] = "Andi"; 
    nama[1] = "Budi"; 
    nama[2] = "Santi"; 
    nama[3] = "Wanto"; 
    nama[4] = "Denis"; 

    cout<<nama[0]<<endl;
    cout<<nama[1]<<endl;
    cout<<nama[2]<<endl;
    cout<<nama[3]<<endl;
    cout<<nama[4]<<endl;


    #include <iostream>
using namespace std;

int main()
{
    system("cls");
//     string nama [5]={"andi","budi","santi","wanto","denis"};
    
//     for(int i= 0;i<5;i++){
//         cout<<nama[i]<<endl;
//     }
//     //multidimensiona array
// int matrix[2][2]={{1,3},{2,4}};
// for (int i =0;i<2;i++){
//     for(int j=0;j<2;j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }
// string (array of characters)
string nama ="jonrio";
for(int i=0;i<3;i++){
    cout<<nama[i]<<" ";
}
for(int i=0; i< nama.length();i++){
    cout<<nama[i]<<endl;
}
}
}