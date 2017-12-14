public class Preferences {
 
 
        public int Quiet; 
        public int Music;
        public int Reading; 
        public int Chatting;
 
        public Preferences (int Quiet, int Music, int Reading, int Chatting) 
        { 
        this.Quiet = Quiet;
        this.Music = Music;
        this.Reading = Reading;
        this.Chatting= Chatting;
        }
 
 
public int Compability (Preferences pref) {
    return Math.abs (Quiet-pref.Quiet) + Math.abs (Reading-pref.Reading) +Math.abs (Chatting-pref.Chatting)+Math.abs (Music-pref.Music);
}
 
}