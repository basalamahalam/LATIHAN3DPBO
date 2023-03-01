# import class yang saling berhubungan (Composite)
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course

class Prodi:
    # deklarasi property private
    __nama_prodi = ""
    __kode = ""
    __course = []
    __mahasiswa = []
    __dosen = []

    # membuat konstruktor
    def __init__(self, namaprodi, kode, Mahasiswa = [], Dosen = [], Course = []):
        self.__nama_prodi = namaprodi
        self.__kode = kode
        self.__mahasiswa = Mahasiswa
        self.__dosen = Dosen
        self.__course = Course
    
    # membuat getter
    def getNamaProdi(self):
        return self.__nama_prodi
    
    def getKode(self):
        return self.__kode
    
    def getMahasiswa(self):
        for i, data in enumerate(self.__mahasiswa):
            print("Data Mahasiswa ", i+1)
            print("NIK :", data.getNik())
            print("Nama :", data.getNama())
            print("Jenis Kelamin :", data.getGender())
            print("Asal Universitas :", data.getAsalUniversitas())
            print("Email :", data.getEmail())
            print("NIM :", data.getNim())
            print("Fakultas :", data.getFakultas())
            print("\n")

    def getDosen(self):
        for i, data in enumerate(self.__dosen):
            print("Data Dosen ", i+1)
            print("NIK :", data.getNik())
            print("Nama :", data.getNama())
            print("Jenis Kelamin :", data.getGender())
            print("Asal Universitas :", data.getAsalUniversitas())
            print("Email :", data.getEmail())
            print("NIP :", data.getNip())
            print("Fakultas :", data.getFakultas())
            print("Pendidikan Terakhir :", data.getPendterakhir())
            print("Keahlian :", data.getKeahlian())
            print("\n")

    def getCourse(self):
        for i, data in enumerate(self.__course):
            print("Data Course ", i+1)
            print("Mata Kuliah :", data.getNamamatkul())
        print("\n")