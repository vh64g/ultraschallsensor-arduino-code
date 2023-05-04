/* 
Wichtig:

1. Variablen:

Variablen sind Wörter oder Buchstaben welche wir gleich einem bestimmten Wert setzten, Variablen kennen wir bereits aus der Mathematik, dort haben wir zum Beispiel x oder y als Variable. 
Beim Programmieren können wir unsere Variablen zwar auch x, y, z, ... nennen, meist nehmen wir jedoch ganze Wörter oder Abkürzungen für ganze Wörter, die beschreiben, welche Werte wir in der Variable abspeichern.
z.B. int(Deklaration) pin = 5; Ab nun an können wir das Wort "pin" verwenden wenn wir "5" sagen wollen. Dies macht Sinn um Code lesbarer und editierbarer zu machen.
Sollten wir so unseren pin ändern wollen müssen wir nur diese eine Zeile verändern, statt jedes mal wo wir 5 geschrieben haben diese durch die neue Zahl ersetzen zu müssen.

2. Datentypen (Arten von Variablen)

    int, float, long stehen dabei für die Art einer Variable und zeigen zugleich das wir eine neue Variable erstellen wollen, existiert bereits eine Variable mit demselben Namen wird diese Überschrieben.

    int: Kurz für Integer, Integer stellen ganze Zahlen dar z.B. 1,2,3,... aber auch -1,-2,-3,... oder 0
    float: Ist kurz für floating-point-number, so heißt die Variable wenn sie eine Zahl mit flexiblem Punkt(=Komma in der Mathematik) definiert wird. z.B. 9.3 (9,3), 3.12006 (3,12006), ...
            Bim Programmieren verwenden wir statt Kommatas immer Punkte, da wir Kommatas bereits zur Trennung mehrerer Elemente verwenden z.B. 3,5 => 3 und 5, 3,6,2 => 3 und sechs und zwei, ... (immer als einzelne Elemente)
    long: Dieser Datentyp ist eigentlich für extrem große Zahlen gedacht(long => lang => lange Zahl), Variablen die mit diesem Datentyp definiert sind sollten ausschließlich ganze Zahlen (Integer) sein.
    String: Dieser Datentyp kann Buchstaben, SOnderzeichen und Zahlen enthalten (meist aber nur ASCII Zeichen), z.B. "Hallo Welt", "<3", "Mein Name ist ", ...
            Der Plus Operator kettet in den meisten Programmiersprachen mehrere Strings aneinander z.B. "Ich mag " + "Programmieren" = "Ich mag Programmieren"
            Strings stehen immer in Anführungszeichen, damit sie vom Code unterschieden werden können z.B. pin = 5 (wie oben definiert .-.), "pin" = pin
            Auch mal geht in vielen Programmiersprachen und macht das selbe wie in der Mathematik: wiederholte Addition, z.B. "#"*3 => "###" oder "Ich mag Programmieren "*2 => "Ich mag Programmieren Ich mag Programmieren"
              Achtung: "Ich mag Programmieren"*2 = "Ich mag ProgrammierenIch mag Programmieren"

Ich hoffe du hast Variablen und Datentypen jetzt verstanden, wenn du dich testen willst kannst du gerne in einem online Interpreter von Python versuchen verschiedene Vvariablen zu erstellen und miteinander zu kombinieren.
Ein möglicher online Interpreter ist z.B. https://www.programiz.com/python-programming/online-compiler/ hier kannt du im linken Fenster deinen Code schreiben und wenn du dann auf "Run" drückst siehst du im rechten Fenster
deine Ausgabe oder dein Fehler ;)
Mit print(var) kannst du den Inhalt einer Variable ausgeben.
Python hat zudem einen bisschen leichteren Syntax, so das du nicht den Typ einer Variable definieren musst, dies übernimmt python selbst. Schreibe einfach: z.B. alter="16"; und du hast eine Variable "alter" mit dem Wert 15
  und dem Datentyp Int. Wenn du alter=5.1; schreibst ist der Datentyp von alter float und wenn du alter="16"; schreibst ist der Datentyp str(kurz für String). 

Hier auch ein paar Beispiele als Quizz, die Lösungen sind unten:

Hinweis 1:
Manche Aufgaben aus dem Quizz habe ich mit neuem Inhalt erweitert, den ich noch nicht besprochen haben, nicht frustrieren lassen falls du das nicht weißt, auch ohne diese Aufgaben zu schaffen bist du immer noch super,
und Programmieren besteht zu einem Großteil aus nachlesen/googeln/ausprobieren (Stackoverflow ist eine sehr beliebte Seite zum nachsehen), also falls du richtig Programmieren lernen willst fange gleich mal an und schaue ob du
Inhalte welche du nicht kennst selbst durch ausprobieren und/oder nachsehen/googeln lösen kannst, denn dass ist im Programmieren niemals schummeln, wir nennen das neues Wissen sammeln xD.
Es kann auch helfen Teillösungen auszugeben, dafür kannst du einfach mehrere aneinandergereiht rechenoperatoren voneinander trennen und getrennt ausgeben, z.B.
lsn = (r + z)/2; => teil_eins = r + z; print(teil_eins); lsn = teil_eins/2; print(lsn);

Hinweis 2:
mit: print(type(var)); , kannst du dir den Datentyp einer Variable ausgeben lassen, bevor du in den lösungen nachschaust, versuche doch einfach selbst dir die Lösung ausgeben zu lassen.
In die Lösungen schauen bringt weitaus weniger, das Gehirn merkt sich sowas eher wenn es Belohnt wird, und selbst etwas rausfinden/entdecken ist eine viel größere Belohnung als etwas nun nachzuschauen in den Lösungen!
Das ist auch ein Grund weswegen wir niemals sagen würden: googeln, ausprobieren, oder eine lösung ausgeben lassen durch Code ist schummeln!
(Das musste ich auch erst durch Timm lernen, es ist keine Schwäche etwas nicht zu Wissen, die Schwäche ist es nicht selbst herauszufinden)

    1. Was geben die folgenden Codebeispiele aus?
        1.1:
              alter = 16;
              print(alter*3);
        1.2:
              alter = 16.2;
              print(alter+3);
        1.3:
              alter_person_eins = 16;
              alter_person_zwei = 17;
              da = (alter_person_eins + alter_person_zwei)/2;
              print(da);
        1.4:
              alter = (16**3)//4.3;
        1.5:
              alter = "16";
              print(alter*2);
    
    2. Welchen Datentyp haben die folgenden Variablen?
        2.1: geburtstag = "24.06.2006";
        2.2: fach = None;
        2.3: nett = True;
        2.4: alter = 16;
        2.4: winkel = "16.4";
        2.5: note = 14.5;

Nun können wir hoffentlich zu dem nächsten Wichtigen Punkt kommen der nötig ist um das folgende Programm zu verstehen:

3. Arrays und ihre Längen:

Arrays kannst du dir eigentlich wie dein Regal vorstellen, nur rein theoretisch unendlich hoch, du kannst in deinem Regal Sachen abstellen, damit dein Zimmer ordentlicher wirkt.
Denn wenn alle deine Sachen irgendwo in deinem Zimmer liegen würden, wäre dieses ganz schön unordentlich :).
In Arrays stellst du Nummern, Strings, Variablen, und eigentlich fast alles andere ab, was du nicht einfach irgendwo in deinem Code rumliegen haben willst. Dein Code wird danach deutlich ordentlicher aussehen!
Du solltest dir nur merken auf welchem Regalbrett du deine Sachen ablegst!
Auch kannst du Regale in Regalen abstellen, also Arrays in Arrays erstellen, all das bringe ich dir hoffentlich jetzt bei!

Um dein erstes Regal in c++ zu erstellen kannst du folgenden Code schreiben:

int arr[5] = {0, 1, 2, 3, 4}

Aber fangen wir beim Anfang an, ich will dich ja nicht überfordern!

Zuerst fragst du dich wahrscheinlich warum der Array als Integer definiert wurde, und wenn nicht, dann stellst du dir die Frage spätestens jetzt .-.
Einen Array also dein Regal als eine Zahl ohne Nachkommastellen zu definieren, mag zuerst ziehmlich komisch klingen, denn dein Regal ist ja definitiv nicht eine Zahl sondern naja... ein Regal, also Fachsprache Array...
Die Antwort ist so einfach wie Sie vielleicht auch verwirrend sein mag: Wir sagen gar nicht, dass das Regal eine Zahl wäre!
Aber was sagen wir dann damit aus? Wenn du willst kannst du ja mal schauen ob du es selbst herausfinden kannst (Nachdenken/Googeln/Ausprobieren?) :)
Wenn du nur nachgedacht hast, was ein super erster Schritt ist, dann versuche deine Vermutung am besten selbst noch zu validieren, das hilft wirklich viel!
Wenn du es herausgefunden hast, dann lese gerne weiter, du kannst natürlich auch ohne eigenes nachforschen weiterlesen, dir muss aber klar sein, dass der Lerneffekt, dann deutlich geringer ist! 

Die eigentlichee Bedeutung dieser drei Buchstaben ist, dass wir festlegen, dass wir nur Zahlen in unser Regal stellen dürfen.
Aber das ist doch Mega ungeschickt oder? Was wenn ich zu meinen Zahlen auch noch andere Sachen in mein Regal stellen will?
Um das zu ermöglichen haben wir in Kotlin so zum Beispiel den Datentyp all kurz *, dieser erlaubt uns in einer Variable, alle möglichen Werte zu speichern. Und auch unser Regal(Array) ist in diesem Fall eine Variable namens arr!
In Python müssen wir uns garnicht erst festlegen, Python legt den Datentyp des Regals selbst fest, und natürlich dürfen wir verschiedene Datentypen in unser Regal stellen!
Ob wir auch in c++ verschiedene Datentypen in einer Array(einem Regal) speichern(lagern) können? Ich weiß es nicht,aber vielleicht willst du es ja nachschauen und mir sagen? :)

Ich hoffee du hast nun verstanden was ich mit dem int mache im Code, vielleicht weißt du jetzt ja sogar mehr über Arrays in c++ als ich wenn du all meine Aufgaben gemachst hast .-.
Aber gehen wir weiter: Als nächstes benennen wir unser Regal(unsere Array) erst einmal, in diesem Fall gebe ich unserem Regel den Namen arr (kurz für Array), aber mich würde es natürlich freuen
wenn du deinem einen anderen Namen gibst, sonst verwechseln wir noch unsere Regale. Hierbei kannst du Ruhig mal kreativ werden und schauen welche Namen du Variablen geben kannst, spoiler in den meisten Sprachen darfst
du keine ... verwenden. (Uiii ich sehe gerade da ist wwohl ein Teil verloren gegangen, vielleicht wärst du so nett und würdest ihn ergänzen?) (Meine Lösung findest du in den Lösungen unter Verlorene Textstellen 1.,
andere Lösungen können natürlich auch korrekt sein, ich kann dir sogar verraten: es gibt andere Lösungen, im Zweifel frag mich doch einfach!) 
Zum testen kannst du gerne wieder den online Python Interpreter nehmen, Python ist vom Syntax her deutlich einfacher, viele Konzepte lassen sich aber Übertragen.
Und Python ist eine Sprache, die wirklich nutzlich ist! https://www.programiz.com/python-programming/online-compiler/
Du kannst natürlich einfach normale Variablen erstellen und schauen ob du Fehlermeldungen bekommst, aber probiere doch auch mal einen Array in Python zu erstellen!
In Python verwenden wir an der Stelle von Arrays meist Listen welche wir wie folgt erstellen: z.B. liste = [0, 1, 2, "hallo", True, 4, 1];
Semikolons werden in Python eigentlich im Normalfall nicht benötigt, ich kann dir aber nur empfehlen das du es dir angewöhnst sie zu verwenden, denn in c++ sind Sie notwendig!

Anschließend haben wir nun die eckige Klammer mit der 5 innen drin, und hier muss ich zuerst einmal Zugeben, dass ich falsch lag, auch ich bin nicht perfekt .-.
Die 5 gibt an wie viele Reaglbretter unser Regal hat, bzw. wie viele Elemente wir in den Array speichern wollen. Zwar stimmt es nun, dass der höchste Index des Arrays 4 ist, da wir bei Null anfangen zu zählen,
aber die Länge eines Arrays geben wir dennoch mit unserem normalen Verständnis von Zahlen ab, somit besitzt der Array 5 Elemente, oder anders gesagt das Regal hat fünf Bretter von 0 bis 4 durchnummeriert.
Auch das scheint nun aber ziehmlich einschränkend, und hier habe ich eine Lösung für dich. Die Zahl innerhalb der eckigen Klammer musst du nicht schreiben auch: int arr[] = {0,1,2,3,4}; funktioniert.

So aber nun zum eigentlichen Regal, ähhh Array:
Er ist wie folgt aufgebaut: {0,1,2,3,4}
die geschweifte Klammer zeigt uns, das wir es mit einem Array zu tun haben, und umfasst den Inhalt des Array(die Regalbretter) auf dem ersten (oder besser gesagt Nullten) Regalbrett habe ich in diesem Fall eine Zahl abgelegt.
Du erinnerst dich vielleicht noch, ich darf tatsächlich auch nichts anderes als einen Int also eine ganze Zahl in meinem Regal ablegen.
Tatsächlich kannst du hier aber natürlich auch die Zahl 3 oder die Zahl 267 ablegen, das ist ziehmlich egal, aber auch wenn du eine 354 auf diesem Regalbrett ablegst, es ist immer noch das nullte Regalbrett!
Auf dem ersten Regalbrett, habe ich die 1 abgelegt, denke daran wie oben erwähnt, das für uns erste Regalbrett ist das nullte, wir beginnen an bei null zu zählen!
Auch für dieses Regalbrett, gilt das selbe wie für das nullte, und dasselbe gilt auch für alle weiteren Regalbretter!
Versuche doch mal ein Regal mit 7 Brettern anzulegen in welchem du deine Lieblingswörter speicherst, aber denke an den richtigen Type (String)!
Da wir nun in Bereichen ankommen welche sich in c++, schon "etwas" von Python unterscheiden, würde ich dir raten diese Datei mit der Arduino IDE (Integrated Development Environment) zu öffen.
Falls du diese nicht hast kannst du sie dir hier runterladen: https://www.arduino.cc/en/software
Wenn du keinen Computer hast, melde dich gerne bei mir, dann finden wir sicher eine Lösung. Aber schaue doch mal nach ob du in deiner Schule einen Computer zur Verfügung hast!
Wenn du die Datei an deinem Computer in der Arduino IDE geöffnet hast, dann kannst du nun in die folgende Zeile deinen Code schreiben, und anschließend auf den Hacken drücken!
Wenn du einen Fehler in deinem Code hast wird dir eine rote Fehlermeldung in der Konsole angezeigt, wenn du nicht verstehst, was die Fehlermeldung von dir will, dann google sie doch mal!
Ansonsten kannst du dich aber auch gerne bei mir melden und nachfragen, vielleicht kann ich ja helfen. */

