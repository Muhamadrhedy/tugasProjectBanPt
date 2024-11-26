#include <iostream>
#include <iomanip> 
#include <string>
#include <vector>
using namespace std;

struct Kurikulum {
    int id;
    string deskripsi;
    string evaluasi[5];
};

struct capaianPembelajaran {
    int id;
    string deskripsi;
    string lulusan[5];
};

int hitungKetepatanSKurikulum(){
        capaianPembelajaran capaian = {
        3, 
        "Capaian Pembelajaran: Ketepatan struktur kurikulum dalam pembentukan pembelajaran.",
        {
            "Keterkaitan antara matakuliah dengan capaian pembelajaran lulusan sehingga tidak ada capaian matakuliah yang tidak mendukung capaian lulusan.",
            "Keterkaitan antara matakuliah dengan capaian pembelajaran lulusan.",
            "Struktur kurikulum memuat keterkaitan sudah digambarkan dalam peta kurikulum.",
            "Struktur kurikulum tidak sesuai dengan capaian lulusan.",
            "Skor tidak boleh kurang dari 1."
        }
    };

    // Input nilai A, B, dan C
    float A, B, C;
    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;
    cout << "Masukkan nilai C: ";
    cin >> C;

    // Perhitungan skor
    float skor = (A + (2 * B) + (2 * C)) / 5;

    // Validasi skor tidak boleh kurang dari 2
    if (skor < 2) {
        cout << "Skor tidak valid! Skor harus minimal 2.\n";
    } else {
        cout << "---------------------------------\n";
        cout << "ID: " << capaian.id << endl;
        cout << capaian.deskripsi << endl;
        cout << "----------------------------------\n";

        for (int i = 0; i < 5; i++) {
            cout << "Evaluasi " << i + 1 << ": " << capaian.lulusan[i] << endl;
        }

        // Menampilkan skor akhir
        cout << "----------------------------------\n";
        cout << "Skor  : " << skor << endl;
    }

    return 0;
}

int nilaiSPMI(bool dokumenLegal, bool dokumenMutu, bool siklusPPEPP, bool efektivitas, bool benchmarking) {
    int skor = 0;
    if (dokumenLegal) skor++;
    if (dokumenMutu) skor++;
    if (siklusPPEPP) skor++;
    if (efektivitas) skor++;
    if (benchmarking) skor++;
    return skor;
};

int nilaiSNDIKTI(bool standarInternasional, bool semuaStandar, bool dataDiukur) {
    int skor = 0;
    if (standarInternasional) skor++;
    if (semuaStandar) skor++;
    if (dataDiukur) skor++;
    return skor;
};

int nilaiTS(bool pelaksanaanTracer, bool kegiatanTracer, bool isiKuesioner, bool penargetan, bool hasilSosialisasi) {
    int skor = 0;
    if (pelaksanaanTracer) skor++;
    if (kegiatanTracer) skor++;
    if (isiKuesioner) skor++;
    if (penargetan) skor++;
    if (hasilSosialisasi) skor++;
    return skor;
}


