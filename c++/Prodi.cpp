#include <iostream>
#include <list>
#include <string>
using namespace std;

#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Course.cpp"

class Prodi{
    private:
        string namaprodi;
        string kode;
        list<Course> data2;
        list<Mahasiswa> data;
        list<Dosen> data1;

    public:
        Prodi(){

        }

        Prodi(string namaprodi = "", string kode = "", list<Mahasiswa> data = {}, list<Dosen> data1 = {}, list<Course> data2 = {}){
            this->namaprodi = namaprodi;
            this->kode = kode;
            this->data = data;
            this->data1 = data1;
            this->data2 = data2;
        }

        string getNamaProdi(){
            return this->namaprodi;
        }

        string getKode(){
            return this->kode;
        }

        void getMahasiswa(){
            int i = 0;
            for(Mahasiswa cari:data){
                cout << "Data Mahasiswa " << ++i << endl;
                cout << "\tNIK : " << cari.getNik() << endl;
                cout << "\tNama : " << cari.getNama() << endl;
                cout << "\tJenis Kelamin : " << cari.getGender() << endl;
                cout << "\tAsal Universitas : " << cari.getAsalUniversitas() << endl;
                cout << "\tEmail : " << cari.getEmail() << endl;
                cout << "\tNIM : " << cari.getNim() << endl;
                cout << "\tFakultas : " << cari.getFakultas() << endl;
                cout << endl;
            }
        }

        void getDosen(){
            int i = 0;
            for(Dosen cari:data1){
                cout << "Data Dosen " << ++i << endl;
                cout << "\tNIK : " << cari.getNik() << endl;
                cout << "\tNama : " << cari.getNama() << endl;
                cout << "\tJenis Kelamin : " << cari.getGender() << endl;
                cout << "\tAsal Universitas : " << cari.getAsalUniversitas() << endl;
                cout << "\tEmail : " << cari.getEmail() << endl;
                cout << "\tNIP : " << cari.getNip() << endl;
                cout << "\tFakultas : " << cari.getFakultas() << endl;
                cout << "\tPendidikan Terakhir : " << cari.getPendTerakhir() << endl;
                cout << "\tKeahlian : " << cari.getKeahlian() << endl;
                cout << endl;
            }
        }

        void getCourse(){
            int i = 0;
            for(Course cari:data2){
                cout << "Data Course " << ++i << endl;
                cout << "\tMata Kuliah : " << cari.getNamaMatkul() << endl;
            }
        }
        
        void setNamaProdi(string namaprodi){
            this->namaprodi = namaprodi;
        }

        void setKode(string kode){
            this->kode = kode;
        }

        ~Prodi(){

        }
};