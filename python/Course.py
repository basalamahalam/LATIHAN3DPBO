class Course:
    # deklarasi property private
    __nama_matkul = ""

    # membuat konstruktor
    def __init__(self, namamatkul = ""):
        self.__nama_matkul = namamatkul
    
    # membuat getter
    def getNamamatkul(self):
        return self.__nama_matkul