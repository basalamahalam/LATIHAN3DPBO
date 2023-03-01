# import class yang saling berhubungan (inheritance)
from SivitasAkademik import SivitasAkademik

class Dosen(SivitasAkademik):
    # deklarasi property private
    __nip = ""
    __fakultas = ""
    __pend_terakhir = ""
    __keahlian = ""

    # membuat konstruktor
    def __init__(self, nik = "", nama = "", jenis_kelamin = "", asal_universitas = "", email_edu = "", nip = "", fakultas = "", pendterakhir = "", keahlian = ""):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pend_terakhir = pendterakhir
        self.__keahlian = keahlian

    # membuat getter
    def getNip(self):
        return self.__nip
    
    def getFakultas(self):
        return self.__fakultas
    
    def getPendterakhir(self):
        return self.__pend_terakhir
    
    def getKeahlian(self):
        return self.__keahlian

