# Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

# import class yang ada berhubungan
from Prodi import Prodi
from Dosen import Dosen
from Mahasiswa import Mahasiswa
from Course import Course

# deklarasi variabel penampung
mhs = []

# memasukan data mahasiswa kedalam mhs
mhs.append(Mahasiswa("12345", "Asda", "Wanita", "UPI", "asda@upi.edu", "2101677", "FPMIPA"))
mhs.append(Mahasiswa("11134", "Jacob", "Pria", "UPI", "jacob@upi.edu", "2112637", "FPMIPA"))
mhs.append(Mahasiswa("12534", "Asep", "Pria", "UPI", "Asep@upi.edu", "2113151", "FPMIPA"))
mhs.append(Mahasiswa("12355", "Alman", "Pria", "UPI", "Alman@upi.edu", "2115312", "FPMIPA"))
mhs.append(Mahasiswa("16346", "Ayla", "Wanita", "UPI", "Ayla@upi.edu", "2436436", "FPMIPA"))

# deklarasi variabel
pengampu = []

# memasukkan data dosen kedalam pengampu
pengampu.append(Dosen("67890", "Dr.Sarah, M.Sc", "Wanita", "UPI", "sarah@upi.edu", "1234567", "FPMIPA", "S3", "Artifical Intelligence"))
pengampu.append(Dosen("12390", "Yahya, M.T", "Pria", "UPI", "yahya@upi.edu", "1312457", "FPMIPA", "S2", "Deep Learning"))
pengampu.append(Dosen("63467", "Didin, M.Kom", "Pria", "UPI", "didin@upi.edu", "163467", "FPMIPA", "S2", "Jaringan Komputer"))

# deklarasi variabel
matkul = []

# memasukkan data course kedalam matkul
matkul.append(Course("Artifical Intelligence"))
matkul.append(Course("Machine Learning"))
matkul.append(Course("Jaringan Komputer"))

# deklarasi variabel
prodi = []

# memasukkan data Prodi kedalam prodi
prodi.append(Prodi("Ilmu Komputer", "0123", mhs, pengampu, matkul))

# perulangan for sebanyak Prodi untuk menampilkan keluaran dengan memanggil class yang ada dalam 1 class composite
print("====================================================")
print("===============> DATA PROGRAM STUDI <===============")
print("====================================================")
for cari in prodi:
    print("Nama Program Studi :", cari.getNamaProdi(), cari.getKode())
    cari.getMahasiswa()
    cari.getDosen()
    cari.getCourse()