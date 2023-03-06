from SivitasAkademik import SivitasAkademik


class Mahasiswa(SivitasAkademik):
    def __init__(self,  NIM="",  fakultas="", prodi=""):  # constractor

        self.NIM = NIM
        self.fakultas = fakultas
        self.prodi = prodi
# setter getter

    def set_NIM(self, NIM):
        self.NIM = NIM

    def set_fakultas(self, fakultas):
        self.fakultas = fakultas

    def set_prodi(self, prodi):
        self.prodi = prodi

    def get_Nim(self):
        return self.NIM

    def get_fakultas(self):
        return self.fakultas

    def get_prodi(self):
        return self.prodi
