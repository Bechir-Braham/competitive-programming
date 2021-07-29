liste supprimer(liste L, int pos)
{
    liste courant = L;
    liste before = NULL;
    if (pos == 1) {
        L = L->suiv;
        free(courant);
        return (L);
    }
    if (pos == longueur(L)) {
        while (courant->suiv != NULL) { courant = courant->suiv; }
        free(courant->suiv);
        courant = NULL;
        return (L);
    } else {
        {
            for (int i = 1; i < pos - 1; i++) {
                before = courant;
                courant = courant->suiv;
            }
            before = courant->suiv;
            free(courant);
        }
        return (L);
    }
}
