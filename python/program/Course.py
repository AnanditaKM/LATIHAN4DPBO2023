class Course:
    def __init__(self, nama_matakuliah="", kode_matakuliah=""):  # constractor
        self.nama_matakuliah = nama_matakuliah
        self.kode_matakuliah = kode_matakuliah

    # Getter and Setter

    def set_nama_matakuliah(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah

    def get_nama_matakuliah(self):
        return self.nama_matakuliah

    def set_kode_matakuliah(self, kode_matakuliah):
        self.kode_matakuliah = kode_matakuliah

    def get_kode_matakuliah(self):
        return self.kode_matakuliah
