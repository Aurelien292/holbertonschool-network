![image](images/google.jpg)

# What happens when you type google.com in your browser and press Enter


### Cheminement de la requete 

![image](images/bandeau.png)
1. DNS request
2. TCP/IP
3. Firewall
4. HTTPS/SSL
5. Load-balancer
6. Web server
7. Application server
8. Database
  
![image](images/bandeau.png)




### 1. DNS request 

 Le navigateur a envoyé une requête DNS pour résoudre le nom de domaine www.google.fr en une adresse IP, ici :

![image](images/DNS.png)

### Explication

__Request URL__

" https://www.google.fr/ "

C’est l’URL complète à laquelle la requête est envoyée. Le __https://__ indique que la connexion est sécurisée via TLS/SSL.


__Request Method__

```
GET
```

Il s’agit d’une requête HTTP GET, qui signifie que le navigateur demande simplement une ressource

__Status Code__

```
200 OK
```

Cela indique que le serveur a répondu avec succès à la requête

__Remote Address__
```
142.251.37.227:443
```

*__IP__* : C’est l’adresse du serveur Google qui a traité ta requête.

*__Port 443__* : Port utilisé pour les connexions HTTPS sécurisées (TLS).
![image](images/bandeau.png)
### 2. TCP/IP

#### Introduction :
TCP/IP (Transmission Control Protocol / Internet Protocol) est un ensemble de protocoles utilisés pour permettre la communication entre des appareils sur Internet ou un réseau privé. Ces protocoles régissent comment les données sont envoyées et reçues entre différents systèmes.

#### protocole IP (Internet Protocol) :
* S’occupe de l’adressage et de l’acheminement des paquets de données.

* Chaque machine connectée à Internet a une adresse IP unique (ex. : 142.251.37.227 pour Google).

* IP divise les données en petits paquets, chacun avec l’adresse de destination.

* Les paquets peuvent prendre des chemins différents à travers le réseau pour atteindre leur destination.

* IP est un protocole non fiable : il n’assure ni l’ordre des paquets ni leur livraison garantie.

#### TCP (Transmission Control Protocol) :

Il établit une connexion fiable entre le client (navigateur) et le serveur.

#### Fonctionnalités :

*__Séquencement__* : remet les paquets dans le bon ordre.

*__Contrôle d’erreurs__* : vérifie que les données sont arrivées correctement.

*__Réémission :__* renvoie les paquets perdus.

*__Contrôle de flux :__* évite de surcharger l’autre partie.
![image](images/bandeau.png)
### 3. Firewall

Est un dispositif de sécurité réseau qui sert à contrôler et filtrer les communications réseau (entrantes et sortantes) entre un réseau interne et l'extérieur (Internet) .Il sert de barrière entre un réseau sécurisé et un réseau non sécurisé (comme Internet), et il est conçu pour empêcher les accès non autorisés tout en permettant les connexions légitimes.

__Règles de filtrage :__
Le pare-feu applique des règles pré-définies (basées sur des critères comme les adresses IP, les ports, les protocoles, etc.) pour filtrer le trafic. Ces règles peuvent être configurées pour bloquer ou autoriser certains types de connexions.
![image](images/bandeau.png)
### 4. HTTPS/SSL

*HTTPS* signifie *__HyperText Transfer Protocol Secure__*.
C’est la version sécurisée du protocole HTTP, qui est utilisé pour transférer des pages web entre un serveur et un navigateur.

La sécurité d’HTTPS repose sur un protocole de chiffrement appelé SSL ou plus précisément TLS (la version moderne).

#### SSL/TLS

* SSL = Secure Sockets Layer

* TLS = Transport Layer Security (remplace SSL, plus sécurisé)

- Chiffre les données échangées entre ton navigateur et le serveur.

- Vérifie l’identité du serveur grâce à un certificat numérique.
![image](images/bandeau.png)
### 5. Load-balancer 

Un load balancer est un composant réseau ou logiciel qui a pour mission de répartir intelligemment le trafic entre plusieurs serveurs appelé aussi __( Scalabilité horizontale )__.
Il agit comme un répartiteur de demandes pour assurer que :

- Aucun serveur n’est surchargé,

- Le système reste rapide, disponible, et fiable,

- L’utilisateur obtient une réponse rapide et continue même si un serveur tombe en panne.

Exemple : 
via le site https://dnschecker.org/#A/www.google.com on peut observer les differentes ip données par google 
![image](images/Load_balancer.png)

Via Vscode : 
changement de l'ip donné pas google 

![image](images/IP1.png)
![image](images/IP2.png)

![image](images/bandeau.png)
### 6. Web server

Un __serveur web__ est un logiciel, comme Nginx ou Apache, chargé de recevoir les requêtes envoyées par un navigateur et d’y répondre en envoyant les ressources nécessaires pour afficher un site web.
Ce qu’il fait concrètement :

* Il traite les requêtes HTTP/HTTPS provenant des utilisateurs.

* Il renvoie des __contenus statiques__ : pages HTML, images, fichiers CSS ou JavaScript.

* Si la demande nécessite un traitement plus complexe (contenu personnalisé, données utilisateur...), __il transmet la requête à un serveur applicatif__.
* 
![image](images/bandeau.png)
### 7. Application server

Un __serveur d’application__ est un logiciel qui exécute la logique métier d’une application web. Contrairement au serveur web, qui sert des fichiers statiques, le serveur d’application traite les __requêtes dynamiques__, interagit avec les bases de données, et génère des réponses personnalisées pour chaque utilisateur.

* Traite __les demandes dynamiques__ des utilisateurs (ex. : formulaire, login, recherche…),

* Exécute le code de l'application (PHP, Java, Python, Node.js, etc.),

* Gère la logique métier (calculs, règles, traitements spécifiques),

* Se connecte à une base de données pour lire ou enregistrer des informations.
* 
![image](images/bandeau.png)
### 8. Database

Une base de données est un système qui permet de stocker, organiser, et accéder aux données utilisées par une application. Elle est essentielle pour mémoriser des informations comme les comptes utilisateurs, les produits, les messages, etc.
![image](images/bandeau.png)
### Conclusion 

Taper www.google.com dans votre navigateur déclenche une série d’étapes techniques invisibles : résolution DNS, connexion sécurisée via HTTPS, filtrage par un pare-feu, répartition du trafic par un load-balancer, traitement par un serveur web, un serveur applicatif, puis consultation d’une base de données.

En quelques millisecondes, tous ces composants travaillent ensemble pour vous afficher une page web, de façon rapide, sécurisée et fiable.
