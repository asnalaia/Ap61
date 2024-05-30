#include <iostream>

using namespace std;

class Mahasiswa {
    private:
        string nama, nim;
        float nilai;
    public:
        Mahasiswa(string nama, string nim, float nilai) {
            this->nama= nama;
            this->nim= nim;
            this->nilai= nilai;
        }
        void display (){
            cout<<"Nama: "<<this->nama<<endl;
            cout<<"Nim: "<<this->nim<<endl;
            cout<<"Nilai: "<<this->nilai<<endl;
        }
};
int main(){

    Mahasiswa mhs("Asna", "231401137", 90);
    mhs.display();


    
}