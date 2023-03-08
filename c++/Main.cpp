//library default c dan memanggil file Human.cpp
#include <iostream>
#include <string>
#include <list>
using namespace std;

// #include "Human.cpp"
// #include "SivitasAkademik.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Course.cpp"
#include "Prodi.cpp"

int main(){
    list<Mahasiswa> data;//deklarasi variabel mahasiswa

    //membuat varibel yang menampung input dari class Mahasiswa serta mengisi array tersebut dari variabel yang menampung input
    Mahasiswa mhs("00001", "Asep Balon", "Laki-Laki", "Universitas Perkomputeran", "asep@balon.upk.id", "211189", "FMIPA");
    data.push_back(mhs);
    Mahasiswa mhs1("00002", "Jacob Berotot", "Laki-Laki", "Universitas Kuli", "jacob@berotot.uk.id", "223703", "FT");
    data.push_back(mhs1);
    Mahasiswa mhs2("00003", "Yuli Ajh", "Perempuan", "Universitas Kedokteran", "yuli@ajh.ukh.id", "201276", "FK");
    data.push_back(mhs2);

    list<Dosen> data1;

    Dosen ds("67890", "Dr.Sarah, M.Sc", "Wanita", "UPI", "sarah@upi.edu", "1234567", "FPMIPA", "S3", "Artifical Intelligence");
    data1.push_back(ds);
    Dosen ds1("12390", "Yahya, M.T", "Pria", "UPI", "yahya@upi.edu", "1312457", "FPMIPA", "S2", "Deep Learning");
    data1.push_back(ds1);
    Dosen ds2("63467", "Didin, M.Kom", "Pria", "UPI", "didin@upi.edu", "163467", "FPMIPA", "S2", "Jaringan Komputer");
    data1.push_back(ds2);

    list<Course> data2;

    Course cs("Artifical Intelligence");
    data2.push_back(cs);
    Course cs1("Machine Learning");
    data2.push_back(cs1);
    Course cs2("Computer Network");
    data2.push_back(cs2);

    list<Prodi> data3;
    data3.push_back(Prodi("Ilmu Komputer", "0123", data, data1, data2));
    
    cout << "|-----------------------------------------------------|" << endl;
    cout << "|                  Data Program Studi                 |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << endl;
    for(Prodi pr:data3){
        cout << "Nama Prodi : " << pr.getNamaProdi() << endl;
        cout << "Kode Prodi : " << pr.getKode() << endl;
        cout << endl;
        pr.getMahasiswa();
        pr.getDosen();
        pr.getCourse();
    }

    return 0;
}