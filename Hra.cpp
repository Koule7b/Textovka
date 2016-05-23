//
// Created by Admin on 22.5.2016.
//

#include <iostream>
#include "Mistnosti.cpp"
#include "CteniPrikazu.cpp"
#include <fstream>
#include <cstdio>
#include <cstdlib>


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
    Mistnosti *smer = new Mistnosti("na rozcestniku");
    Mistnosti *cestaPredDomem = new Mistnosti("pred svym domem");
    Mistnosti *lesan = new Mistnosti("v lese, ztratil ses");
    Mistnosti *cestaDolu = new Mistnosti("na ceste.");
    Mistnosti *cestaKHradu = new Mistnosti ("na ceste k hradu.");
    Mistnosti *kOhnisti = new Mistnosti("na ceste k ohnisti.");
    Mistnosti *ohnistee = new Mistnosti("u ohniste.");


    Hra() {
        vytvorDomu();
        knihy();
    }

    void mapaDommu() {
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
        if (aktualniMistnost == jidelna) {
            jidenlna[3] = "   |    x     _ ";
        } else {
            jidenlna[3] = "   |          _ ";
        }
        jidenlna[4] = "   | jidelna |  ";
        jidenlna[5] = "   |_ _ _ _ _|  ";
        jidenlna[6] = "                ";
        jidenlna[7] = "                ";
        misto[0] = "                ";
        mistoCesty[0] = "     ";
        WC[0] = "    _ _ _ _ _   ";
        WC[1] = "   |         |  ";
        WC[2] = "   |         |  ";
        if (aktualniMistnost == zachod) { WC[3] = "   |    x    |  "; } else { WC[3] = "   |         |  "; }
        WC[4] = "   |   W C   |  ";
        WC[5] = "   |_ _   _ _|  ";
        WC[6] = "       | |      ";
        WC[7] = "       | |      ";
        for (int i = 0; i < 8; i++) {
            //knihy[i] = WC[i];
            if (i != 4) {
                knihy[i] = WC[i];
                koupe[i] = jidenlna[i];
            } else {
                knihy[i] = "   |knihovna |  ";
                koupe[i] = "   |koupelna |  ";
            }
            if (i == 3) {
                if (aktualniMistnost ==
                    knihovna) { knihy[i] = "   |    x    |  "; } else { knihy[i] = "   |         |  "; }
                if (aktualniMistnost ==
                    koupelna) { koupe[i] = "   |    x     _ "; } else { koupe[i] = "   |          _ "; }
            }
        }
        obyva[0] = "    _ _| |_ _   ";
        obyva[1] = "   |         |  ";
        obyva[2] = "_ _|         |_ ";
        if (aktualniMistnost == obyvac) { obyva[3] = "_ _     x     _ "; } else { obyva[3] = "_ _           _ "; }
        obyva[4] = "   | obyvak  |  ";
        obyva[5] = "   |_ _   _ _|  ";
        obyva[6] = "       | |      ";
        obyva[7] = "       | |      ";
        spoPrac[0] = "    _ _| |_ _   ";
        spoPrac[1] = "   |         |  ";
        spoPrac[2] = "_ _|spolecna |  ";
        //spoPrac[3] = "_ _     x    |  ";
        if (aktualniMistnost ==
            spolecnaPracovna) { spoPrac[3] = "_ _     x    |  "; } else { spoPrac[3] = "_ _          |  "; }
        spoPrac[4] = "   |pracovna |  ";
        spoPrac[5] = "   |_ _ _ _ _|  ";
        spoPrac[6] = "                ";
        spoPrac[7] = "                ";
        pracovna[0] = "    _ _| |_ _   ";
        pracovna[1] = "   |         |  ";
        pracovna[2] = "   |         |  ";
        if (aktualniMistnost ==
            pracovnaa) { pracovna[3] = "   |    x    |  "; } else { pracovna[3] = "   |         |  "; }
        pracovna[4] = "   |pracovna |  ";
        pracovna[5] = "   |_ _   _ _|  ";
        pracovna[6] = "       | |      ";
        pracovna[7] = "       | |      ";
        pokojTvuj[0] = "    _ _| |_ _   ";
        pokojTvuj[1] = "   |         |  ";
        pokojTvuj[2] = "_ _|         |  ";
        if (aktualniMistnost ==
            pokoj) { pokojTvuj[3] = "_ _     x    |  "; } else { pokojTvuj[3] = "_ _          |  "; }
        pokojTvuj[4] = "   |  pokoj  |  ";
        pokojTvuj[5] = "   |_ _ _ _ _|  ";
        pokojTvuj[6] = "                ";
        pokojTvuj[7] = "                ";

        for (int i = 0; i < 8; i++) {
            cout << misto[0] << WC[i] << knihy[i] << endl;
        }
        for (int i = 0; i < 8; i++) {

            cout << jidenlna[i] << obyva[i] << spoPrac[i] << endl;
        }
        for (int i = 0; i < 8; i++) {
            cout << misto[0] << pracovna[i] << endl;
        }
        for (int i = 0; i < 8; i++) {
            cout << koupe[i] << pokojTvuj[i] << endl;
        }
    }

    const char *lees(int i) {
        if (i % 2) {
            return "^ ^ ^ ^ ^ ^ ^ ^ ";
        }
        else {
            return " ^ ^ ^ ^ ^ ^ ^ ^";
        }
    }

    void vykresleniMezer(int sirka) {
        for (int i = 0; i < sirka; i++) {
            cout << " ";
        }
    }
    void vykresleniStreduHradu(int sirka, int i) {
        if (i % 2) {
            if (i == 23) {
                cout << "___";
            } else {
                cout << "__|";
            }
            for (int l = 0; l < sirka; l++) {
                if (l + 1 == sirka) {
                    cout << "__|_";
                } else {
                    cout << "___|";
                }
            }
            //cout<<endl;
        } else {
            for (int l = 0; l < sirka; l++) {
                cout << "___|";
            }
            cout << "___";
            //cout<<endl;
        }
    }
    void vykresleniHrad(int vyska) {
        for (int i = 0; i < vyska; i++) {
            cout << lees(i);
            if (i % 2 == 0) {
                cout << "|__|___|___|___|___|";
                if (i <= 2) {
                    vykresleniMezer(23);
                    cout << "|__|___|___|___|___|" << lees(i) << endl;
                } else {
                    vykresleniStreduHradu(5, i);
                    cout << "|__|___|___|___|___|" << lees(i) << endl;
                }
            } else {
                cout << "|___|___|___|___|__|";
                if (i <= 2) {
                    vykresleniMezer(23);
                    cout << "|___|___|___|___|__|" << lees(i) << endl;
                } else {
                    vykresleniStreduHradu(5, i);
                    cout << "|___|___|___|___|__|" << lees(i) << endl;
                }
            }
        }
    }
    void mapaOkoli() {
        const char *les[2];
        const char *cesta[1];
        const char *cesta2[8];
        const char *misto[1];
        const char *dum[8];
        const char *smery[8];
        const char *uDomu[8];
        const char *kHradu[8];
        const char *cestaKOhnisti[8];
        const char *ohniste[8];
        ohniste[0] = "       OOO      ";
        ohniste[1] = "      O   O     ";
        ohniste[2] = "_ _ _O     O    ";
        if(aktualniMistnost == ohnistee) {
            ohniste[3] = "_ _ _   x  O    ";
        }else
        {
            ohniste[3] = "_ _ _      O    ";
        }
        ohniste[4] = "     O     O    ";
        ohniste[5] = "      O   O     ";
        ohniste[6] = "       OOO      ";
        ohniste[7] = lees(7);

        cesta[0] = "_ _ _ _ _ _ _ _ ";
        for(int i = 0; i < 8; i++)
        {
            if(i == 2)
            {
                cestaKOhnisti[i] = cesta[0];
            }
            else
            {
                cestaKOhnisti[i] = lees(i);
            }
        }
        if(aktualniMistnost == kOhnisti)
        {
            cestaKOhnisti[3] = "_ _ _ _ _ x _ _ ";
        }
        else
        {
            cestaKOhnisti[3] = cesta[0];
        }cesta2[0] = " ^ ^ ^ ^ | | ^ ^";
        cesta2[1] = "^ ^ ^ ^ ^| |^ ^ ";
        cesta2[2] = " ^ ^ ^ ^ | | ^ ^";
        if(aktualniMistnost == cestaDolu)
        {
            cesta2[3] = "^ ^ ^ ^ ^|x|^ ^";
        }
        else
        {
            cesta2[3] = "^ ^ ^ ^ ^| |^ ^ ";
        }
        cesta2[4] = " ^ ^ ^ ^ | | ^ ^";
        cesta2[5] = "^ ^ ^ ^ ^| |^ ^ ";
        cesta2[6] = " ^ ^ ^ ^ | | ^ ^";
        cesta2[7] = "^ ^ ^ ^ ^| |^ ^ ";
        for (int i = 0; i < 8; i++)
        {
            kHradu[i] = cesta2[i];
            if(aktualniMistnost == cestaKHradu)
            {
                kHradu[3] = "^ ^ ^ ^ ^|x|^ ^";
            }
            else
            {
                kHradu[3] = "^ ^ ^ ^ ^| |^ ^";
            }
        }
        misto[0] = "                ";
        dum[0] = "    _ _ _ _ _  ^";
        dum[1] = "   |         |  ";
        dum[2] = "   |         |_ ";
        dum[3] = "   |          _ ";
        dum[4] = "   |  dum    | ^";
        dum[5] = "   |_ _ _ _ _|  ";
        dum[6] = "               ^";
        dum[7] = "                ";
        smery[0] = " ^ ^ ^ ^ | | ^ ^";
        smery[1] = "^ ^ ^ ^ ^| |^ ^ ";
        smery[2] = "_ _ _ _ _| |_ _ ";
        if(aktualniMistnost == smer)
        {
            smery[3] = "_ _ _ _ _ x _ _ ";
        }
        else
        {
            smery[3] = "_ _ _ _ _   _ _ ";
        }
        smery[4] = " ^ ^ ^ ^ | | ^ ^";
        smery[5] = "^ ^ ^ ^ ^| |^ ^ ";
        smery[6] = " ^ ^ ^ ^ | | ^ ^";
        smery[7] = "^ ^ ^ ^ ^| |^ ^ ";
        for (int i = 0; i < 8; i++) {
            if (i == 2 || i == 3) {
                if (i == 3 && aktualniMistnost == cestaPredDomem) {
                    uDomu[i] = "_ _ _ _ x _ _ _ ";
                }
                else {
                    uDomu[i] = cesta[0];
                }
            }
            else {
                uDomu[i] = lees(i);
            }
        }
        vykresleniHrad(9);
        for (int i = 0; i < 8; i++) {
            les[0] = lees(i);
            cout << les[0] << les[0] << kHradu[i] << les[0] << les[0] << les[0] << endl;
        }
        for (int i = 0; i < 8; i++) {
            les[0] = lees(i);
            cout << dum[i] << uDomu[i] << smery[i] << cestaKOhnisti[i] << ohniste[i] << les[0] << endl;
        }
        for (int i = 0; i < 8; i++) {
            les[0] = lees(i);
            cout << les[0] << les[0] << cesta2[i] << les[0] << les[0] << les[0] << endl;
        }
    }

    void knihy() {
        this->nazev1 = "Strazni";
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

    void rozhodovani1() {
        cout << "Nebylo by super moc ovlivnit dejny i po jejich ubehnuti ?" << endl;
        string napis;
        cin >> napis;
        if (napis == "ne") {
            dohrano = true;
        } else if (napis == "ano") {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "nasel jsi lidi, kteri chtejí take menit dejiny.\n"
                    "Nekteri z nich budou kontrolovat zmeny v udalostech" << endl;
            cout << endl;
            cout << "Pokusili jste se navracení v case do roku '1350'.\n"
                    "Chybkou pri vypoctu jsi prenesl cely dum, nekam hluboko do lesa.\n"
                    "Zprvu sis myslel, ze tvuj dom stoji na 'soucasne byvalem lese',\n"
                    "ale pote co jsi opustil teplo domova jsi zjistil, ze nejsi ani naodou na Zemi.\n"
                    "V lese si objevil knihu 'Strazci' a rezhodl ses ji prinest do knihovny." << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Pro cteni napis 'cist' a nazev titulu (lze jen v knihovne)." << endl;
            cout << "napoveda pokazdy kdyz chces jit jinam napis 'jdi' a smer " << endl;
            vypisMoznosti();
        } else {
            cout << "zkus to znova" << endl;
        }
    }

    void mise() {
        Mistnosti *vchod = new Mistnosti("vchod");
        Mistnosti *hala = new Mistnosti("hala");
        Mistnosti *personal = new Mistnosti("personal");
        Mistnosti *kuchynee = new Mistnosti("kuchyn");
        Mistnosti *hlavniHala = new Mistnosti("hlani hala");


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


        zachod->pridejVychod("jih", obyvac);

        spolecnaPracovna->pridejVychod("vychod", obyvac);
        spolecnaPracovna->pridejVychod("sever", knihovna);

        knihovna->pridejVychod("jih", spolecnaPracovna);
        knihovna->pridejAkci("Strazni\n");
        knihovna->pridejAkci("Zaklinac\n");
        knihovna->pridejAkci("PanPrstenu\n");

        pokoj->pridejVychod("vychod", koupelna);

        //pracovna.pridejVychod("jih", &pokoj);
        cestaPredDomem->pridejVychod("domu", spolecnaPracovna);
        cestaPredDomem->pridejVychod("zapad", smer);

        smer->pridejVychod("vychod", cestaPredDomem);
        smer->pridejVychod("sever", cestaKHradu);
        smer->pridejVychod("zapad", kOhnisti);
        smer->pridejVychod("jih", cestaDolu);

        cestaDolu->pridejVychod("sever", smer);

        cestaKHradu->pridejVychod("jih", smer);

        kOhnisti ->pridejVychod("zapad", ohnistee);
        kOhnisti->pridejVychod("vychod", smer);

        ohnistee ->pridejVychod("vychod", kOhnisti);

        aktualniMistnost = pokoj;
    }

    void hraj() {
        vypisUvitani();
        while (!dohrano) {
            Prikaz *prikaz = cteniPrikazu.getPrikaz();
            dohrano = aktualniPrikaz(*prikaz);
            if(aktualniMistnost == lesan)
            {
                dohrano = true;
            }
        }
        cout << "baf" << endl;
        string slovo;
        cin >> slovo;
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
        cout << "Akce:\n";
        aktualniMistnost->getAkce();
        cout << "Vychody: ";
        vychody();


    }

    void vychody() {
        aktualniMistnost->getVychody();
        cout << endl;
    }

    void cteniZeSouboru(ifstream &soubor) {
        //cout << (string*)soubor << endl;
        cout << "precetlo se" << endl;
    }

    void cistKnihu(Prikaz &prikaz) {
        if (nazev1 == prikaz.getDruhySlovo()) {
            ifstream strazni("Strazni.txt");
            cteniZeSouboru(strazni);
            cout << "Strazni\n"
                    "Strazce zalozil brudir jmenem „“. Nechtel dopustit, aby se nekdy\n"
                    "opakovalo obdobi hladu.Vse zacalo strachem o jidlo. On a jeho\n"
                    "spolecnici zajistovali zprvu zdroj potravy vybudovanim poli a farem.\n"
                    "Diky tomuto vseho bylo dostatek. Ne vsem plodinam se vsak darilo vsude stejne.\n"
                    "Napriklad vzacny 'banasovnik' roste jen u more, kde je pisek, dale pak'hrusbon'\n"
                    "vyrusta v lesich.Obchod roste vlivem techto podminek. Jen se vyskytl problem\n"
                    " s prepravou, protoze cesty byly dlouhe, nebezpecne a plne nestvur a lupicu.\n"
                    "A tak strazni zacali chranit obchodni stezky. Cestu si rozdelili na mensi useky\n"
                    "a postavili tabory. Kolem taboru slouzili straze a v tabore vybirali penize.\n"
                    "Za bezpeci kupcum, ktere jim bylo poskytnuto.\n"
                    "Postupem casu Strazci pronikli i na pole obchodu, hutnictvi,\n"
                    "vedy a dokonce i vlady. Nutno podotknout, ze svoji praci vykonavali spolehlive.\n";
        }
        else if (nazev2 == prikaz.getDruhySlovo()) {
            cout << endl;
        }
        else if (nazev3 == prikaz.getDruhySlovo()) {
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
        } else if (prikazovySlovo == "cist") {
            cistKnihu(prikaz);
        } else if (prikazovySlovo == "vypnout") {
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
    bool dohranoo()
    {
        return true;
    }
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
            spolecnaPracovna->pridejVychod("ven", cestaPredDomem);
        }
        if (aktualniMistnost->jeV(rizeni)) {

            dalsiMistnost = aktualniMistnost->getVychod(rizeni);
            aktualniMistnost = dalsiMistnost;
            if (aktualniMistnost == knihovna || aktualniMistnost == spolecnaPracovna || aktualniMistnost == obyvac ||
                aktualniMistnost == zachod || aktualniMistnost == jidelna || aktualniMistnost == pracovnaa ||
                aktualniMistnost == pokoj || aktualniMistnost == koupelna) {
                mapaDommu();
            } else {
                mapaOkoli();
            }
            cout << "Nachazis se v " + aktualniMistnost->poppis() + "" << endl;
            if(aktualniMistnost != lesan) {
                cout << "Akce:\n";
                aktualniMistnost->getAkce();
                cout << "Vychody: ";
                vychody();
                cout << endl;
            }
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