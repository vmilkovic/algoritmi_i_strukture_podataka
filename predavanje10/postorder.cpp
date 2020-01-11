// Obilazak stabla
// DFS algoritmi obilaska- POSTORDER
// Često se koristi pri brisanju čvorova i uništenju stavla jer prvo prikaže djecu, a tek onda roditelja.
Posjeti(Cvor trenutni){
    if(trenutni == null){
        return;
    }
    Prikazi(trenutni.Lijevo);
    Prikazi(trenutni.Desno);
    Prikazi(trenutni.Vrijednost);
}