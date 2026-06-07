# Përmbledhje për Provim — Inxhinieri Software (Leksionet 1–5)

> Fokusuar te temat që **përsëriten në teza** (2023, 2024 dhe blloku me 27 pyetje). Pjesët e shënuara me ⭐ janë ato që dalin pothuajse gjithmonë.

---

## 1. Çfarë është Inxhinieria e Software (SE) — Leksion 1 & 2

⭐ **Objektivi kryesor i SE:** të ofrojë mënyra për të siguruar prodhimin e një software që **përmbush qëllimet për të cilat është kërkuar** (kërkesa funksionale/jofunksionale, kufizime mjedisi, kosto, ligje).

⭐ **Përkufizim i SE si veprim:** Inxhinierimi është **krijimi i zgjidhjeve për problemet praktike, me pak shpenzim, duke përdorur njohuri shkencore, për të ndërtuar gjëra në shërbim të njerëzimit.**

**Çfarë NUK është e vërtetë (grackë tipike):** SE *lehtëson* punën në grup — pohimi "SE ka pak ndikim në punën në grup" është gjithmonë i **gabuar**.

**SE si proces zgjidhjeje problemi** — trajton zhvillimin si proces që realizon: analizë → konceptim të zgjidhjes → ndërtim → verifikim → validim → lëshim.

### SE — teknologji me shtresa (nga poshtë lart)
1. **Fokus mbi cilësinë** (themeli)
2. **Procesi** — mban bashkë gjithçka, bazë për kontrollin/menaxhimin
3. **Metodat** — zgjidhjet teknike ("Si?")
4. **Mjetet** — suport i automatizuar (CASE)

### Tri fazat e përgjithshme të punës
- **Përcaktimi (definition):** fokus te *"çfarë"* — informacioni, funksionet, sjellja, ndërfaqet, kufizimet.
- **Zhvillimi (development):** fokus te *"si"* — modelim software, gjenerim kodi, testim.
- **Suporti (mirëmbajtja):** fokus te *ndryshimi*.

**4 llojet e mirëmbajtjes:** Rregullim (gabime), Përshtatje (ndryshon mjedisi), Zgjerim (funksione të reja), Parandalim (riinxhinierim).

