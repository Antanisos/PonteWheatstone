# Ponte di Wheatstone

Progetto del corso di [Fondamenti di elettrotecnica - cod 03AZHLX](https://didattica.polito.it/pls/portal30/gap.pkg_guide.viewGap?p_cod_ins=03AZHLX&p_a_acc=2025&p_header=S&p_lang=IT&multi=N) del cds triennale di Elettrica del [Politecnico di Torino](www.polito.it).

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Materiale utilizzato

- Arduino Uno rev3 o compatibile
- Resistore 2k
- Resistore 220
- Resistore 330
- Resistore 1k
- Potenziometro 10k
- Bredboard
- Jumpers maschio - maschio
- Usb B per il collegamento seriale al computer

## Realizzazione
Realizzare il circuito come in figura.
[](https://github.com/CristianAmateis/PonteWheatstone/assets/schema_circuito.png)

Caricare il codice presente all'interno di [Ponte_Wheatstone.ino](https://github.com/CristianAmateis/PonteWheatstone/assets/Ponte_Wheatstone.ino) sulla scheda Arduino.

Visualizzare i dati dalla porta seriale in tempo reale.

## Funzionamento

Il ponte di Wheatstone è un circuito notevole che permette di illustrare il comportamento della corrente applicando la legge di Kirkhoff delle tensioni.
In questa particolare configurazione delle resistenze otteniamo che se la produttoria delle resistenze opposte è equivalente allora la corrente passante per il "ponte" (ovvero la resistenza centrale che collega i due rami) è nulla. In questo caso specifico abbiamo una coppia di resistenze pari a $2k\Omega$ e $330\Omega$ ottenendo:
$R=2k\Omega\cdot330\Omega=660\ 000\Omega^2$
Segue che per avere corrente nulla all'interno del ponte è necessario impostare nel potenziometro una resistenza pari a:
$R_{pot}=\frac{660 000\Omega^2}{220\Omega}=3k\Omega$ 
Attraverso la porta seriale è possibile vedere in tempo reale sia la differenza di potenziale tra i capi del ponte, che la corrente passante, che il valore del potenziometro.

### Calcolo del valore del potenziometro
TODO

## Ringraziamenti

Si ringrazia [Iacopo Sbalchiero](https://github.com/IacopoSb) per il contributo nella realizzazione del circuito e del repository.