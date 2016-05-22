//
// Created by Admin on 22.5.2016.
//

#include <iostream>
#include "Mistnosti.cpp"
#include "CteniPrikazu.cpp"
using namespace std;

class Hra {
    bool dohrano = false;
    CteniPrikazu cteniPrikazu;
public:
    int splneno = 1;
    string nazev1;
    string nazev2;
    string nazev3;
    Mistnosti *aktualniMistnost;
    Mistnosti *aula = new Mistnosti("Aula");
    Mistnosti *hlavni = new Mistnosti("mise");
    Mistnosti *spolecnaPracovna = new Mistnosti(" spolecne pracovne");
    Mistnosti *jidelna = new Mistnosti("jidelna");
    Mistnosti *zachod = new Mistnosti("na zachode");
    Mistnosti *balkon = new Mistnosti("balkon");
    Mistnosti *hala = new Mistnosti("halaa");
    Mistnosti *knihovna = new Mistnosti("knihovne");
    Mistnosti *obyvac = new Mistnosti("obyvaku");
    Mistnosti *pracovnaa = new Mistnosti("pracovne.");
    Mistnosti *pokoj = new Mistnosti("ses u sebe v pokoji :-)");
    Mistnosti *koupelna = new Mistnosti("koupelne");




    Hra() {
        vytvorDomu();
        knihy();
    }

    void mapaDommu()
    {
        const char *jidenlna[8];
        const char *WC[8];
        const char *misto[1];
        const char *mistoCesty[1];
        const char *knihy[8];
        const char *obyva[8];
        const char *spoPrac[8];
        const char *pracovna[8];
        const char *pokojTvuj[8];
        const char *koupe[8];
        jidenlna[0] = "    _ _ _ _ _   ";
        jidenlna[1] = "   |         |  ";
        jidenlna[2] = "   |         |_ ";
        if(aktualniMistnost == jidelna) {
            jidenlna[3] = "   |    x     _ ";
        }else
        {
            jidenlna[3] = "   |          _ ";
        }
        jidenlna[4] = "   | jidelna |  ";
        jidenlna[5] = "   |_ _ _ _ _|  ";
        jidenlna[6] = "                ";
        jidenlna[7] = "                ";
        misto[0] = "                ";
        mistoCesty[0] = "     ";
        WC[0] = "    _ _ _ _ _   ";
        WC[1] =        "   |         |  ";
        WC[2] =        "   |         |  ";
        if(aktualniMistnost == zachod){WC[3] =       "   |    x    |  ";}else{WC[3] =       "   |         |  ";}
        WC[4] =       "   |   W C   |  ";
        WC[5] =       "   |_ _   _ _|  ";
        WC[6] =       "       | |      ";
        WC[7] =       "       | |      ";
        for(int i = 0; i < 8; i++)
        {
            //knihy[i] = WC[i];
            if(i !=4){knihy[i] = WC[i]; koupe[i] = jidenlna[i];}else{knihy[i] = "   |knihovna |  "; koupe[i] = "   |koupelna |  ";}
            if(i == 3){if(aktualniMistnost == knihovna){knihy[i] = "   |    x    |  ";}else{knihy[i] = "   |         |  ";}if(aktualniMistnost == koupelna){koupe[i] = "   |    x     _ ";}else{koupe[i] = "   |          _ ";}}
        }
        obyva[0] = "    _ _| |_ _   ";
        obyva[1] = "   |         |  ";
        obyva[2] = "_ _|         |_ ";
        if(aktualniMistnost == obyvac){obyva[3] =       "_ _     x     _ ";}else{obyva[3] =       "_ _           _ ";}
        obyva[4] = "   | obyvak  |  ";
        obyva[5] = "   |_ _   _ _|  ";
        obyva[6] = "       | |      ";
        obyva[7] = "       | |      ";
        spoPrac[0] = "    _ _| |_ _   ";
        spoPrac[1] = "   |         |  ";
        spoPrac[2] = "_ _|spolecna |  ";
        //spoPrac[3] = "_ _     x    |  ";
        if(aktualniMistnost == spolecnaPracovna){spoPrac[3] = "_ _     x    |  ";}else{spoPrac[3] =       "_ _          |  ";}
        spoPrac[4] = "   |pracovna |  ";
        spoPrac[5] = "   |_ _ _ _ _|  ";
        spoPrac[6] = "                ";
        spoPrac[7] = "                ";
        pracovna[0] = "    _ _| |_ _   ";
        pracovna[1] = "   |         |  ";
        pracovna[2] = "   |         |  ";
        if(aktualniMistnost == pracovnaa){pracovna[3] =       "   |    x    |  ";}else{pracovna[3] =       "   |         |  ";}
        pracovna[4] = "   |pracovna |  ";
        pracovna[5] = "   |_ _   _ _|  ";
        pracovna[6] = "       | |      ";
        pracovna[7] = "       | |      ";
        pokojTvuj[0] = "    _ _| |_ _   ";
        pokojTvuj[1] = "   |         |  ";
        pokojTvuj[2] = "_ _|         |  ";
        if(aktualniMistnost == pokoj){pokojTvuj[3] =       "_ _     x    |  ";}else{pokojTvuj[3] =       "_ _          |  ";}
        pokojTvuj[4] = "   |  pokoj  |  ";
        pokojTvuj[5] = "   |_ _ _ _ _|  ";
        pokojTvuj[6] = "                ";
        pokojTvuj[7] = "                ";

        for(int i = 0; i < 8; i++)
        {
            cout << misto[0] << WC[i] << knihy[i] << endl;
        }
        for(int i = 0; i < 8; i++)
        {

            cout << jidenlna[i] << obyva[i] << spoPrac[i] << endl;
        }
        for(int i = 0; i < 8; i++)
        {
            cout << misto[0] << pracovna[i] << endl;
        }
        for(int i = 0; i < 8; i++)
        {
            cout << koupe[i] << pokojTvuj[i] << endl;
        }
    }
    void knihy()
    {
        this->nazev1 = "DoctorWho";
        this->nazev2 = "Zaklinac";
        this->nazev3 = "PanPrstenu";
    }
    void uvod() {
        string prikazzz;
        cout << "Hotovo, HEUREKA !" << endl;
        cout << "Asi jsem prave prisel na to, jak cestovat casoprostorem." << endl;
        cout << "(zatim avsak jen do minulosti)" << endl;
        cout << "Jen jestli funguje." << endl;
        cout << "Vyzkousime, prvni vylet vcera v kine davali Kapitan Amerika: Obcanska valka," << endl;
        cout << "ja pracoval na tomto stroji, jdu vcera do kina." << endl;
        cout << "Pro vyzkouseni napis 'vyzkouset'" << endl;
        cin >> prikazzz;
        if (prikazzz == "vyzkouset") {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Filmek se libil a ted zas do pritomnosti" << endl;
            cout << "Pro navrat do pritomnosti napis'pritomnost'" << endl;
            cin >> prikazzz;
            if (prikazzz == "pritomnost") {
                cout << "ses u sebe v pokoji." << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                rozhodovani1();
            }
        }
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
    }
    void rozhodovani1()
    {
        cout << "Nebylo by super moc ovlivnit dejny i po jejich ubehnuti ?" << endl;
        string napis;
        cin >> napis;
        if (napis == "ne") {
            dohrano = true;
        } else if (napis == "ano") {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "našel jsi lidi, kteří chtějí tké měnit dějiny.\n"
                    "Někteří z nich budou kontrolovat změny v událostech" <<endl;
            cout << "Pro cteni napis 'cist' a nazev titulu (lze jen v knihovne)." << endl;
            cout << "napoveda pokazdy kdyz chces jit jinam napis 'jdi' a smer " << endl;
            vypisMoznosti();
        }else{
            cout << "zkus to znova" << endl;
        }
    }

