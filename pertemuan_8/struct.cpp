#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa
{
    string nama, nim;
    float nilai;
};

int main()
{
    system("cls")

    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout<<"Masukan jumlah mahasiswa: ";
    cin>>n;

    for (int i = 0; i<n; i++)
    {
        cout<<"Mahasiswa"<<i+1<<endl;
    }
}
