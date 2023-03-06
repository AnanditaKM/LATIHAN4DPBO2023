class Prodi:

    def __init__(self, nama_prodi="", kode=""):  # constractor
        self.nama_prodi = nama_prodi
        self.kode = kode
        self.course = []
        self.mahasiswa = []
        self.dosen = []

    # Getter and Setter

    def set_nama_prodi(self, nama_prodi):
        self.nama_prodi = nama_prodi

    def set_kode(self, kode):
        self.kode = kode

    def get_nama_prodi(self):
        return self.nama_prodi

    def get_kode(self):
        return self.kode
