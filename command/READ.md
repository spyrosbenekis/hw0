Σύνδεση με ssh με password bandit0 (που δίνονται)

Bandit0: Με cat readme βλέπουμε τον κωδικό του bandit1

Bandit1: Με cat < - βλέπουμε τον κωδικό του bandit2

Bandit2: Με cat "spaces in this filename" βλέπουμε τον κωδικό του bandit3

Bandit3: Αρχικά με ls βλέπω το directory inhere και κάνω cd inhere/
         Κάνω ls στο directory inhere, αλλά δεν εμφανίζετε κάτι, και εφόσον είναι κρυμμένο file κάνω ls -a	 
         Έτσι μου εμφανίζει: . .. .hidden
	       Κάνοντας cat .hidden εμφανίζετε το password του bandit4.

Bandit4: Αρχικά με ls βλέπω το directory inhere και κάνω cd inhere/.
         Με ls βλέπω 10 files και κάνω cd .. για να βγώ από το inhere.
         Εκτελώ file inhere/* για να δώ την μορφή των κειμένων και παρατηρώ πως το -file07 έχει ASCII χαρακτήρες, ενώ τα άλλα files έχουν data.
         Έτσι κάνω cat inhere/-file07 και φαίνετε το password για το bandit5.

Bandit5: Με την εντολή find inhere/ -size 1033c αναζητώ το file που έχει μέγεθος 1033 bytes.
         Εκτελώντας την μου εμφανίζετε inhere/maybehere07/.file2 που σημαίνει οτί εκεί βρίσκετε το password.
         Με cat inhere/maybehere07/.file2 εμφανίζετε το password για το bandit6.

Bandit6: Χρησιμοποιώ την εντολή find και το / για αναζητήσω σε όλο τον server. 
         Με βάση την εκφώνηση βάζω στην εντολή find / τα στοιχεία του file που αναζητώ, με βάση την εκφώνηση.
         Τα οποία είναι: -user bandit7 -group bandit6 - size 33c
         Δηλαδή, εκτελώ: find / -user bandit7 -group bandit6 - size 33c
         Εκεί εμφανίζονται μια σειρά από paths με permission denied, παρατηρώ όμως πως υπάρχει ένα στο οποία έχω πρόσβαση το: /var/lib/dpkg/info/bandit7.password
         Εκτελώντας: cat /var/lib/dpkg/info/bandit7.password εμφανίζετε το password του bandit7.

Bandit7: Χρησιμοποιώ την εντολή grep ώστε να βρεί και να εμφανίσει την γραμμή με την λέξη millionth.
         Οπότε εκτελώντας: grep "millionth" data.txt εμφανίζετε η λέξη millionth μαζί με τον κωδικό του bandit8.

Bandit8: Χρησιμοποιώ την εντολή cat data.txt για να εμφανίζω τα δεδομένα του αρχείου, που είναι πολλές σειρές συμβόλων.
         Οπότε θα προσθέσω την εντολή uniq -u -μέσω piping- για να μου εμφανίσει την μοναδικές γραμμές.
         Όμως εδώ υπάρχει το πρόβλημα, ότι η εντολή αυτή αναμένει ότι οι επαναλαμβανόμενες γραμμές θα είναι η μία μετά την άλλη.
         Για τον λόγο αυτό, θα προσθέσω -μέσω piping- την εντολή sort για να ταξινομηθούν οι γραμμές.
         Έτσι, εκτελώντας: cat data.txt | sort | uniq -u εμφανίζετε ως αποτέλεσμα ο κωδικός του bandit9.

Bandit9: Χρησιμοποιώ την εντολή strings data.txt και την εντολή grep "===", ώστε να μου εμφανίσει τα strings στα οποία έχει προηγηθεί μια σειρά από ===. 
         Δηλαδή, εκτελώ: strings data.txt | grep "===" και έτσι εμφανίζετε μήνυμα με τον κωδικό του bandit10.

Bandit10: Στον file data.txt περιέχονται base64 encoded data, τα οποία πρέπει να αποκρυπτογραφηθούν. 
          Εκτελώντας, λοιπόν, την εντολή base64 data.txt -d το μήνυμα αποκρυπτογραφήθηκε και εμφανίζετε: "The password is..." με τον κωδικό του bandit11.
           
         
