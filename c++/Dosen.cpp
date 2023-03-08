#include <string>
using namespace std;
#include "SivitasAkademik.cpp"

#ifndef DOSEN_CPP_H
#define DOSEN_CPP_H

class Dosen : public SivitasAkademik{
    private:
        string nip;
        string fakultas;
        string pendTerakhir;
        string keahlian;

    public:
        Dosen(){

        }

        Dosen(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string nip, string fakultas, string pendterakhir, string keahlian) : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu){
            this->nip = nip;
            this->fakultas = fakultas;
            this->pendTerakhir = pendterakhir;
            this->keahlian = keahlian;
        }

        string getNip(){
            return this->nip;
        }

        string getFakultas(){
            return this->fakultas;
        }

        string getPendTerakhir(){
            return this->pendTerakhir;
        }

        string getKeahlian(){
            return this->keahlian;
        }

        void setNip(string nip){
            this->nip = nip;
        }

        void setFakultas(string fakultas){
            this->fakultas = fakultas;
        }

        void setPendTerakhir(string pendterakhir){
            this->pendTerakhir = pendterakhir;
        }

        void setKeahlian(string keahlian){
            this->keahlian = keahlian;
        }

        ~Dosen(){
            
        }
};

#endif