int arr[] = {0,1,2,3,4}; // ersetze den Array durch deinen eigenen!

/*
Du bist nun vielleicht auch schob bisschen mit Kommentaren vertraut die ich hier ja vviel nutze, ich denke du kannst dir inzwischen selbst erschließen, wie dú diese erstellen kannst, und was sie machen!
Ansonsten google doch einfach mal danach!

Aber gut wenn du jetzt verstanden hast, wie du Arrays erstellen kannst, ist es auch noch wwichtig, das du verstehst, wie du die Länge eines Arrays vom Programm bestimmen lassen kannst,
wäre ja voll ätzend wenn du die selbst irgendwo abrufbar speichern müsstest.
Btw abrufbar, natürlich bringt unser Regal auch nur was wwenn wir unsere Sachen auch uns im Regal anschauen können, bei einem unendlich großen Regal, kann man da schnell den Überblick verlieren!
Um ein Element aus einem Array abzurufen brauchst du eigentlich nur seine Position zu kennen, du musst also wissen auf welchem Regalbrett sich dein Gegenstand befindet.
Wenn du nun den Gegenstand abrufen willst geht das wie folgt: */
int pos = 0;
int gegenstand = arr[pos];
/*
pos ist die Position des Elements, bzw. die Nummer des Regalbretts. Denke daran das unterste Regalbrett ist das nullte Regalbrett!
Leider ist der Code nicht zu hundert Prozent c++ code, deswegen können wir kein cout<<var; nehmen um eine Variable auszugeben.
Da die Sprache aber auch auf C baasiert und sehr ähnlich ist in vielerlei Hinsicht, kannst du auch gerne einen c++ online compiler verwenden, um Code auszuprobieren. https://www.onlinegdb.com/online_c++_compiler
Richtiges C++ ist jedoch zum Teil deutlich schwerer manchmal auch deutlich einfacher zu schreiben!
Es kann aber auch eine gute Herausforderung sein zu versuchen Arduino Code in C++ Code umzuwandeln und zurück, würde ich fürs erste aber nicht empfehlen.

Aber nun dazu wie wwir die Länge eines Arrays bestimmen, oder eben wie wir bestimmen wie viele Regalbretter unser Regal hat.
Ich nutze dazu eine etwas komplexere Methode, die relativ schwer zu erklären und verstehen ist, und ich selbst habe sie auch noch nicht ganz verstanden.
Also es sollte kein Problem sein wenn du nicht exakt beschreiben kannst, was diese Zeile macht, solange du weißt, das sie dir die Länge des Arrays ausgibt. */
int arrayLength = *(&arr + 1) - arr;
/*
Ich versuche zu erklären xD: (Die Erklärung habe ich hier von Stackoverflow, ich werde sie aber versuchen bisschen einfacher zu formulieren: https://stackoverflow.com/questions/61237796/how-does-arr-1-arr-give-the-length-in-elements-of-array-arr)
Zuerst einmal fangen wir bei &arr an, dies giebt uns einen Pointer zu der Memory Adresse an der die Variable unseres Regales gespeichert ist. Du kannst dir das Vorstellen wie wenn der Computer ein Haus ist,
in dem das Regal steht, dann ist der Pointer eine egbeschreibung die dich zu dem Ort im Haus führt wo das Regal steht. Eine ganz gute aber nicht so einfache Erklärung findest du hier: https://www.freecodecamp.org/news/pointers-in-c-are-not-as-difficult-as-you-think/#1-what-exactly-are-pointers
Aber ich hoffe eigentlich, dass ich es schaffe im folgenden dir die Zeile so zu erklären, dass du sie halbegs verstehst ohne weitere Informationen zu benötigen.

Lese dir folgende Erklärung ruhig mehrfach durch und versuche zu folgen!

Die Wegbeschreibung zu dem Ort wo unser Regal steht ist in diesem Fall eine Nummer.

Alle Zahlen die Existieren bestehen aus 4 Bytes bzw 4*8 = 32 Bits.

Unser Array besteht aus 5 Zahlen, somit besteht er aus 5*4 = 20 Bytes. 

Nehmen wir an die Wegbeschreibung zu unserem Regal ist die Zahl 100.

arr selbst ist das Regal, es besteht aber aus einem Pointer also einer Wegbeschreibung zum ersten (nullten) Regalbrett, welches sich am selben Ort befindet wie das Regal selbst.

Die Wegbeschreibung die arr uns gibt ist also identisch zu der Wegbeschreibung zu unserem Regal, sie besitzt den Wert 100.

Aber die Wegbeschreibung die uns arr also der Pointer zum ersten (nullten) Regalbrett gibt verweist auf das erste Regalbrett.

Auf dem ersten (nullten) Regalbrett befindet sich immer eine Zahl mit 4 Bytes, da wir nur Zahlen in unserem Regal erlauben. (Type int)

&arr gibt uns hingegen den Pointer zum "int[5]"" also dem ganzen Regal, sein Wert beträgt genauso wie der von arr 100, die Wegbeschreibung zu unserem Regal.

&arr verweist aber auf das gesamte Regal also auf insgesamt 5*4 = 20 Bytes.

Wenn wir Pointer mit einer Zahl Addieren, addieren wir nicht einfach eine Zahl zu dem Pointer hinzu sprich in dem Fall 100 + 1 =101, sondern n (die Zahl die wir addieren (im Beispiel = 1)) mal die Anzahl an Bytes
auf die der Pointer verweist.

arr + 1 gibt uns somit 100 + 4 (4 Bytes = eine Zahl) = 104 (104 entspricht tatsächlich auch der Wegbeschreibung zum ersten. (von null aus) Regalbrett)

&arr + 1 gibt uns hingegen 100 + 20 (5 Zahlen mit jeweils 4 Bytes) = 120.

*(&arr + 1) - arr, ist somit eig das selbe wie die Adresse des letzten Elementes des Arrays(Die Beschreibung zum obersten Regalbrett) = 120 - 100 (Die Beschreibung zum nullten Regalbrett(Die Adresse des ersten Elementes des Arrays))

120 - 100 = 20 gibt uns an wie viele Bytes unser Array umfasst, das wird automatisch durch die Anzahl an Bytes die eine Zahl besitzt geteilt, also 4 Bytes aus denen eine Zahl besteht, gibt uns eine Länge von 5 Zahlen!

Wir haben nun selbst die Länge unseres Arrays berechnet, mithilfe der Logik von Pointern!
Dadurch wird nun auch klar, weshalb wir ein Element an einer bestimmten Stelle im Array durch folgenden Code bekommen können: *(arr + pos).
Versuche zunächst selbst auf die Antwort zu kommen!

arr ist ein Pointer zum nullten Element des Arrays mit der Adresse 100 (aus unserem Beispiel).
arr verweist somit auf die 4 Bytes der nullten Zahl. arr + 0 gibt uns 100 + (0*4) (denke an Pointer Logik der Addition) = 100, was die Adresse zum nullten Element ist.
arr + 1 gibt uns somit 100 + (1*4) was uns 104 gibt, die Adresse des ersten Elementes des Arrays.

Wenn du bei Pointern nicht ganz mitgekommen bist ist das absolut kein Problem, frage mich gerne falls du eine noch eine bessere Ausführlichere Erklärung brauchst, dass würde ich dann aber persöhnlich erklären, dann ist es einfacher.

Die letzten beiden Sachen die ich nun eigentlich nur noch erklären muss sind Funktionen und for loops, danach solltest du bereits den folgenden Code verstehen können!


4. Funktionen

Funktionn sind einfach Codeblöcke, normalerweiße wird Code von oben nach unten in der Reinfolge ausgeführt, Funktionen sind eigentlich auch nur Variablen welche wenn du sie aufrufst einen bestimmten Code ausführen.
z.B.
void halloWelt(){
  String nachricht = "Hallo Welt";
}

erstellt eine Funktion mit dem Namen halloWelt die Code beinhaltet.

{halloWelt();}

führt den Code der in der Funktion halloWelt steht aus.

5. for loops:

Ein for loop führt den Code der in den geschwweiften Klammern folgt genau dann aus, wenn er ausgeführt wird und die Bedingung zutrifft, er wird ab der ersten Ausführung so lange ausgeführt bis die Bestimmung nicht mehr zutrifft.

for (int i=0; i<2; i++){
  //Code
}

führt also Code so lange aus bis die neu definierte Variable die eine Zahl ist, und anfangs den Wert Null besitzt (int i=0) nicht mehr kleiner als 2 ist (i<2), nach jeder Code Durchführung wird jedoch eins zu i addiert (i++).
Ablauf dieser Schleife:
i(0)<2 -> //Code -> i+1(0+1=1) -> i(1) < 2 -> //Code -> i+1 (1+1=2) -> i(2)<2 -> Unwahre Aussage die Schleife wird nicht erneut ausgeführt.


Lösungen zu den Quizz:

  1. Quizz:

    1. Was geben die folgenden Codebeispiele aus?

      1.1: 48
      1.2: 19.2
      1.3: 19.5
      1.4: Es gibt keine Ausgabe, da kein Print Statement vorhanden ist. 
            Btw:
              ** => hoch, z.B. 3**3 = 9, ...
              // => floor division = division, aber jegliche Nachkommastellen werden einfach weggelassen also, z.B. 5/2 = 2.5 aufgerundet 3 aber 5//2 = 2
      1.5: "1616"

    2. Welchen Datentyp haben die folgenden Variablen?

      2.1: str (String)
      2.2: Keinen, die Variable ist ein leerer Platzhalter ohne Wert, Sie wird wahrscheinlich zu einem späteren Zeitpunkt geändert und erhält dann auch einen Datentyp
      2.3: bool(Boolean), diese Art von Datentyp kann entweder 1/True oder 0/False annehmen also angeben ob etwas wahr oder falsch ist, dieser Datentyp ist einer der sehr häufig unbemerkt verwendet wird:
            z.B. print(16<8); => False, print(16>=2); => True, ...
      2.4: str (String)
      2.5: float
  
  Verlorene Textstellen:
    1. Sonderzeichen

*/



