#include <string>
#include "Human.cpp"
using namespace std;

#ifndef SIVITASAKADEMIK_CPP_H
#define SIVITASAKADEMIK_CPP_H

class SivitasAkademik : public Human{//membuat class (inheritance) sebagai sub class
    private ://membuat property private
        string asal_universitas;
        string email_edu;
    
    public ://membuat property public
        SivitasAkademik(){

        }

        SivitasAkademik(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu )//membuat konstruktor
        : Human(nik, nama, jenis_kelamin){//memanggil konstruktor Human / parent untuk mengisi variabel variabel didalamnya
            //set asal univ, dan email
            this->asal_universitas = asal_universitas;
            this->email_edu = email_edu;
        }

        //membuat getter
        string getAsalUniversitas(){
            return this->asal_universitas;
        }

        string getEmail(){
            return this->email_edu;
        }

        //membuat setter
        void setAsalUniversitas(string asal_universitas){
            this->asal_universitas = asal_universitas;
        }

        void setEmail(string email_edu){
            this->email_edu = email_edu;
        }

        ~SivitasAkademik(){

        }
};

#endif