# inheritance (pembuatan sub class)
from Human import Human

class SivitasAkademik(Human):
    # deklarasi property private
    __asal_universitas = ""
    __email_edu = ""

    # membuat konstruktor
    def __init__(self, nik, nama, jenis_kelamin, asal_universitas, email_edu):
        # memanggil konstruktor dari kelas parent/superclass
        super().__init__(nik, nama, jenis_kelamin)
        # set asal univ, dan email
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
    
    # membuat getter
    def getAsalUniversitas(self):
        return self.__asal_universitas
    
    def getEmail(self):
        return self.__email_edu