//Define pin arrays
int triggers[] = {2,7}; //Array mit zwei Elementen angelegt durchnummeriert von 0 bis 1 (Regal mit 2 Regalbrettern angelegt, durchnummeriert von 0 bis 1). Dieser Array enthält alle Pin Nummern, die als Trigger verwwendet werden.
int echos[] = {4,8}; //Array mit zwei Elementen angelegt durchnummeriert von 0 bis 1 (Regal mit 2 Regalbrettern angelegt, durchnummeriert von 0 bis 1). Dieser Array enthält alle Pin Nummern, die als Echos verwwendet werden.

// Get pin array lengths
int triggerCount = *(&triggers+1) - triggers; //Anzahl an Elementen im Array namens "triggers" (2) (Anzahl an Regalbrettern in unserem Regal) wird in variable "triggerCount" gespeichert
int echoCount = *(&echos+1) - echos; //Anzahl an Elementen im Array namens "echos" (2) (Anzahl an Regalbrettern in unserem Regal)wird in variable "echoCount" gespeichert
int de = 500;

//Define constants
float soundSpeed = 0.03432; // Schallgeschwindichkeit

//Setup pins, serial
void setup() { //Diese InBuild Funktion wird einaml aufgerufen sobald der Code gestartet und der Arduino Uno bereit ist.
  for(int i=0; i < triggerCount; i++){pinMode(*(triggers + i), OUTPUT);} //Setzte jeden Pin mit einer Nummer aus dem arrays "triggers" auf OUTPUT
  for(int i=0; i < echoCount; i++){pinMode(*(echos + 1), INPUT);} //Setzte jeden Pin mit einer Nummer aus dem arrays "echos" auf INPUT
  Serial.begin(9600); 
}

