#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* front = nullptr;
    Node* rear = nullptr;

   
    
    for (int j = 0; j < 5; j++) {
        int nomorPelanggan;
        cout << "Masukkan nomor pelanggan ke-" << j + 1 << ": ";
        cin >> nomorPelanggan;

        
        Node* newNode = new Node();
        newNode->data = nomorPelanggan;
        newNode->next = nullptr;

        if (front == nullptr) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    

        
   

    //Tampilkan Queue
    Node* temp = front;
    cout << "Isi Queue : ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    
    cout << "Pelanggan paling depan : " << front->data << endl;


    cout << "Pelanggan paling belakang : " << rear->data << endl;

    
    if (front == nullptr)
        cout << "Antrian Kosong" << endl;
    else 
        cout << "Antrian Tidak Kosong" << endl;

    //Dequeue 
    Node* hapus = front;
    cout << "Dilayani : " << front->data << endl;
    front = front->next;
    delete hapus;

    //Tampilkan setelah dequeue
    temp = front;
    cout << "Antrian selanjutnya : ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}