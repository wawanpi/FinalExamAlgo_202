#include <iostream>
#include <string>
using namespace std;
class Node {
public:
	//isi disini
	int jumlah;
	string nama;
	Node* next;
	Node* prev;
	
};
class ManajemenProduk {
private:
	Node* head;

public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);

		//isi disini
		Node* newNode = new Node();                                 
		newNode-> jumlah= jumlah;                                       
		newNode->nama = nama;
		if (head == NULL || jumlah <= head->jumlah) {
			if (head != NULL && jumlah == head->jumlah) {
				cout << "\nDuplicate number not Allowed" << endl;
				return;
			}
			newNode->next = head;
			if (head != NULL)
				head->prev = newNode;
			newNode->prev = NULL;
			head = newNode;
			return;


			cout << "Produk berhasil ditambahkan!" << endl;
		}


		cout << "Produk berhasil ditambahkan!" << endl;
	}
	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			//isi disini

		}
	}
	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				//isi disini
				Node* prev, * curr;
				prev = curr = NULL;
				cout << "\nMasukan nama produk yang ingin dicari : ";
				string targetNama;
				cin >> targetNama;

			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}

	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;
		//isi disini


	}
};
int main() {
	ManajemenProduk obj;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			obj.tambahProduk();
			break;
		case 2:
			obj.tampilkanSemuaProduk();
			break;
		case 3:
			obj.cariProdukByNama();
			break;
		case 4:
			obj.algorithmaSortByJumlahProduk();
			break;
		case 5:
			return 0;
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}




//2.Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan? (10 Poin)
// menambhakan produk  , menampilkan semua produk , mencari produk berdasarkan nama , mencari produk berdasarkan jumlah. dan menggunkan link list karna menggunakan pointer
//3. Bagaimana cara menyelesaikan masalah sesuai gambar diatas pada algorithma queue menggunakan array ? Jelaskan!(15 Poin)
// membuat array dan memebrikan front untuk item yang paling depan dan rare untuk paling blakang
//4. Jelaskan pada saat bagaimana harus menggunakan algorithma Stack? ( 15 Poin)
//	saat membuat program yang memebrikan nilai yang akhir debrikan dan nilai akhir juga yang kelura seperti tumpukan baju
//5. Perhatikan gambar berikut: (20 Poin)
//
//a. Seberapa banyak kedalaman yang dimiliki struktur tersebut?
// 5
//b.Bagaimana cara membaca struktur pohon di atas ? (Pilih salah satu metode yaitu Inorder, Preorder atau Postorder Traversal)
// inorder

