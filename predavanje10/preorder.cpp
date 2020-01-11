// Obilazak stabla
// DFS algoritmi obilaska- PREORDER
// Često se koristi za dupliciranje stabla jer prvo prikaže roditelja, a tek onda djecu
Posjeti(Cvor trenutni){
    if(trenutni == null){
        return;
    }
    Prikazi(trenutni.Vrijednost);
    Prikazi(trenutni.Lijevo);
    Prikazi(trenutni.Desno);
}