//Get the sensor data of each sensor
void getSensorData(){ // Erstellt eine eigene Funktion mit dem Namen "getSensorData"
  for (int i=0;i<triggerCount; i++){ //Führt den Folgenden Code so oft durch wie es Elemente in der liste "triggers" gibt, i ist dabei die position des Elementes (Regalbretts)
      digitalWrite(*(triggers + i), 0); //Element wird wie oben beschrieben aus dem Array ausgelesen (Wir schauen uns an was auf dem Regalbrett der Nummer i steht) der mit dieser Zahl assozierte Pin wird ausgeschaltet
      digitalWrite(*(triggers + i), 1); //Element wird wie oben beschrieben aus dem Array ausgelesen (Wir schauen uns an was auf dem Regalbrett der Nummer i steht) der mit dieser Zahl assozierte Pin wird angeschaltet
      digitalWrite(*(triggers + i), 0); //Element wird wie oben beschrieben aus dem Array ausgelesen (Wir schauen uns an was auf dem Regalbrett der Nummer i steht) der mit dieser Zahl assozierte Pin wird ausgeschaltet
      float du = pulseIn(*(echos + i),1); //Element wird wie oben beschrieben aus dem Array ausgelesen (Wir schauen uns an was auf dem Regalbrett der Nummer i steht) der mit dieser Zahl assozierte Pin wird ausgelesen
      float distance = (du/2)*soundSpeed; //Der ausgelesene Wert ist die Dauer in ms wie lange das ausgesendete Signal des Ultraschallsensors gebraucht hat um zurückzukehren. Durch 2 mal Geschwindichkeit = Strecke (Physik)
  }
}

// Main loop
void loop(){ //Diese InBuild Funktion wird wiederholt aufgerufen sobald der Code gestartet und der Arduino Uno bereit ist.
  Serial.println("-------------------------------l---------------------------------"); //Logging
  Serial.println("New run started:"); //Logging
  getSensorData(); //Aufrufen der eigenen Funktion
  delay(de); //Verzögerung
}
