# pembuatan class Human sebagai superclass
class Human:
    # deklarai property private
    __nik = ""
    __nama = ""
    __jenis_kelamin = ""

    # membuat konstruktor
    def __init__(self, nik, nama, jenis_kelamin):
    # set nik, nama jenis kelamin
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin
    
    # membuat getter
    def getNik(self):
        return self.__nik

    def getNama(self):
        return self.__nama
    
    def getGender(self):
        return self.__jenis_kelamin