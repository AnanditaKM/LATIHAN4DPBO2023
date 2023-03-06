from Human import Human


class SivitasAkademik(Human):
    def __init__(self, asal_universitas="", email_edu=""):  # constractor

        self.asal_universitas = asal_universitas
        self.email_edu = email_edu
# setter getter

    def set_asal_universitas(self, asal_universitas):
        self.asal_universitas = asal_universitas

    def set_email_edu(self, email_edu):
        self.email_edu = email_edu

    def set_prodi(self, prodi):
        self.prodi = prodi

    def get_asal_universitas(self):
        return self.asal_universitas

    def get_email_edu(self):
        return self.email_edu