    void mise() {
        Mistnosti *vchod = new Mistnosti("vchod");
        Mistnosti *hala = new Mistnosti("hala");
        Mistnosti *personal = new Mistnosti("personal");
        Mistnosti *kuchynee = new Mistnosti("kuchyn");
        Mistnosti *hlavniHala = new Mistnosti("hlani hala");
        /**
        Mistnosti * = new Mistnosti();
        Mistnosti * = new Mistnosti();
        Mistnosti * = new Mistnosti();
        Mistnosti * = new Mistnosti();
        Mistnosti * = new Mistnosti();
         */
        jidelna->pridejVychod("vychod", vchod);
        vchod->pridejVychod("zapad", jidelna);
        vchod->pridejVychod("sever", hala);
        hala->pridejVychod("jih", vchod);
    }

    void vytvorDomu() {

        pokoj->pridejVychod("sever", pracovnaa);
        //pokoj->pridejVychod("", koupelna);

        pracovnaa->pridejVychod("jih", pokoj);
        pracovnaa->pridejVychod("sever", obyvac);

        koupelna->pridejVychod("zapad", pokoj);

        obyvac->pridejVychod("zapad", spolecnaPracovna);
        obyvac->pridejVychod("sever", zachod);
        obyvac->pridejVychod("jih", pracovnaa);
        obyvac->pridejVychod("vychod", jidelna);

        jidelna->pridejVychod("zapad", obyvac);


        zachod->pridejVychod("jih",obyvac);

        spolecnaPracovna->pridejVychod("vychod", obyvac);
        spolecnaPracovna->pridejVychod("sever", knihovna);

        knihovna->pridejVychod("jih",spolecnaPracovna);
        knihovna->pridejAkci("DoctorWho\n");
        knihovna->pridejAkci("Zaklinac\n");
        knihovna->pridejAkci("PanPrstenu\n");

        pokoj->pridejVychod("vychod", koupelna);

        //pracovna.pridejVychod("jih", &pokoj);

        aktualniMistnost = knihovna;
    }

