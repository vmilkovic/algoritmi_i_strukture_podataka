// Obilazak stabla
// DFS algoritmi obilaska- INORDER
// Često se koristi na binarnim stablima traženja (BST) budući da vraća vrijednost u sortiranom obliku (definiranom samim BST-om)
Posjeti(Cvor trenutni){
    if(trenutni == null){
        return;
    }
    Prikazi(trenutni.Lijevo);
    Prikazi(trenutni.Vrijednost);
    Prikazi(trenutni.Desno);
}