### ⭐ Karakteristikat e software (dalin shpesh)
- Software **zhvillohet/inxhinierohet, NUK prodhohet/fabrikohet** si produktet fizike.
- ⭐ **Software NUK vjetërohet/konsumohet fizikisht** (s'është objekt i pluhurit, dridhjeve si hardware). Megjithatë **përkeqësohet** sepse **ndryshojnë kërkesat** dhe çdo ndryshim mund të fusë gabime te bashkëveprimi i komponentëve.
- Pjesa më e madhe është **custom-built**, jo asemblim komponentësh të gatshëm.

### Trekëndëshi i kufizimeve
**Koha – Kosto – Cilësi.** Ndryshimi i njërit kërkon balancim te të tjerët. "Më shpejt, më mirë, më lirë — zgjidh dy."

### Faktorë suksesi/dështimi
Software i suksesshëm = përputhet me **nevojat e përdoruesve/klientit** (jo të zhvilluesve). Dështon për: keqkuptim kërkesash, mungesë analize konteksti, kompleksitet i pamenaxhuar.

---

## 2. Procesi dhe Modelet e Procesit — Leksion 2

**Proces** = bashkësi e strukturuar hapash për të zhvilluar software (specifikim → modelim → validim → evolim).

**CMM (Capability Maturity Model)** — 5 nivele konsolidimi:
1. Fillestar (ad-hoc, kaotik)
2. I përsëritshëm (repeatable)
3. I përcaktuar (defined)
4. I menaxhuar (managed — me matje)
5. I optimizuar (optimized — përmirësim i vazhdueshëm)

Sa më i konsoliduar procesi → aq më të parashikueshme rezultatet.

### Modelet klasike (jo-evolutive)

| Model | Karakteristikë kryesore | Kur përdoret / problem |
|---|---|---|
| **Linear** (cikli klasik) | Sekuencial: Analizë→Design→Kodim→Testim | ⭐ **Jorealist** sepse kërkesat rrallë janë të qarta që në fillim; s'ka version pune deri në fund |
| **Waterfall** | Zgjerim i linear-it me **feedback** mes fazave | Vetëm kur kërkesat janë të qarta e të pandryshueshme |
| **Build & fix** | Shkruaj kod → rregullo → përsërit | Vetëm programe <100 rreshta; bëhet kaotik |
| **Prototipe** | Mock-up i shpejtë për të kuptuar kërkesat | Kur klienti s'ka ide të qarta; prototipi mund të hidhet (throw-away) ose të evoluojë |
| ⭐ **RAD** | Cikël shumë i shkurtër (60–90 ditë), bazuar te komponentët, **ekipe paralele** | Kërkesat e kuptuara mirë + hapësirë e kufizuar; jo për rrezik teknik të lartë apo kur s'modularizohet |

⭐ **Fazat e RAD:** Modelimi i Biznesit → Modelimi i të Dhënave → Modelimi i Procesit → Gjenerimi i Aplikimit → Testimi.
- **Modelimi i Biznesit = rrjedha e informacionit** (cili info udhëheq biznesin, kush e gjeneron, ku shkon).

---

## 3. Modelet Evolutive (Iterative) — Leksion 3

⭐ **Premisa:** software evoluon në kohë; zhvillimi i tërë nga fillimi në fund jep produkt jorealist.

⭐ **Modelet evolutive PRANOJNË ndryshimet** (grackë: çdo pohim që thotë "modelet evolutive refuzojnë ndryshimet" është **i GABUAR**).

### ⭐ Zhvillimi Iterativ + Inkrementues (shumë i pyetur)
- **Iterativ:** kuptim më i mirë i problemit duke përsëritur aktivitetet bazë (analizë, modelim, kodim, testim).
- **Inkrementues:** çdo cikël rrit kuptimin e problemit dhe cilësinë e zgjidhjes.
- ⭐ **Çdo iteracion duhet të prodhojë një version të ekzekutueshëm, të integruar dhe të testuar** (një "release"/lëshim). Iteracioni = "mini-projekt" me planin e vet.

**Llojet e lëshimeve/versioneve gjatë iteracioneve:** provë konceptimi → prototip → version i ndërmjetëm (feedback nga klienti) → version test → version produkti → version i plotë.

### Modelet konkrete evolutive

| Model | Thelbi |
|---|---|
| **Inkrementues** | Kombinon linear + iterativ; inkrementi i parë = **produkti bazë (core product)**; kërkesat e inkrementit aktual "ngrijnë" |
| **Spiral (Boehm)** | Fokus te **menaxhimi i rrezikut** në mënyrë inkrementale; çdo cikël = 4 faza (objektiva → rreziqe → prototip → planifikim) |
| **I njëkohshëm (Concurrent)** | Aktivitetet ekzistojnë njëkohësisht në gjendje të ndryshme; tipik për **klient-server** |
| **Bazuar në komponente** | Krijon software nga **klasa/komponentë të ripërdorshëm** (OOP); natyrë iterative; ul kohën ~70% |

### ⭐ Procesi i Unifikuar (UP)
- Kombinon cilësitë e modeleve tradicionale me zhvillim në kushte ndryshimesh të shpeshta.
- ⭐ **Konsideron shumë të rëndësishëm komunikimin me klientin** dhe rolin e **arkitekturës** (kuptueshmëri, përshtatje ndaj ndryshimeve, ripërdorim).
- Rrjedhë **iterative dhe inkrementuese**.
- **5 fazat:** Fillimi (inception) → Përpunimi (elaboration) → Ndërtimi (construction) → Kalimi (transition) → Lëshimi (production).
- Fazat **ndodhin njëkohësisht** (jo radhazi) — i takojnë iteracioneve të ndryshme.
- Lidhet me **UML** (standard nga 1997 për modelim me objekte).

---

## 4. Modelet Agile — Leksion 4

⭐ **Filozofia Agile:** kënaqësia e klientit + **dorëzim inkremental dhe i hershëm** i software, ekipe **të vogla & shumë të motivuara**, metoda informale, thjeshtësi.

**Reagimi i shpejtë** = fjala kyçe; ul ndjeshëm **koston e ndryshimit** (që rritet jolineare me kalimin e kohës).

### Parimet kryesore (Agile Manifesto — mbaj mend këto)
1. Prioriteti më i lartë = kënaqësia e klientit me dorëzim të hershëm e të vazhdueshëm.
2. ⭐ **Ndryshimi i kërkesave është i mirëpritur**, edhe vonë.
3. Dorëzim i shpeshtë software funksional (intervale të shkurtra).
7. **Progresi matet me software që funksionon.**

### ⭐ SCRUM (shumë i pyetur)

**Rolet:**
| Rol | Përgjegjësia |
|---|---|
| ⭐ **Product Owner** | Krijon & **menaxhon Product Backlog-un**, vendos **prioritetet** (përfaqëson klientin) |
| **Scrum Master** | Menaxhon **procesin**, siguron që ekipi ndjek Scrum (lehtësues — JO menaxhon backlog) |
| **Ekipi Zhvillues** | Ndërton produktin |

> ⭐ **Grackë klasike:** "Scrum Master menaxhon Product Backlog" → **i GABUAR**. Atë e bën **Product Owner**.

**Sprint** = periudhë e caktuar (2–4 javë) me një **sprint goal**.

⭐ **3 Artifaktet e Scrum:**
- **Product Backlog** — lista e gjithë punës.
- **Sprint Backlog** — puna e zgjedhur për një sprint.
- ⭐ **Increment** — **produkti i përfunduar në fund të çdo sprinti** (i pavarur dhe funksional).

**Scrum përshtatet për:** nevoja të ndryshueshme, ekip të vogël (≤10–12), nevojë për transparencë, iteracione të shpeshta, rrezik të lartë.

### Kanban
- **Kanban Board** = tabelë që **vizualizon rrjedhën e punës** (kolona: to-do / in progress / done).
- ⭐ Grackë: "Kanban Board = dokumentacion projekti" → **i GABUAR** (shërben për të vizualizuar punën, jo dokumentim).
- **Kolona limituese** = kufizon nr. e detyrave për kolonë (kontrollon WIP).

### ⭐ Extreme Programming (XP)
- ⭐ Për **ekipe të vogla** që zhvillojnë **shpejt** software në **mjedise të ndryshueshme**.
- Modeli shprehet sa më shumë **në kodin burim** (minimon dokumentim — kodi vetëdokumentues).
- **Pair programming** (programim në çift) — kodi s'është pronë e një personi.
- ⭐ **Test-first** — shkruhen testet para kodit.
- 4 aktivitetet: planifikim, modelim, kodim, testim.
- Karakteristika: feedback i shpejtë me **cikle të shkurtra**, thjeshtësi, ndryshim inkremental, **ndryshimi = fenomen normal**.

### Modeli "Sinkronizo dhe Stabilizo" (Microsoft)
Ekipe paralele të vogla (3–8 persona); sinkronizim i shpeshtë; stabilizim në inkremente gjatë procesit (jo në fund).

---

## 5. Organizimi i Projektit & Komunikimi — Leksion 5

**Projekt** = ndërmarrje e përkohshme me datë fillimi/mbarimi, që prodhon një produkt/rezultat **unik**. Kushtet: uniciteti, përkohshmëria, burimet & cilësia, kënaqësia e palëve.

**4 komponentët e një projekti (nga këndvështrimi i zhvilluesit):** Produktet e punës, Orari, Pjesëmarrësit, Detyrat.

### 5 grupet e proceseve të menaxhimit
Fillimi → Planifikimi → Zhvillimi → Vëzhgimi/Kontrolli → Mbyllja. (Outputi i njërit = inputi i tjetrit.)

### ⭐ Stakeholders (palët kryesore)
- **Sponsori** — ekzekutiv që cakton para/burime, merr vendime finale.
- **Menaxheri i projektit** — organizon e administron punët.
- **Anëtarët e ekipit** — ekspertët që bëjnë punën.
- **Klienti** — përfituesi; ⭐ formulon **skenarët, kërkesat (funksionale & jofunksionale) dhe kufizimet**.
- **Përdoruesi** — përdor produktin final.

### Rolet në projekt
- **Menaxherial** (menaxher projekti, drejtues ekipi)
- **Zhvillimi** (analist, **arkitekt sistemi**, modelues objektesh, implementues, testues)
- **Nder-funksionale** (inxhinier API, editues dokumentacioni, menaxher konfigurimi)
- **Konsulence** (klienti, përdoruesi fundor, specialistë domaini)

> **Ndarja e rolit të testimit nga zhvillimi → testim më eficient** (shmang konfliktin e interesit).

### Komunikimi
- **I planifikuar:** prezantim problemi, rishikime klienti, rishikime projekti, rishikime mes anëtarëve (fokus te **kodi**), rishikime statusi, brainstorming, lëshime.
- **I paplanifikuar:** kërkesa për sqarime, kërkesa për ndryshime (change requests), zgjidhje problemesh.

> Shumë komunikim përmes "kërkesave për sqarime" = tregues i **komunikimi jo efektiv**.

### ⭐ Orari & Diagrama Gantt
- ⭐ **Gantt = paraqitje e orarit (schedule)** në kohë: boshti horizontal = koha, vertikal = detyrat; shtyllat = kohëzgjatja.
- Mos e ngatërro me **WBS** (dekompozimi i punës) — koncept tjetër.

---

## 6. KËRKESAT — koncepte që dalin në ÇDO tezë ⭐⭐

Këto janë gracka të garantuara. Mbaji përmendsh.

### Klasifikimi i kërkesave jofunksionale (grackat me shembuj)
| Shembull | Lloji i saktë |
|---|---|
| "Përgjigje brenda 1 sek / 1000 kërkesa në sekondë" | ⭐ **Performancë** (jo disponueshmëri!) |
| "Operacional 99.95% të kohës" | **Disponueshmëri** (jo portabilitet!) |
| "Enkriptim AES-256 i të dhënave" | **Siguri** (jo funksionale!) |
| "Përdoruesi mund të ndryshojë fjalëkalimin" | **Funksionale** (jo siguri!) |

### Vetitë e kërkesave
- ⭐ **E verifikueshme** = mund të ndërtohen **teste** që demonstrojnë se kërkesa është realizuar. (Kërkesa me "i mirë / pa gabime" pa metrika → **JO** e verifikueshme.)
- **E gjurmueshme (traceable)** = mund të gjurmohet te funksioni korrespondues i sistemit.
- ⭐ **DAR (Dokumenti i Analizës së Kërkesave)** = bazë **kontraktuale** midis klientit dhe zhvilluesve.

### Procesi i kërkesave (Leksion 3)
Studim fizibiliteti → Nxjerrje & analizë → Specifikim → Validim.
- ⭐ **Nxjerrja MBLEDH** kërkesat; **Analiza i STRUKTURON/formalizon**.

---

## 7. ARKITEKTURA, KOHEZIONI & TESTIMI — gracka të shpeshta

### Arkitektura
- ⭐ **Arkitektura me shtresa** → **redukton kompleksitetin** duke ndarë sistemin në shtresa të qarta.
- **3-shtresore** = rast i veçantë i **klient-server**; ndarja logjikë/ndërfaqe lehtëson mirëmbajtjen & debugging-un.
- **Repository** = komunikim përmes një **depoje qendrore të të dhënave të përbashkëta**.

### ⭐ Kohezioni vs Coupling (grackë e garantuar)
- ⭐ **Kohezion i lartë** = objektet brenda një nënsistemi kryejnë **detyra të ngjashme/të lidhura**. (Pohimi "detyra JO të ngjashme" → i GABUAR.)
- **Coupling i ulët** = varësi e ulët mes nënsistemeve.
- **Synimi:** kohezion i lartë + coupling i ulët.

### ⭐ Testimi (Leksion 3)
| Lloji | Çfarë teston |
|---|---|
| **Njësie/moduli** | Një funksion/modul **i vetëm** i izoluar (p.sh. validimi i një emri përdoruesi) |
| **Integrimi** | Kombinon module në nivele më të larta |
| **Sistemi** | Sistemin si të tërë + kërkesat jofunksionale |
| **Pranimi** | E bën **përdoruesi fundor**; verifikon kërkesat fillestare |
| **Regresi** | ⭐ Pas çdo ndryshimi — që funksionet **ekzistuese** s'janë prishur (JO skenarë të rinj!) |

> ⭐ Grackë: "Regresi teston skenarë të rinj" / "regresi = integrim" → **i GABUAR**.

### Koncepte të tjera që dolën
- **Refaktorimi** = përmirëson strukturën **pa ndryshuar funksionalitetin**.
- **Analiza statike** = gjen gabime **pa e ekzekutuar** programin (s'e zëvendëson plotësisht rishikimin manual).
- **Commit (Git)** = set ndryshimesh që ruhet në depo. **Pull request** = kërkesë për shqyrtim/bashkim (JO fshirje).
- **Code Review** = përmirëson cilësinë & përputhjen me standardet.
- **SOLID – "S"** = Single Responsibility (një klasë = një përgjegjësi e qartë).

---

## Lista e shpejtë e "grackave të garantuara" (përsërit para provimit)

1. SE **lehtëson** punën në grup (jo "pak ndikim").
2. Software **nuk vjetërohet** fizikisht; **përkeqësohet** nga ndryshimi i kërkesave.
3. Modelet evolutive **PRANOJNË** ndryshimet.
4. Çdo iteracion → **version i ekzekutueshëm + testuar**.
5. **Product Owner** menaxhon backlog-un (jo Scrum Master).
6. **Increment** = produkti i përfunduar i sprintit.
7. **Kanban Board** vizualizon punën (jo dokumentacion).
8. **XP** = ekipe të vogla + mjedise të ndryshueshme + test-first.
9. **Performancë** vs **Disponueshmëri** vs **Siguri** vs **Funksionale** — dije t'i dallosh.
10. **Kohezion i lartë** = detyra **të ngjashme**.
11. **Regresi** = mbron funksionet **ekzistuese**.
12. **Gantt** = orari; **WBS** = dekompozim pune.
13. **Verifikueshme** = mund të ndërtohen teste.
14. **DAR** = bazë kontraktuale klient–zhvillues.


# Përmbledhje për Provim — Inxhinieri Software (Leksionet 6–13)

> Vazhdim i përmbledhjes së parë (Leksionet 1–5). Fokusuar te temat që **përsëriten në teza**. ⭐ = gjëra me vlerë që dalin shpesh.

---

## 6. TESTIMI ⭐⭐ (blok i tërë pyetjesh)

⭐ **Çfarë është testimi:** procesi i ekzekutimit të një programi me qëllim **gjetjen e gabimeve**. Testojmë sepse jemi të vetëdijshëm që gabojmë. Testimi ndihmon në verifikim dhe validim, që sistemi të përmbushë kërkesat e specifikuara dhe pritshmëritë e përdoruesve.

⭐ **Verifikim vs Validim** (grackë e shpeshtë, mbaji të dalluara):
- **Verifikim** = software-i është ndërtuar **në mënyrë të saktë, sipas specifikimeve** të tij. Pyetja: "a po e ndërtojmë siç duhet?"
- **Validim** = software-i bën **atë që pret përdoruesi fundor**. Pyetja: "a po ndërtojmë gjënë e duhur?"

⭐ **Pse është i rëndësishëm:**
1. **Siguron cilësinë** — identifikon e korrigjon defektet.
2. **Përmirëson përvojën e përdoruesit** — produkt i testuar mirë funksionon më mirë.
3. **Redukton kostot** — gabimet e gjetura herët kushtojnë shumë më pak sesa pas lëshimit.
4. **Siguron përputhje me kërkesat** — verifikon që të gjitha kërkesat janë plotësuar.

> ⭐ Kufizim i rëndësishëm: testimi **JEP informacion** për cilësinë dhe defektet, por **NUK garanton** që sistemi është pa gabime. Jep informacion vetëm për testet e ekzekutuara. Çdo pohim që thotë "testimi siguron/garanton që s'ka gabime" → **i GABUAR**.

### ⭐ Llojet e testimit (tabela kyçe — mësoji shembujt, dalin si pyetje)

| Lloji | Çfarë teston | Shembull tipik |
|---|---|---|
| ⭐ **Njësie (Unit)** | Një komponent/funksion **i vetëm** i izoluar | Funksioni që mbledh 2+3=5 |
| ⭐ **Integrimi** | **Ndërveprimin mes moduleve** të ndryshme | Moduli i regjistrimit + moduli i autentifikimit punojnë bashkë |
| **Sistemi** | **Të gjithë sistemin** e integruar + të gjitha aspektet | App bankar: transfertë, balancë, fatura funksionojnë siç duhet |
| **Pranimi (Acceptance)** | Bëhet nga **përdoruesi/klienti** final, që ta pranojë | Kompania teston sistemin e ri të inventarit para se ta blejë |
| **Performancë** | Sjelljen nën **ngarkesa të ndryshme**, në kushte reale | Faqe gjatë një eventi të madh me trafik të lartë |
| ⭐ **Regresi** | Që ndryshimet **s'kanë prishur funksionet ekzistuese** | Pas shtimit të një veçorie të re, ri-ekzekutohen testet e vjetra |
| ⭐ **Load** | Ngarkesë **të madhe por të qëndrueshme** | 1000 përdorues njëkohësisht në e-commerce |
| **Stress** | Ngarkesë **ekstreme dhe të papritur** për të parë ku dështon | Miliona përdorues blejnë bileta në të njëjtën kohë |
| ⭐ **Siguri** | Mbrojtjen nga sulme, të dhëna të enkriptuara | App bankar: enkriptim + mbrojtje nga sulme të jashtme |
| **Përdorshmëri (Usability)** | Sa e lehtë/intuitive është ndërfaqja | A kryejnë përdoruesit transaksione pa ndihmë |
| **API** | Funksionalitetin, performancën, sigurinë e ndërfaqeve | API pagesash: transaksione të sakta e të sigurta |
| **Kompatibiliteti** | Funksionim në **ambiente/konfigurime të ndryshme** teknike | Po testohet në sisteme operative e pajisje të ndryshme |

> ⭐ Dallimet që ngatërrohen më shpesh në provim:
> - **Edge case** = vlerë **kufitare** (moshë 0, emër 256 karaktere)
> - **Load** = shumë përdorues **njëkohësisht**
> - **Siguri** = enkriptim / mbrojtje nga sulme
> - **Integrim** = ndërveprim **mes moduleve**

### ⭐ Edge Cases
Situata të veçanta që ndodhin në **kufijtë** e inputit të lejuar ose të mundshëm. Janë të rëndësishme sepse shpesh janë **burim defektesh që s'shfaqen në kushte normale**. Shembuj: futja e moshës 0 ose 150 vjeç në një formular; futja e një emri 256 karaktere në një fushë që lejon 50. Testuesi i mirë gjithmonë përfshin edge cases në skenarët e tij.

### Test Case
Një **përshkrim i detajuar i një testimi të vetëm** që verifikon një aspekt specifik. Përmban: **ID** (identifikues unik), **Përshkrim**, **Hapat**, **Input**, **Output i Pritur**, **Output Aktual**. Krahasimi i output-it aktual me të pritshmin tregon nëse testi kaloi apo dështoi.

### ⭐ Teknikat e testimit (grackë e garantuar)
- ⭐ **White Box (Kutia e Bardhë):** testuesi **ka njohuri për strukturën e brendshme** të kodit dhe teston rrugët e ndryshme të ekzekutimit (p.sh. kontrollon të gjitha degët e një kushti). Lidhet me **testimin e njësive**.
- ⭐ **Black Box (Kutia e Zezë):** teston **funksionalitetin e jashtëm PA njohuri** për kodin e brendshëm (p.sh. teston funksionin e kërkimit duke parë vetëm rezultatet). Lidhet me testimin e sistemit/pranimit. **Testimi funksional = black box.**
- **Risk-Based:** fokusohet te pjesët me **rrezik ose impakt më të madh** në rast dështimi (p.sh. modulet e pagesave dhe sigurisë në një app financiar).

### ⭐ Mjetet e testimit (mësoji përmendsh — dalin disa herë në pyetje)
| Mjet | Përdorimi |
|---|---|
| **Selenium** | Automatizim testimi **web** (UI) |
| **JUnit / TestNG** | Testim **njësie në Java** (TestNG mbështet edhe testim paralel) |
| **Cucumber** | Testim **BDD** (Behavior-Driven Development — skenarë në gjuhë natyrale) |
| **LoadRunner** | Testim **performance/load** |
| **Jira** | **Menaxhim defektesh** (bug tracking) |

### Manual vs Automatik
- **Manual:** testuesi ekzekuton vetë çdo hap dhe krahason rezultatin. Përparësi: fleksibilitet, zbulon gabime të papritura. Mangësi: kohë- dhe burim-intensiv.
- **Automatik:** mjete softuerike ekzekutojnë testet vetë. Veçanërisht i dobishëm për teste që përsëriten dhe sisteme të mëdha. Përparësi: saktësi e shpejtësi. Mangësi: kosto fillimi e mirëmbajtjeje.

### ⭐ Roli i testuesit
**Planifikon dhe ekzekuton teste** për të identifikuar defekte dhe vlerësuar funksionalitetin. Punon ngushtë me zhvilluesit e menaxherët, krijon skenarë (përfshirë edge cases), dokumenton defektet dhe ndihmon në korrigjim. (JO zhvillon kod, JO menaxhon projektin.) Aftësi të nevojshme: analizë, komunikim, njohuri teknike, white/black box, krijim test cases, njohuri agile.

### Mangësitë dhe Alternativat ndaj testimit
Mangësitë: **kosto, kohë, kompleksitet, informacion i pjesshëm** (s'garanton mungesë defektesh). Alternativat: **QA** (kontroll cilësie me auditime), **Analizë Statike e Kodit** (gjen gabime pa e ekzekutuar), **Code Reviews** (rishikim nga kolegët).

---

## 7. KODIMI ⭐

Kodimi është shkrimi i udhëzimeve që kompjuteri ekzekuton. Synon **kod cilësor dhe të mirëmbajtshëm**.

### ⭐ Principet e Kodimit (dalin si akronime në provim)
| Akronim | Kuptimi i plotë | Çfarë do të thotë |
|---|---|---|
| ⭐ **KISS** | **Keep It Simple, Stupid** | Mbaje kodin sa më të thjeshtë e të qartë; kodi i ndërlikuar është i vështirë për t'u kuptuar |
| ⭐ **DRY** | **Don't Repeat Yourself** | Mos përsërit kod — përdor funksione/klasa; ndryshimi bëhet në një vend |
| ⭐ **YAGNI** | **You Aren't Gonna Need It** | Mos implemento funksione që s'janë të nevojshme tani |
| ⭐ **SOLID** | 5 parime OOP | I pari = **Single Responsibility** (një klasë = një përgjegjësi e qartë) |

**Standardet e kodimit:** emërtim i qartë (në C++ **camelCase**, p.sh. `totalSum`), komente të shkurtra e të qarta për pjesët komplekse, **4 hapësira** indentim në C++, strukturë dosjesh të organizuar, trajtim i strukturuar i gabimeve, dokumentim. Standardet bëjnë kodin **më të lexueshëm dhe konsistent** brenda ekipit.

Praktika të tjera të mira: **testim njësie**, **refaktorim i rregullt**, **modularizim** (ndarje në module të vogla të pavarura).

### ⭐ Source Code Control & Versionimi (Git)
Kontrolli i versioneve menaxhon ndryshimet në kod dhe lejon bashkëpunim efikas. Termat kyç:
| Term | Kuptimi |
|---|---|
| **Repository (depo)** | Vend ku ruhet historia e ndryshimeve; lejon rikthim në version të mëparshëm |
| **Branch (degë)** | Ndan zhvillimin e veçorive pa prishur degën kryesore; lejon zhvillim paralel |
| ⭐ **Commit** | **Set ndryshimesh që ruhet në depo**; duhet të jenë të vegjël me mesazh të qartë |
| ⭐ **Merge** | Kombinim ndryshimesh nga degë të ndryshme; bëhet me kujdes pas zgjidhjes së konflikteve dhe testimit |
| ⭐ **Pull Request (PR)** | **Kërkesë për të kombinuar** ndryshimet në degën kryesore, për rishikim para bashkimit — JO për të fshirë kod |
| **Tags / Releases** | Shënojnë versione të rëndësishme të projektit |

### ⭐ Release Flow Management (rendi është fiks!)
Procesi i kalimit të kodit nga zhvillimi në prodhim. Çdo ndryshim duhet të jetë i testuar para se të shkojë te përdoruesit.
⭐ **Build → Test → Deploy → Monitor (+ Feedback)**
- **Build** (hapi i parë) = kompilim i kodit + krijim i artefakteve të gatshme për testim.
- **Test** = teste automatike (njësie, integrimi, pranimi) për të siguruar cilësinë para prodhimit.
- **Deploy** = vendosja e versionit të testuar në mjedisin e prodhimit.
- **Monitor & Feedback** = pas prodhimit, monitorohet performanca dhe mblidhet feedback nga përdoruesit.
- (+ **Rollback/Rikuperim** për t'u rikthyer shpejt në versionin e mëparshëm nëse ka probleme; + dokumentim lëshimi.)

### ⭐ Code Review
Praktikë ku zhvilluesit **analizojnë dhe komentojnë kodin e njëri-tjetrit** për të identifikuar gabime e për të përmirësuar cilësinë dhe përputhjen me standardet. Reviewer-ët kontrollojnë: testet, përputhjen me standardet, performancën, dokumentimin, dhe mund të sugjerojnë refaktorim. Komentet duhet të jenë **konstruktive**, jo destruktive.

### ⭐ Review Automatike e Kodit
Përdorim mjetesh/skriptesh për të analizuar kodin **automatikisht** dhe identifikuar gabime, probleme stili, çështje sigurie:
- **Linting** (cpplint) — probleme stili e sintakse.
- **Static Analysis** (Cppcheck) — gjen defekte **pa e ekzekutuar** kodin.
- **CI (Continuous Integration)** (Jenkins, GitHub Actions, GitLab) — ndërton, teston e rishikon kodin automatikisht.
- **Security Scanning** (SonarQube) — çështje sigurie.
- Doxygen — dokumentim automatik.

### ⭐ Refaktorimi
⭐ **Përmirësimi i strukturës së kodit PA ndryshuar funksionalitetin e tij.** Përfitimet: përmirëson **lexueshmërinë**, eliminon **borxhin teknik**, përmirëson performancën, rrit **modularitetin** dhe **testueshmërinë**, standardizon praktikat. Duhet kryer pas çdo ndryshimi të madh në kod.

### Reusability (ripërdorimi i kodit)
Përdorimi i kodit ekzistues për probleme të ngjashme; kursen kohë. Mënyrat: **funksione/klasa** të përgjithshme, **librari/module**, **Design Patterns** (Singleton, Factory, Observer), **interfaces & abstract classes**, paketim e distribuim.

### ⭐ OOP — 4 parimet bazë
| Parimi | Kuptimi |
|---|---|
| ⭐ **Encapsulation** | Fsheh detajet e brendshme të objektit; ekspozon vetëm metoda publike. Atributet duhet të jenë **private** (akses përmes get/set) |
| ⭐ **Inheritance (Trashëgimi)** | Krijim klasash të reja bazuar te klasat ekzistuese; redukton kodin e përsëritur |
| ⭐ **Polymorphism** | Përdorim i metodave të ndryshme përmes një **ndërfaqeje të përbashkët**; kod fleksibël |
| ⭐ **Abstraction** | Fokus vetëm te funksionaliteti i nevojshëm; fsheh kompleksitetin e brendshëm |

---

## 8. KËRKESAT (Nxjerrja & Analiza) ⭐⭐

⭐ **Kërkesa** = një **veçori** që sistemi duhet të ketë OSE një **kufizim** të cilit i nënshtrohet, që sistemi të pranohet nga klienti. Inxhinierimi i kërkesave synon përcaktimin e tyre.

### ⭐ Nxjerrja vs Analiza (grackë e shpeshtë)
- ⭐ **Nxjerrja (Elicitation)** = përshkruan qëllimin e sistemit në një nivel **që e kupton klienti**. Rezultati = **specifikimi i kërkesave** (në gjuhë natyrale), që shërben si **kontratë** klient–zhvillues. Është aktiviteti më i ndërlikuar, sepse bashkon grupe me formime të ndryshme.
- ⭐ **Analiza** = zhvilluesit **strukturojnë dhe formalizojnë** kërkesat e nxjerra. Rezultati = **modeli i analizës** (në simbolikë formale/gjysmë-formale), i kuptueshëm nga zhvilluesit.

> ⭐ Të dyja shprehin të njëjtin informacion, ndryshojnë vetëm gjuhën: specifikimi → komunikim me **klientin**; modeli i analizës → komunikim mes **zhvilluesve**. Ndodhin njëkohësisht dhe në mënyrë iterative.

> ⭐ Kërkesat fokusohen **VETËM te ajo që sheh përdoruesi**: funksionet, ndërveprimi me sistemin, gabimet që trajton, kushtet e mjedisit. Struktura e brendshme, teknologjia e implementimit, modelimi → **NUK** janë pjesë e kërkesave.

### ⭐ Kërkesat Funksionale
⭐ Përshkruajnë **ndërveprimet mes sistemit dhe mjedisit, PAVARËSISHT nga mënyra e implementimit** (çfarë bën sistemi, jo si). Mjedisi përfshin përdoruesin dhe çdo sistem tjetër të jashtëm. (Shembull SatWatch: ora sinkronizohet automatikisht me GPS — përshkruhet sjellja, jo procesori/gjuha.)

### ⭐ Kërkesat Jofunksionale (klasifikimi — grackë e garantuar)
Përshkruajnë aspekte që **nuk lidhen drejtpërdrejt me sjelljen funksionale**. Përcaktohen njëkohësisht me ato funksionale sepse ndikojnë te i gjithë procesi e kostoja.
| Kategoria | Çfarë mat | Shembull |
|---|---|---|
| **Përdorshmëri (Usability)** | Sa lehtë mësohet/përdoret sistemi | Pa manual përdoruesi |
| **Besueshmëri (Reliability)** | Funksionim korrekt për një periudhë | Pa gabime në rregullim kohe |
| ⭐ **Performancë** | **Koha e përgjigjes, throughput, kujtesa** | Përgjigje brenda 1 sek / 1000 kërkesa/sek |
| **Mbështetje (Supportability)** | Lehtësia e ndryshimit pas lëshimit | Pranon upgrades |

⭐ Nën-koncepte që ngatërrohen:
- **Disponueshmëri (availability)** = % e kohës që sistemi është operacional e i aksesueshëm (p.sh. "99.95% operacional").
- **Siguri (security)** = mbrojtje nga sulme të dëmshme; **Safety** = mosrrezikim jete.
- **Robustness** = sjellje korrekte edhe me input të gabuar.
- **Portability** = lehtësia e zhvendosjes në platformë tjetër.
- **Throughput** = sa punë kryen sistemi në një interval kohor.

> ⭐ Gracka klasike: "1 sekondë / 1000 kërkesa" = **performancë** (jo disponueshmëri); "99.95%" = **disponueshmëri** (jo portabilitet); "enkriptim AES" = **siguri** (jo funksionale); "ndryshim fjalëkalimi" = **funksionale**.

### ⭐ Cilësitë e një specifikimi (dalin si pyetje)
- **I plotë** = të gjitha karakteristikat/skenarët (përfshirë sjelljet e veçanta) janë përshkruar.
- **Konsistent** = pa kërkesa kontradiktore.
- **Pa dykuptimësi** = vetëm një interpretim i mundshëm.
- **Korrekt** = përfaqëson saktë atë që do klienti.
- **Realist** = i implementueshëm brenda kufizimeve.
- ⭐ **I verifikueshëm** = mund të ndërtohen **teste** që demonstrojnë realizimin. (Grackë: "ndërfaqe e mirë", "pa gabime", "shumica e rasteve" → **JO** të verifikueshme, sepse të papërcaktuara/pa metrika.)
- ⭐ **I gjurmueshëm (traceable)** = çdo kërkesë gjurmohet deri te **funksioni korrespondues** (dhe çdo funksion te kërkesa e tij). I rëndësishëm për testim dhe vlerësim ndryshimesh.

### ⭐ Aktorët, Skenarët, Rastet e Përdorimit
- **Aktor** = njësi e jashtme (njeri ose sistem) që ndërvepron me sistemin; është **abstragim roli**, ndodhet **jashtë** kufirit të sistemit. (Hapi i parë i nxjerrjes = identifikimi i aktorëve.)
- **Skenar** = përshkrim **konkret, informal, narrativ** i një rasti specifik nga këndvështrimi i një aktori të vetëm. Mjet i kuptueshëm nga klienti.
- ⭐ **Rast përdorimi (Use Case)** = **abstragim** që përshkruan **të gjithë** skenarët e mundshëm për një funksionalitet; rrjedhë e plotë nga inicializimi në përfundim; iniciohet nga një aktor. Emërtohet me **grup foljor** nga këndvështrimi i përdoruesit, jo më i gjatë se 3 faqe.

### ⭐ Lidhjet mes rasteve të përdorimit (grackë e shpeshtë)
- ⭐ **«include» (përfshi)** = faktorizon **sjellje të përbashkët** mes dy ose më shumë rasteve (p.sh. ViewMap përdoret nga OpenIncident dhe AllocateResources). Redukton tepricën.
- ⭐ **«extend» (zgjero)** = shton sjellje **në raste/kushte të veçanta**, jo të zakonshme (p.sh. ConnectionDown zgjeron ReportEmergency).
- **Komunikuese** = lidhje mes aktorit dhe rastit të përdorimit; tregojnë rrjedhën e informacionit.

### ⭐ DAR (Dokumenti i Analizës së Kërkesave)
⭐ Përshkruan sistemin me kërkesa funksionale + jofunksionale dhe shërben si **bazë kontraktuale** klient–zhvillues. Audienca: klientë, përdorues, menaxhim, analistë, modelues. Shkruhet pasi modeli i rasteve të përdorimit është **stabilizuar**. Struktura kryesore: Hyrje → Sistemi aktual → Sistemi i propozuar (kërkesa funksionale, jofunksionale, modeli i sistemit) → Fjalor.

---

## 9. ANALIZA (Modeli i Analizës) ⭐

⭐ Analiza = krijimi i **modelit të analizës**, që është **korrekt, i plotë, konsistent dhe i verifikueshëm**. Përfaqëson sistemin **nga këndvështrimi i përdoruesit** (jo struktura e brendshme, jo hardware-i, jo si realizohet). Modeli ndryshon në kohë — është një "fotografim" i gjendjes së kërkesave në një moment.

### ⭐ 3 komponentët e modelit të analizës
1. **Modeli funksional** — rastet e përdorimit + skenarët.
2. **Modeli i objekteve** — diagramat e klasave, atributet, lidhjet; shërben si **fjalor vizual** i koncepteve të dukshme për përdoruesin.
3. **Modeli dinamik** — diagramat e **sekuencës** (ndërveprim mes objekteve në një rast përdorimi) + diagramat e **gjendjes** (sjellja e një objekti të vetëm).

### ⭐ Njësi, Kufinj, Kontroll (3 tipet e objekteve)
- ⭐ **Njësi (Entity)** = informacion i qëndrueshëm që kapet e përpunohet nga sistemi (p.sh. Vit, Muaj, Incident, RaportUrgjence).
- ⭐ **Kufi (Boundary)** = ndërveprimet mes aktorëve dhe sistemit, ndërfaqja (p.sh. butona, forma, ekrani LCD). S'përshkruajnë detaje grafike.
- ⭐ **Kontroll (Control)** = realizon secilin rast përdorimi; zakonisht krijohet në fillim të rastit dhe shkatërrohet në fund (p.sh. NdryshoDaten).

Kjo ndarje ndihmon zhvilluesit të dallojnë konceptet që lidhen por janë të ndryshme (p.sh. koha që matet ≠ ekrani që e shfaq atë).

### ⭐ Aktivitetet e analizës (nga rastet e përdorimit te objektet)
Identifikim objektesh njësi → kufi → kontroll → diagrama sekuence → **lidhje (associations)** → **agregime** → **atribute** → diagrama gjendjeje → **trashëgimi** → rishikim i modelit.

⭐ **Rregulla gjuhësore për nxjerrjen e objekteve** (nga teksti i rastit të përdorimit):
| Pjesë e fjalisë | Element i modelit |
|---|---|
| Emër i përgjithshëm | Instancë |
| Emër i përveçëm | Klasë |
| Folje aktive | Operacion |
| Folje me "është një" | **Trashëgimi** |
| Folje me "ka / përbëhet nga" | **Agregim** |
| Folje modale ("duhet të jetë") | Kufizim |
| Mbiemër | **Atribut** |

### Lidhjet & Agregimet
- **Lidhje (association)** = marrëdhënie mes njësive (p.sh. OficerTerreni *shkruan* RaportUrgjence). Ka **emër, rol, kardinalitet** (sa instanca marrin pjesë).
- **Agregim** = marrëdhënie "**e tëra–pjesë**". Dy tipe: **kompozim** (pjesa s'ekziston pa të tërën, p.sh. prefekturë–shtet) dhe **agregim i ndarë** (ekzistojnë të pavarura, p.sh. zjarrfikëse–stacion).
- ⭐ Hiqen lidhjet **e tepërta/të derivuara** — shumë lidhje e bëjnë modelin të palexueshëm.

### ⭐ Diagramat e sekuencës
Tregojnë **si shpërndahet sjellja e një rasti përdorimi te objektet** pjesëmarrëse. **Koha kalon vertikalisht** (nga lart poshtë); shigjetat horizontale = mesazhe; `<<create>>` për krijim objekti, kryq për shkatërrim. ⭐ S'janë të përshtatshme për përdoruesit fundorë (kërkojnë njohuri për simbolet), por të sakta e të kuptueshme për ekipin.

### Rishikimi i modelit
Modeli ndërtohet inkrementalisht; rrallë është i saktë në fillim. Rishikohet që të jetë **korrekt, i plotë, konsistent, pa dykuptimësi, realist dhe i verifikueshëm** — fillimisht nga zhvilluesit, pastaj bashkë me klientët.

---

## 10. MODELIMI I SISTEMIT ⭐⭐

⭐ **Modelimi i sistemit** = transformimi i modelit të analizës në **modelin e sistemit**. Përcakton **si do të ndërtohet sistemi nga brenda** (struktura e brendshme). Nuk është algoritmik — kërkon zgjedhje mes objektivave që shpesh konfliktojnë.

> ⭐ Grackë kyçe (del në çdo tezë): **Analiza** = pamja e jashtme / *çfarë* (nga përdoruesi); **Modelimi** = struktura e brendshme / *si* (nga zhvilluesi). Modeli i analizës **NUK** përmban info për strukturën e brendshme.

⭐ **Qëllimi kryesor:** sistemi ndahet në **nënsisteme të menaxhueshme për të kontrolluar kompleksitetin**; çdo nënsistem i jepet një ekipi që punon i pavarur, me komunikim minimal.

### ⭐ Aktivitetet e modelimit
1. **Identifikim i objektivave** të modelimit (derivohen nga kërkesat jofunksionale).
2. **Dekompozim fillestar** i sistemit në nënsisteme (bazuar te rastet e përdorimit + stile arkitekturore standarde).
3. **Përmirësim i dekompozimit** — fillestari rrallë i plotëson të gjitha objektivat, prandaj rifinohet derisa t'i plotësojë.

### ⭐ Shërbimet & Ndërfaqet e nënsistemeve
- **Shërbim** = bashkësi veprimesh të lidhura që shërbejnë për të njëjtin qëllim.
- ⭐ **Ndërfaqja e nënsistemit** = **emrat e operacioneve, parametrat, tipet, tipet e kthimit**. S'duhet t'i referohet strukturave të brendshme të të dhënave (lista, vektorë) — kjo minimizon ndikimin kur ndryshon implementimi. Fokusi vihet te ndërfaqja, jo te implementimi.

### ⭐ Ciftimi (Coupling) & Kohezioni (grackë e garantuar)
- ⭐ **Ciftim (coupling)** = numri i **varësive MES dy nënsistemeve**. Synohet **i ulët** → nënsistemet relativisht të pavarura → ndryshimet te njëri kanë pak ndikim te tjetri.
- ⭐ **Kohezion** = numri i varësive **BRENDA një nënsistemi**. Synohet **i lartë** = nënsistemi përmban objekte që kanë lidhje me njëri-tjetrin e kryejnë **detyra të ngjashme**. (Kohezion i ulët = objekte pa lidhje.)
- ⭐ **Synimi: kohezion i lartë + ciftim i ulët.** Gjithmonë ka **kompromis** — për të rritur kohezionin, sistemi ndahet në më shumë nënsisteme të vogla, çka rrit ciftimin (më shumë ndërfaqe). Ciftimi i lartë është problematik vetëm kur sistemi ka shumë gjasa të ndryshojë.
- Parim: trajto **7±2 koncepte** për nivel; nëse >9 nënsisteme ose një nënsistem ofron >9 shërbime → ripi dekompozimin.

### ⭐ Shtresat (Layers) & Particionimi
- **Shtresë** = grupim nënsistemesh me shërbime të lidhura; shtresat janë të radhitura — secila mbështetet te ajo poshtë dhe s'di për atë sipër.
- **Arkitekturë e mbyllur** = një shtresë akseson vetëm atë **menjëherë poshtë** (→ ciftim i ulët, testim/integrim inkremental, por çdo nivel shtesë kërkon kohë e hapësirë). **E hapur** = akseson edhe shtresa më të thella.
- **Particionim** = ndarje në nënsisteme të pavarura me përgjegjësi të ndryshme. Dekompozimi është rezultat i particionimit + shtresëzimit.

### ⭐ Stilet e Arkitekturës (dalin shpesh)
| Stili | Karakteristikë |
|---|---|
| ⭐ **Repository** | Nënsisteme që aksesojnë e modifikojnë një **depo qendrore të përbashkët** të dhënash; nënsistemet janë të pavarura, ndërveprojnë vetëm përmes depos. Mirë për DBMS, kompilatorë, sisteme me ndryshime të vazhdueshme. **E meta:** depoja bëhet bottleneck; ciftim i lartë me depon |
| ⭐ **MVC (Model-View-Controller)** | **Model** (logjika/të dhënat), **View** (paraqitja te përdoruesi), **Controller** (koordinon midis tyre). **Rast i veçantë i Repository.** Mirë për sisteme ndërvepruese me shumë pamje të të njëjtit model |
| ⭐ **Klient-Server** | Serveri ofron shërbime për klientët (përmes RPC); rrjedhë e pavarur kontrolli. **Rast i veçantë i Repository.** Mirë për sisteme të shpërndara me shumë të dhëna |
| **Peer-to-Peer** | Çdo nënsistem është edhe klient edhe server (rast i përgjithësuar i klient-server). Më i vështirë për t'u modeluar (deadlocks, rrjedhë e komplikuar) |
| ⭐ **Tri-shtresore (3-tier)** | Ndërfaqe + Logjikë aplikimi + Ruajtje të dhënash. Ndarja lejon modifikim të ndërfaqes pa prekur logjikën |
| **Microservices** | Ndarje në komponentë të vegjël, të pavarur, të shkallëzueshëm (Netflix, Uber, Amazon). Fleksibilitet i lartë por kompleksitet koordinimi |

### ⭐ Çështjet në nivel sistemi (trajtohen para dekompozimit)
Para se nënsistemet të punohen të pavarura, zhvilluesit trajtojnë çështje që prekin **tërë sistemin**:
- **Lidhjet hardware/software** (konfigurimi, komponentët off-the-shelf të enkapsuluar).
- **Menaxhimi i të dhënave** (cilat të dhëna janë të qëndrueshme, ku ruhen — akses i shpejtë e i besueshëm).
- **Kontrolli i aksesit** (kush akseson çfarë — konsistent në tërë sistemin; modelohet me **matricë aksesi**).
- **Rrjedha e kontrollit**.
- **Kushtet e kufinjve** (si inicializohet/përfundon sistemi).

### ⭐ Rrjedha e kontrollit (grackë)
⭐ = **sekuencimi i veprimeve** në sistem (cilat veprime ekzekutohen dhe në çfarë radhe). Është **problem modelimi, JO analize** (në analizë supozohet se objektet ekzistojnë njëkohësisht). (Grackë: "rrjedha e kontrollit ka qëllim përmirësimin e GUI" → **i GABUAR**.) Mekanizmat: i drejtuar nga **procedurat** ose nga **ngjarjet** (event-driven, me një cikël kryesor që pret ngjarje).

### ⭐ Ruajtja e të dhënave të qëndrueshme
Të dhëna që ekzistojnë edhe pas mbylljes së sistemit. 3 mënyra:
- **Skedarë** — për vëllim të madh, të dhëna të përkohshme, dendësi të ulët (log, arkiva).
- **Bazë relacionale** — për akses të njëkohshëm, query komplekse, të dhëna shumë të mëdha.
- **Bazë e orientuar nga objektet** — për lidhje të shumta mes objekteve, zhvillim më të shpejtë por ekzekutim më të ngadaltë.

### ⭐ Objektivat e modelimit (derivohen nga kërkesat jofunksionale)
- **Performancë:** koha e përgjigjes, **throughput**, kujtesa.
- **Varësi (dependability):** robustness, reliability, **disponueshmëri**, fault tolerance, security, safety.
- **Mirëmbajtje:** extensibility, modifiability, adaptability, **portability**, readability, gjurmim kërkesash.
- **Përdoruesi fundor:** utility (sa e mbështet veprimtarinë), usability (sa lehtë përdoret).

> ⭐ Vetëm disa kritere plotësohen njëkohësisht — p.sh. s'mund të kesh sistem njëkohësisht **të sigurt, të shpejtë dhe të lirë**. Prandaj modeluesit caktojnë prioritete.

---

## 11. MODELIMI I NDËRFAQES GRAFIKE (GUI) ⭐

⭐ Modelimi i ndërfaqes ka **më shumë të bëjë me studimin e njerëzve sesa të teknologjisë** — cili është përdoruesi, si mëson të ndërveprojë, si e interpreton informacionin, çfarë pret. (Grackë: "GUI s'kërkon analizë të natyrës njerëzore" → **i GABUAR**.) Nëse software-i është i vështirë për t'u përdorur, përdoruesit s'do t'i pëlqejë pavarësisht fuqisë së tij.

⭐ **Software modelohet ME përdoruesit** — jo *për* ta dhe as *prej* tyre.

### 3 rregullat kryesore të GUI
1. ⭐ **T'i jepet kontrolli përdoruesit** — forma fleksibël ndërveprimi (tastierë/mouse/zë), veprime që mund të **ndërpriten ose çbëhen (undo)**, personalizim (makro), fshehje e detajeve teknike, ndërveprim direkt me objektet në ekran.
2. ⭐ **Të reduktohet nevoja për të mbajtur mend** — sa më shumë të mbajë mend përdoruesi, aq më shumë gabon. Vlera **default** kuptimplote, **shortcuts** intuitive, **metafora** të botës reale, **informacion progresiv** (hierarkik, nga abstrakt te detaji).
3. ⭐ **Të jetë konsistente** — i njëjti standard vizual në tërë sistemin, mekanizma input të njëjtë, ruajtje konsistence në familjen e aplikimeve. Ndryshimet e panevojshme sjellin konfuzion.

### Gabime të zakonshme të GUI (dalin si shembuj)
- **Menute dinamike** (elemente që shfaqen/zhduken) — zgjidhja: komandat gjithmonë të pranishme por të aktivizuara/jo sipas situatës.
- **Duplikim elementesh** menuje — komanda në shumë vende ngatërron përdoruesin.
- **Funksione të fshehura** — funksione vetëm me kombinime tastesh, pa buton të dukshëm.
- **Mungesë shortcut-esh** tastiere ekuivalente me komandat e menusë.
- **Ngatërrim i dritareve primare me kuti dialoguese** — kanë role të ndryshme.
- **Komanda vetëm në toolbar** — toolbar-i duhet të ketë vetëm komandat më të përdorura.
- **Keqpërdorim i group boxes** (rrethim i një elementi të vetëm, group box brenda group box).

---

## Lista e shpejtë e "grackave të garantuara" (Leksionet 6–13)

1. **Verifikim** = sipas specifikimeve; **Validim** = sipas pritjeve të përdoruesit.
2. Testimi **jep info**, NUK garanton mungesë gabimesh.
3. **Regresi** = mbron funksionet **ekzistuese** pas ndryshimeve.
4. **White Box** = njeh kodin; **Black Box / funksional** = s'e njeh.
5. **Load** = shumë përdorues; **Stress** = ngarkesë ekstreme; **Edge case** = vlerë kufitare.
6. Mjetet: Selenium→web, JUnit→Java, LoadRunner→performancë, Jira→defekte, Cucumber→BDD.
7. **Refaktorim** = strukturë pa ndryshuar funksionalitetin.
8. **Commit** = set ndryshimesh në depo; **PR** = kërkesë për bashkim (jo fshirje).
9. Release flow: **Build→Test→Deploy→Monitor**.
10. **KISS / DRY / YAGNI / SOLID (S=Single Responsibility)**.
11. Kërkesa **funksionale** = ndërveprim sistem-mjedis, pavarësisht implementimit.
12. **Performancë** vs **Disponueshmëri** vs **Siguri** vs **Portability** — dije t'i dallosh.
13. **Verifikueshme** = mund të ndërtohen teste; **Gjurmueshme** = deri te funksioni.
14. **DAR** = bazë kontraktuale klient–zhvillues.
15. **Nxjerrja** mbledh (gjuhë klienti); **Analiza** formalizon (model).
16. **«include»** = sjellje e përbashkët; **«extend»** = rast i veçantë.
17. **Analizë** = pamja e jashtme/*çfarë*; **Modelim** = struktura e brendshme/*si*.
18. **Kohezion i lartë** (detyra të ngjashme) + **Ciftim i ulët** (varësi mes nënsistemeve).
19. **Repository** = depo qendrore; **MVC** & **Klient-Server** = raste të veçanta të saj.
20. **Rrjedha e kontrollit** = sekuencim veprimesh (problem modelimi, jo GUI).
21. Njësi (entity) / Kufi (boundary) / Kontroll — 3 tipet e objekteve të analizës.
22. **GUI** = studim i njerëzve, jo teknologjisë; modelohet **ME** përdoruesit.
