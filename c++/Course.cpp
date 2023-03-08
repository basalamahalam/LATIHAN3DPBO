#include <string>
using namespace std;

#ifndef COURSE_CPP_H
#define COURSE_CPP_H

class Course{
    private:
        string namamatkul;
    
    public:
        Course(){

        }

        Course(string namamatkul){
            this->namamatkul = namamatkul;
        }

        string getNamaMatkul(){
            return this->namamatkul;
        }

        void setNamaMatkul(string namamatkul){
            this->namamatkul = namamatkul;
        }

        ~Course(){
            
        }
};
#endif