int main() {
    // Memanggil fungsi hitung NDTPS
    float ndtps, skorNd;
    cout << "Masukkan jumlah NDTPS: ";
    cin >> ndtps;

    // Logika perhitungan skor 
    if (ndtps >= 6) {
        skorNd = 4;
    } else if (ndtps >= 3) {
        skorNd = (2 * ndtps) / 3;
    } else {
        skorNd = 0;
    }

    // Output hasil skor 2 angka dibelakang koma
    cout << fixed << setprecision (2);
    cout << "Skor NDTPS berdasarkan input adalah: " << skorNd << endl;
    

    // Deklarasi variabel
	float ndgb, ndlk, ndtps1, pgblk, skorJA;
	
	// Input data dari pengguna
	cout << "Masukkan jumlah NDGB (Guru Besar): ";
	cin >> ndgb;
	cout << "Masukkan jumlah NDLK (Lektor Kepala): ";
	cin >> ndlk;
	cout << "Masukkan jumlah NDTPS (Dosen Tetap): ";
	cin >> ndtps1;
	
	// Hitung PGBLK
	pgblk = ((ndgb + ndlk) / ndtps1) * 100;
	
	// Tentukan Skor berdasarkan PGBLK
	if (pgblk >= 70) {
	    skorJA = 4;
	} else {
	    skorJA = 2 + ((20 * pgblk) / 7);
	}
	// Pastikan skor tidak lebih dari 4
	if (skorJA > 4) {
        skorJA = 4;
	}
	
    // Pastikan skor tidak kurang dari 2
	if (skorJA < 2) {
        skorJA = 2;
	}
	
    // Output hasil perhitungan
    cout << fixed << setprecision(2);
	    cout << "PGBLK (Persentase Guru Besar dan Lektor Kepala): " << pgblk << "%" << endl;
	    cout << "Skor Jabatan Akademik DTPS: " << skorJA << endl;

    Kurikulum kurikulum = {
        3, 
        "Kurikulum: Keterlibatan pemangku kepentingan dalam evaluasi kurikulum.",
        {
            "Melibatkan pemangku internal & eksternal secara berkala, direview pakar.",
            "Melibatkan pemangku internal & eksternal secara berkala.",
            "Hanya melibatkan pemangku internal.",
            "Tidak melibatkan pemangku manapun.",
            "Dilakukan oleh dosen program studi."
        }
    };

    // Menampilkan data
    cout << "----------------------------------\n";
    cout << "ID: " << kurikulum.id << endl;
    cout << kurikulum.deskripsi << endl;
    cout << "----------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << "Evaluasi " << i + 1 << ": " << kurikulum.evaluasi[i] << endl;
    }

        // Isi Data 
    capaianPembelajaran capaian = {
        3, 
        "capaianPembelajaran: kesesuaian capaian pembelajaran dengan profil lulusan.",
        {
            "Capaian pembelajaran turunan dari profil lulusan, sesuai hasil kesepakatan, memenuhi level KKNI, dan dimutakhirkan secara berkala",
            "Capaian pembelajaran turunan dari profil lulusan, memenuhi level KKNI, dan dimutakhirkan secara berkala.",
            "Capaian pembelajaran turunan dari profil lulusan dan memenuhi level.",
            "Capaian pembelajaran turunan dari profil lulusan dan tidak memenuhi level.",
            "Capaian pembelajaran tidak diturunkan dari profil lulusan dan tidak memenuhi level."
        }
    };

    // Menampilkan data
    cout << "---------------------------------\n";
    cout << "ID: " << capaian.id << endl;
    cout << capaian.deskripsi << endl;
    cout << "----------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << "Evaluasi " << i + 1 << ": " << capaian.lulusan[i] << endl;
    }

    hitungKetepatanSKurikulum();

        // Variabel untuk menyimpan status indikator
    bool dokumenLegal, dokumenMutu, siklusPPEPP, efektivitas, benchmarking;

    cout << "Penilaian Sistem Penjaminan Mutu Internal (SPMI)\n";
    cout << "Jawab dengan 1 (Ya) atau 0 (Tidak)\n";

    // Input data dari pengguna
    cout << "1. Apakah terdapat dokumen legal pembentukan unsur pelaksana penjaminan mutu? ";
    cin >> dokumenLegal;
    cout << "2. Apakah tersedia dokumen mutu (kebijakan SPMI, manual SPMI, standar SPMI, dan formulir SPMI)? ";
    cin >> dokumenMutu;
    cout << "3. Apakah siklus penjaminan mutu (siklus PPEPP) terlaksana? ";
    cin >> siklusPPEPP;
    cout << "4. Apakah terdapat bukti efektivitas pelaksanaan penjaminan mutu? ";
    cin >> efektivitas;
    cout << "5. Apakah terdapat external benchmarking dalam keberadaan mutu? ";
    cin >> benchmarking;

    // Hitung skor
    int skor1 = nilaiSPMI(dokumenLegal, dokumenMutu, siklusPPEPP, efektivitas, benchmarking);

    // Output hasil penilaian
    cout << "\nHasil Penilaian:\n";
    cout << "Total skor indikator yang terpenuhi: " << skor1 << " dari 5.\n";

    if (skor1 == 5) {
        cout << "Kategori: UPPS telah melaksanakan SPMI yang memenuhi 5 aspek.\n";
    } else if (skor1 == 4) {
        cout << "Kategori: UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 sampai dengan 4.\n";
    } else if (skor1 == 3) {
        cout << "Kategori: UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 sampai dengan 3.\n";
    } else if (skor1 == 2) {
        cout << "Kategori: UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 dan 2.\n";
    } else if (skor1 == 1) {
        cout << "Kategori: UPPS memiliki dokumen legal, tetapi belum memenuhi aspek lainnya.\n";
    } else {
        cout << "Kategori: UPPS belum melaksanakan SPMI.\n";
    }

        // Variabel untuk menyimpan status indikator
    bool standarInternasional, semuaStandar, dataDiukur;

    cout << "Penilaian Pelampauan SN-DIKTI oleh UPPS\n";
    cout << "Jawab dengan 1 (Ya) atau 0 (Tidak)\n";

    // Input data dari pengguna
    cout << "1. Apakah UPPS menetapkan standar mutu yang melampaui SN-DIKTI dengan daya saing internasional? ";
    cin >> standarInternasional;
    cout << "2. Apakah indikator kinerja tambahan mencakup seluruh standar yang ditetapkan? ";
    cin >> semuaStandar;
    cout << "3. Apakah data indikator kinerja telah diukur, dimonitor, dikaji, dan dianalisis untuk perbaikan berkelanjutan? ";
    cin >> dataDiukur;

    // Hitung skor
    int skor2 = nilaiSNDIKTI(standarInternasional, semuaStandar, dataDiukur);

    // Output hasil penilaian
    cout << "\nHasil Penilaian:\n";
    cout << "Total skor indikator yang terpenuhi: " << skor2 << " dari 3.\n";

    if (skor2 == 3) {
        cout << "Kategori: UPPS menetapkan standar mutu yang melampaui SN-DIKTI dan memiliki daya saing internasional.\n";
    } else if (skor2 == 2) {
        cout << "Kategori: UPPS menetapkan standar mutu yang melampaui SN-DIKTI dengan daya saing nasional.\n";
    } else if (skor2 == 1) {
        cout << "Kategori: UPPS tidak menetapkan indikator kinerja tambahan mencakup seluruh standar.\n";
    } else {
        cout << "Kategori: Tidak ada skor kurang dari 2.\n";
    }

        // Variabel untuk menyimpan status
    bool pelaksanaanTracer, kegiatanTracer, isiKuesioner, penargetan, hasilSosialisasi;

    cout << "Pelacakan ( tracer study )\n";
    cout << "Jawab dengan 1 (Ya) atau 0 (Tidak)\n";

    // Input data dari pengguna
    cout << "1. Apakah pelaksanaan terkordinasi di tingkat PT? ";
    cin >> pelaksanaanTracer;
    cout << "2. Apakah kegiatan dilakukan secara reguler tiap tahun? ";
    cin >> kegiatanTracer;
    cout << "3. Apakah kolom isi kuesioner mencakup pertanyaan inti? ";
    cin >> isiKuesioner;
    cout << "4. titik penargetan TS-4 s.d. TS-2? ";
    cin >> penargetan;
    cout << "5. Apakah hasilnya di sosialisasikan sebagai pengembangan kueikulum? ";
    cin >> hasilSosialisasi;

    // Hitung skor
    int skor3 = nilaiTS(pelaksanaanTracer, kegiatanTracer, isiKuesioner, penargetan, hasilSosialisasi);

    // Output hasil penilaian
    cout << "\nHasil Penilaian:\n";
    cout << "Total skor indikator yang terpenuhi: " << skor3 << " dari 5.\n";

    if (skor3 == 5) {
        cout << "Kategori: Pelaksanaan study telah menyelesaikan TS dan sudah memenuhi kelima apek.\n";
    } else if (skor3 == 4) {
        cout << "Kategori: Pelaksanaan study telah melaksanakan TS yang memenuhi aspek nomor 1 sampai dengan 4.\n";
    } else if (skor3 == 3) {
        cout << "Kategori: Pelaksanaan study telah melaksanakan TS yang memenuhi aspek nomor 1 sampai dengan 3.\n";
    } else if (skor3 == 2) {
        cout << "Kategori: Pelaksanaan study telah melaksanakan TS yang memenuhi aspek nomor 1 dan 2.\n";
    } else if (skor3 == 1) {
        cout << "Kategori: Pelaksanaan study terkordinasi di tingkat PT .\n";
    } else {
        cout << "Kategori: Pelaksanaan study belum melaksanakan TS.\n";
    }

    int NL1, NJ1;
    float PJ1, PBS, Prmin1, skor4;

    cout << "Penilaian Kesesuaian Bidang Kerja Lulusan\n";

    // Input data dari user
    cout << "Masukkan jumlah lulusan dalam 3 tahun terakhir (NL): ";
    cin >> NL1;
    cout << "Masukkan jumlah lulusan yang terlacak (NJ): ";
    cin >> NJ1;
    cout << "Masukkan persentase lulusan yang sesuai bidang kerja (PBS) (%): ";
    cin >> PBS;

    // Hitung PJ (persentase responden minimum)
    if (NL1 >= 300) {
        Prmin1 = 30.0;
    } else {
        Prmin1 = 50.0 - (static_cast<float>(NL1) / 300.0 * 20.0);
    }

    // Penyesuaian skor berdasarkan ketentuan PBS dan Prmin
    if (PBS >= Prmin1) {
        if (PBS >= 60.0) {
            skor4 = 4;
        } else {
            skor4 = (20.0 * PBS) / 3.0;
        }
    } else {
        PJ1 = (static_cast<float>(NL1) / NJ1) * 100.0;
        skor4 = PJ1 / Prmin1 * (20.0 * PBS) / 3.0;
    }

    // Output hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "\nHasil Penilaian:\n";
    cout << "Persentase responden minimum (Prmin): " << Prmin1 << "%\n";
    cout << "Skor akhir: " << skor4 << "\n";

    if (skor4 >= 4) {
        cout << "Kategori: Skor 4 (Sangat Baik)\n";
    } else if (skor4 >= 3) {
        cout << "Kategori: Skor 3 (Baik)\n";
    } else if (skor4 >= 2) {
        cout << "Kategori: Skor 2 (Cukup)\n";
    } else if (skor4 >= 1) {
        cout << "Kategori: Skor 1 (Kurang)\n";
    } else {
        cout << "Kategori: Skor 0 (Tidak Memadai)\n";
    }

        // Input data persentase "sangat baik", "baik", "cukup", dan "kurang" untuk 7 aspek
    vector<double> ai(7), bi(7), ci(7), di(7); // nilai persentase untuk setiap aspek
    cout << "Masukkan data persentase untuk 7 aspek:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Aspek " << i + 1 << ":\n";
        cout << "  Sangat Baik (ai): ";
        cin >> ai[i];
        cout << "  Baik (bi): ";
        cin >> bi[i];
        cout << "  Cukup (ci): ";
        cin >> ci[i];
        cout << "  Kurang (di): ";
        cin >> di[i];
    }

    // Hitung nilai TKi untuk setiap aspek
    vector<double> TKi(7);
    double totalTKi = 0;
    for (int i = 0; i < 7; i++) {
        TKi[i] = (4 * ai[i]) + (3 * bi[i]) + (2 * ci[i]) + di[i];
        totalTKi += TKi[i];
    }

    // Hitung Skor akhir
    double skor5 = totalTKi / 7;

    // Input jumlah lulusan dan pengguna lulusan
    int NL2, NJ2;
    cout << "\nMasukkan jumlah lulusan dalam 3 tahun terakhir (NL): ";
    cin >> NL2;
    cout << "Masukkan jumlah pengguna lulusan yang memberi tanggapan (NJ): ";
    cin >> NJ2;

    // Hitung persentase pengguna lulusan (PJ)
    double PJ2 = (static_cast<double>(NJ2) / NL2) * 100;

    // Hitung Prmin
    double Prmin2;
    if (NL2 >= 300) {
        Prmin2 = 30.0;
    } else {
        Prmin2 = 50.0 - ((static_cast<double>(NL2) / 300.0) * 20.0);
    }

    // Tentukan skor akhir berdasarkan PJ dan Prmin
    if (PJ2 >= Prmin2) {
        cout << "\nSkor akhir tanpa penyesuaian: " << skor5 << endl;
    } else {
        double adjustedSkor = (PJ2 / Prmin2) * skor5;
        cout << "\nSkor akhir setelah penyesuaian: " << adjustedSkor << endl;
    }

    // Menampilkan pesan printf
    printf("Program menghitung skor publikasi untuk Magister\n");

    // Input data 
    double NA1, NA2, NA3, NA4, NB1, NB2, NC1, NC2, NM;
    double a = 2.0, b = 20.0, c = 70.0; 

    cout << "Masukkan jumlah publikasi mahasiswa: \n";
    cout << "NA1 (Jurnal Nasional Tidak Terakreditasi): ";
    cin >> NA1;
    cout << "NA2 (Jurnal Nasional Terakreditasi): ";
    cin >> NA2;
    cout << "NA3 (Jurnal Internasional): ";
    cin >> NA3;
    cout << "NA4 (Jurnal Internasional Bereputasi): ";
    cin >> NA4;
    cout << "NB1 (Seminar Wilayah/Lokal/PT): ";
    cin >> NB1;
    cout << "NB2 (Seminar Nasional): ";
    cin >> NB2;
    cout << "NC1 (Media Massa Lokal): ";
    cin >> NC1;
    cout << "NC2 (Media Massa Wilayah): ";
    cin >> NC2;
    cout << "NM (Jumlah Mahasiswa pada saat TS): ";
    cin >> NM;

    // Menghitung RL, RN, dan RI
    double RL = ((NA1 + NB1 + NC1) / NM) * 100.0;
    double RN = ((NA2 + NA3 + NB2 + NC2) / NM) * 100.0;
    double RI = (NA4 / NM) * 100.0;  // Menggunakan NA4 saja untuk RI

    // Menampilkan hasil perhitungan cout
    cout << "\nNilai RL: " << RL << "%\n";
    cout << "Nilai RN: " << RN << "%\n";
    cout << "Nilai RI: " << RI << "%\n";

    // Menentukan skor berdasarkan kondisi menggunakan if, else if
    double skor6;
    if (RI >= a) {
        skor6 = 4.0;
    } else if (RI < a && RN >= b) {
        skor6 = 3.0 + (RI / a);
    } else if (RI > 0 && RI < a && RN < b) {
        skor6 = 2.0 + (2 * (RI / a)) + (RN / b) - ((RI * RN) / (a * b));
    } else if (RI == 0 && RN == 0 && RL >= c) {
        skor6 = 2.0;
    } else if (RI == 0 && RN == 0 && RL < c) {
        skor6 = (2 * RL) / c;
    } else {
        skor6 = 0.0;
    }

    // Menampilkan skor akhir
    printf("\nSkor akhir: %.2f\n",skorNd + skorJA + skor1 + skor2 + skor3 + skor4 + skor5 + skor6);


    return 0;
}
