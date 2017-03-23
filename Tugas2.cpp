#include <iostream>

using namespace std;

struct tnode{
int data;
tnode *next;};

class LinkedList{
public:
tnode *head;
tnode *tail;

void awal(int save){
    tnode*baru= new tnode();
    head= baru;
    tail= baru;
    baru->data= save;
    baru->next= NULL;}

void node_depan(int save){
    tnode*baru= new tnode();
    baru->data= save;
    baru->next= head;
    head= baru;}

void node_belakang(int save){
    tnode*baru= new tnode();
    tnode*pindah= new tnode();
    pindah= tail;
    baru->data= save;
    pindah->next= baru;
    baru->next= NULL;
    tail= baru;}

void hapusnode_depan(){
    tnode*dell = new tnode();
    dell= head;
    head= head->next;
    delete dell;}

void hapusnode_belakang(){
    tnode*dell= new tnode();
    tnode*cari= new tnode();
    dell= head;

    while(dell!=tail){
        cari= dell;
        dell= dell->next;}

    cari->next= NULL;
    cari= tail;
    delete dell;}

void cetak(){
    tnode*baru= new tnode();
    baru= head;

    while(baru!= NULL){
        cout<<baru->data<<" -> ";
        baru=baru->next;}

    if(baru==NULL){
        cout<<"NULL";}
    cout<<endl;}
};

int main(){
LinkedList list;
list.awal(20);
list.cetak();
list.node_depan(30);
list.cetak();
list.node_belakang(50);
list.cetak();
list.hapusnode_depan();
list.cetak();
list.hapusnode_belakang();
list.cetak();}
