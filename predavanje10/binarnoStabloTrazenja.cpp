nadji(Cvor trenutni, Podatak trazeni){
    if(trenutni == null){
        return null;
    }
    if(trenutni.vrijednost == trazeni){
        return trenutni;
    }
    if(trazeni < trenutni.vrijednost){
        return nadji(trenutni.lijevo, trazeni);
    } else {
        return nadji(trenutni.desno, trazeni)
    }
}