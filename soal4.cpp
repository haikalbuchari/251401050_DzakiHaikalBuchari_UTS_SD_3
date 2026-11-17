    #include <iostream>
    using namespace std;


    struct Node{
        int data;
        Node* kiri;
        Node* kanan;
    };

    Node* tambah(Node* root, int data){
        if(root == NULL){
            root = new Node();
            root->data = data;
            root->kiri = NULL;
            root->kanan = NULL;
        }

        if (data < root->data){
            root->kiri = tambah(root->kiri, data);
        }

        if (data > root->data){
            root->kanan = tambah(root->kanan, data);
        }
        return root;
    }

    
    //in order
    void inOrder(Node* root){
        if (root != NULL){
            inOrder(root->kiri);
            cout << root->data << " ";
            inOrder(root->kanan);
        }
    }


    void cekAngka(Node* root, int tes){
        if (root == NULL){
            cout << "Data tidak ditemukan" << endl;
            return;
        }
        if (root->data == tes){
            cout << "Data ditemukan" << endl;
            return;
        }
        if (tes < root->data){
            cekAngka(root->kiri, tes);
        }
        else{
            cekAngka(root->kanan, tes);
        }
    }

    

    

    int main(){
        Node* root = NULL;
        int angka;
        
        cout << "Masukkan angka (-1 = stop) : ";
        cin >> angka;

        while(angka != -1){
            root = tambah(root, angka);
            cin >> angka;
        }
        

        
        cout << "Kecil ke Besar : ";
        inOrder(root);
        cout << endl;


        int cek;
        cout << "Masukkan satu angka untuk di cek : ";
        cin >> cek;
        cekAngka(root, cek);


        
    }

        