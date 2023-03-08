#include <string>
#include "SivitasAkademik.cpp"
using namespace std;

#ifndef MAHASISWA_CPP_H
#define MAHASISWA_CPP_H

class Mahasiswa : public SivitasAkademik{//membuat class (inheritance) sebagai sub class
    private://membuat property private
        string nim;
        string fakultas;

    public://membuat property public
        Mahasiswa(){

        }

        Mahasiswa(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string nim, string fakultas) : SivitasAkademik(nik,  nama,  jenis_kelamin, asal_universitas, email_edu){
            // set nim, fakultas, dan prodi
            this->nim = nim;
            this->fakultas = fakultas;
        }

        // membuat getter 
        string getNim(){
            return this->nim;
        }

        string getFakultas(){
            return this->fakultas;
        }

        //membuat setter
        void setNim(string nim){
            this->nim = nim;
        }

        void setFakultas(string fakultas){
            this->fakultas = fakultas;
        }

        ~Mahasiswa(){

        }
        
};

#endif