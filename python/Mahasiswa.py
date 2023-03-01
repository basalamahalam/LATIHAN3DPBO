from SivitasAkademik import SivitasAkademik

class Mahasiswa(SivitasAkademik):
    # deklarasi property private
    __nim = ""
    __fakultas = ""

    # membuat konstruktor
    def __init__(self, nik = "", nama = "", jenis_kelamin = "", asal_universitas = "", email_edu = "", nim = "", fakultas = ""):
        # memanggil konstruktor dari kelas parentnya
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        # set nim, prodi, dan fakultas
        self.__nim = nim
        self.__fakultas = fakultas
    
    # membuat getter
    def getNim(self):
        return self.__nim
    
    def getFakultas(self):
        return self.__fakultas