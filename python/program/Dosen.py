from SivitasAkademik import SivitasAkademik


class Dosen(SivitasAkademik):
    def __init__(self,  NIP="",  fakultas="", pendidikan_terakhir="", keahlian=""):  # constractor
        self.NIP = NIP
        self.fakultas = fakultas
        self.pendidikan_terakhir = pendidikan_terakhir
        self.keahlian = keahlian
# setter getter

    def set_NIP(self, NIP):
        self.NIP = NIP

    def set_fakultas(self, fakultas):
        self.fakultas = fakultas

    def set_pendidikan_terakhir(self, pendidikan_terakhir):
        self.pendidikan_terakhir = pendidikan_terakhir

    def set_keahlian(self, keahlian):
        self.keahlian = keahlian

    def get_NIP(self):
        return self.NIP

    def get_fakultas(self):
        return self.fakultas

    def get_pendidikan_terakhir(self):
        return self.pendidikan_terakhir

    def get_keahlian(self):
        return self.keahlian
