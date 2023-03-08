// Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

// #ifndef HUMAN.H

#include <iostream>
#include <string>

using namespace std;

#ifndef HUMAN_CPP_H
#define HUMAN_CPP_H

class Human{//pembuatan class Human sebagai parent / superclass
    private://membuat property private
        string nik;
        string nama;
        string jenis_kelamin;
    
    public://membuat property public
        Human(){

        }

        Human(string nik, string nama, string jenis_kelamin){//membuat konstruktor
            //set nik, nama , jenis kelamin
            this->nik = nik;
            this->nama = nama;
            this->jenis_kelamin = jenis_kelamin;
        }

        //membuat getter
        string getNik(){
            return this->nik;
        }

        string getNama(){
            return this->nama;
        }

        string getGender(){
            return this->jenis_kelamin;
        }

        //membuat setter
        void setNik(string nik){
            this->nik = nik;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        void setGender(string jenis_kelamin){
            this->jenis_kelamin = jenis_kelamin;
        }

        ~Human(){

        }
};

#endif