class Human:
    def __init__(self, NIK="", nama="", jenis_kelamin=""):  # constractor
        self.NIK = NIK
        self.nama = nama
        self.jenis_kelamin = jenis_kelamin

    # Getter and Setter

    def set_NIK(self, NIK):
        self.NIK = NIK

    def set_Nama(self, nama):
        self.nama = nama

    def set_Jenis_kelamin(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin

    def get_NIK(self):
        return self.NIK

    def get_Nama(self):
        return self.nama

    def get_Jenis_kelamin(self):
        return self.jenis_kelamin