    void hraj() {
        vypisUvitani();
        while (!dohrano) {
            Prikaz *prikaz = cteniPrikazu.getPrikaz();
            dohrano = aktualniPrikaz(*prikaz);
        }
    }

    void vypis() {
        string prikaz;
        string prikazO = "spustit";
        cin >> prikaz;
        if (prikaz == prikazO) {
            cout << "WoW prvni krok k dohrani dobrodruzstvi splnen" << endl;
            cout << "Vitej ve hre" << endl;
        } else {
            cout << "Proste napis: 'spustit'" << endl;
            vypis();
        }
    }

    void vypisUvitani() {
        cout << "Z vaseho uctu bylo strzeno 10'000 Korun " << endl;
        cout << endl;
        cout << "Gratuluji k zakoupeni teto hry" << endl;
        cout << "Preji prijemnou zabavu." << endl;
        cout << endl;
        cout << endl;
        cout << "pro spusteni napis 'spustit'" << endl;
        vypis();
        uvod();
    }


    void vypisMoznosti() {
        mapaDommu();
        cout << "Ses v " + aktualniMistnost->poppis() << endl;
        cout << "Akce:" << endl;
        aktualniMistnost->getAkce();
        cout << "Vychody: ";
        vychody();


    }

    void vychody() {
        aktualniMistnost->getVychody();
        cout << endl;
    }

    void cistKnihu(Prikaz &prikaz)
    {
        if(nazev1 == prikaz.getDruhySlovo())
        {
            cout << "bn sihbiuhersilbiuslhiblhsi";
        }
        else if(nazev2 == prikaz.getDruhySlovo())
        {
            cout << endl;
        }
        else if(nazev3 == prikaz.getDruhySlovo())
        {
            cout << "necco";
        }
    }
    bool aktualniPrikaz(Prikaz &prikaz) {
        bool chcesUkoncitHru = false;
        if (prikaz.nevimPrikaz()) {
            cout << "nevim, co myslis, pis znova." << endl;
            return false;
        }
        string prikazovySlovo = prikaz.getPrikazovySlovo();
        if (prikazovySlovo == "pomoc") {
            vypisPomoc();

        } else if (prikazovySlovo == "jdi") {
            jdiDoMistnosti(prikaz);
        } else if (prikazovySlovo == "cist"){
            cistKnihu(prikaz);
        }else if (prikazovySlovo == "vypnout") {
            chcesUkoncitHru = vypnout(prikaz);
        }
        return chcesUkoncitHru;
    }

    void vypisPomoc() {
        mapaDommu();
        cout << aktualniMistnost->poppis() << endl;
        cout << endl;
        cout << "Muzes pouzit vychody: ";
        aktualniMistnost->getVychody();
        cout << "nezapomen, k jdi pripsat i smer" << endl;
    }

    int misee = 1;

    void jdiDoMistnosti(Prikaz &prikaz) {
        /**
        if (aktualniMistnost == hlavni && misee == 1) {
            mise();
            spolecnaPracovna->uberVychod();
            this->misee++;
            this->splneno++;
        }
         */

        string rizeni = prikaz.getDruhySlovo();

        Mistnosti *dalsiMistnost;
        if (splneno == 1) {
            spolecnaPracovna->pridejVychod("mise", hala);
        }
        if (aktualniMistnost->jeV(rizeni)) {

            dalsiMistnost = aktualniMistnost->getVychod(rizeni);
            aktualniMistnost = dalsiMistnost;
            if(aktualniMistnost == knihovna || aktualniMistnost == spolecnaPracovna || aktualniMistnost == obyvac || aktualniMistnost == zachod || aktualniMistnost == jidelna || aktualniMistnost == pracovnaa || aktualniMistnost == pokoj || aktualniMistnost == koupelna) {
                mapaDommu();
            }
            cout << "Nachazis se v "+aktualniMistnost->poppis()+"" << endl;
            cout << "Vychody: ";
            vychody();
            cout << endl;
        }
    }

    bool vypnout(Prikaz &prikaz) {
        if (!prikaz.maDruhySlovo()) {
            cout << "vypnout co ?";
            return false;
        } else {
            return true;
        }
    }
};