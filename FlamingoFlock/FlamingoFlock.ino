//Machiel Kapiteijn
//FlamingoFlock game 'Discover the mind of the group'

//This game consists of 4 colored buttons Yellow,Green,Red and Blue and one White button
//The game has to be played by 4 people
//Each round starts with a WORD like any word (duck, friendship, moonlight, charger)
//After the group knows the WORD each player picks one of the colored buttons they think EVERYONE will pick with the current word
//If everyone picked the same color the team scores 3 points and a new round starts
//If there was no CONCENSUS on what the color should be the round starts again with the same WORD
//After every 3 rounds one of the colored buttons will block wich will decrease the difficulty of this problem
//Every 3 rounds the team will earn 1 less point for the AGREEMENT they reach
//After a succesful AGREEMENT one of the team members may share why they picked this color with the word


//When someone presses the White button it shows the amount of points the team has by blinking as many times as the score
//The purpose of this game is a fun way to get to know eachoters ASSIOCIATIONS and to encourage TEAMWORK and CONFORMITY
//The underlying purpose is to make everyone in the group think more alike by remembering the previous WORDS and COLORS




//safes choices for this round
int ScoreY = 1;
int ScoreG = 1;
int ScoreR = 1;
int ScoreB = 1;

//amount of points earned per question
int Points = 3;
//the final amount of points for the whole game
int finalPoints = -1;

//takes choices from every round (YGRB + all)
int ScoreYall = 1;
int ScoreGall = 1;
int ScoreRall = 1;
int ScoreBall = 1;

//makes button unavailable this round
boolean BlockY = false;
boolean BlockG = false;
boolean BlockR = false;
boolean BlockB = false;

//keeps Times pressed in each round
//keeps amount of rounds till button gets blocked
int Times = 0;
int roundTimes = 0;


//The Pin the color buttons are linked to
int buttonY = 11;
int buttonG = 10;
int buttonR = 9;
int buttonB = 8;
int buttonReveal = 6;
boolean reveal = false;


//Pin your LEDs are attached to
int ledPin1 = 5;
int ledPin2 = 4;
int ledPin3 = 2;
int ledPin4 = 3;
int ledPin5 = 12;

void setup() {

  Serial.begin(9600);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);

  // Initialize the pushbutton pin as an input pullup
  // Keep in mind, when pin has ground voltage applied, we know the button is being pressed
  pinMode(buttonY, INPUT_PULLUP);
  pinMode(buttonG, INPUT_PULLUP);
  pinMode(buttonR, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonReveal, INPUT_PULLUP);


} // close setup


void loop() {



  //If you press one of the color buttons 4 times in a row

  if (ScoreY >= 5 ) {
    Serial.println("Yellow opinion is true group-opinion");
    finalPoints = finalPoints + Points;
    ScoreY = 1;
    ScoreG = 1;
    ScoreR = 1;
    ScoreB = 1;
    ScoreYall = 1;
    ScoreGall = 1;
    ScoreRall = 1;
    ScoreBall = 1;
    Times = 0;
    delay(300);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    BlockY = false;
    BlockG = false;
    BlockR = false;
    BlockB = false;
    roundTimes = 0;
    Points = 3;

  }
  if (ScoreG >= 5 ) {
    Serial.println("Green opinion is true group-opinion");
    delay(300);
    finalPoints = finalPoints + Points;
    ScoreY = 1;
    ScoreG = 1;
    ScoreR = 1;
    ScoreB = 1;
    ScoreYall = 1;
    ScoreGall = 1;
    ScoreRall = 1;
    ScoreBall = 1;
    Times = 0;
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    BlockY = false;
    BlockG = false;
    BlockR = false;
    BlockB = false;
    roundTimes = 0;
    Points = 3;
  }
  if (ScoreR >= 5 ) {
    Serial.println("Red opinion is true group-opinion");
    delay(300);
    finalPoints = finalPoints + Points;
    ScoreY = 1;
    ScoreG = 1;
    ScoreR = 1;
    ScoreB = 1;
    ScoreYall = 1;
    ScoreGall = 1;
    ScoreRall = 1;
    ScoreBall = 1;
    Times = 0;
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin3, LOW);
    delay(100);
    digitalWrite(ledPin3, HIGH);
    delay(100);
    digitalWrite(ledPin3, LOW);
    delay(100);
    digitalWrite(ledPin3, HIGH);
    delay(100);
    digitalWrite(ledPin3, LOW);
    delay(100);
    digitalWrite(ledPin3, HIGH);
    delay(100);
    digitalWrite(ledPin3, LOW);
    delay(100);
    digitalWrite(ledPin3, HIGH);
    delay(100);
    digitalWrite(ledPin3, LOW);
    delay(100);
    digitalWrite(ledPin3, HIGH);
    delay(100);
    digitalWrite(ledPin3, LOW);
    delay(100);
    digitalWrite(ledPin3, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    BlockY = false;
    BlockG = false;
    BlockR = false;
    BlockB = false;
    roundTimes = 0;
    Points = 3;
  }
  if (ScoreB >= 5 ) {
    Serial.println("Blue opinion is true group-opinion");
    delay(300);
    finalPoints = finalPoints + Points;
    ScoreY = 1;
    ScoreG = 1;
    ScoreR = 1;
    ScoreB = 1;
    ScoreYall = 1;
    ScoreGall = 1;
    ScoreRall = 1;
    ScoreBall = 1;
    Times = 0;
    BlockY = false;
    BlockG = false;
    BlockR = false;
    BlockB = false;
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin4, LOW);
    delay(100);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin4, LOW);
    delay(100);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin4, LOW);
    delay(100);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin4, LOW);
    delay(100);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin4, LOW);
    delay(100);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin4, LOW);
    delay(100);
    digitalWrite(ledPin4, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    roundTimes = 0;
    Points = 3;

  }

  //after 3,6 or 9  rounds yellow is lowest
  if (roundTimes == 3 && ScoreYall < ScoreGall && ScoreYall < ScoreRall && ScoreYall < ScoreBall ) {
    BlockY = true;
    ScoreYall = 100;
    Serial.println("Yellow is Blocked");
    roundTimes = 0;
    Points = Points - 1;

  }
  //after 3,6 or 9  rounds green is lowest
  if (roundTimes == 3 && ScoreGall < ScoreYall && ScoreGall < ScoreRall && ScoreGall < ScoreBall) {
    BlockG = true;
    ScoreGall = 100;
    Serial.println("Green is Blocked");
    roundTimes = 0;
    Points = Points - 1;
  }
  //after 3,6 or 9  rounds red is lowest
  if (roundTimes == 3 && ScoreRall < ScoreYall && ScoreRall < ScoreGall && ScoreRall < ScoreBall) {
    BlockR = true;
    ScoreRall = 100;
    Serial.println("Red is Blocked");
    roundTimes = 0;
    Points = Points - 1;
  }
  //after 3,6 or 9 rounds blue is lowest
  if (roundTimes == 3 && ScoreBall < ScoreYall && ScoreBall < ScoreGall && ScoreBall < ScoreRall) {
    BlockB = true;
    ScoreBall = 100;
    Serial.println("Blue is Blocked");
    roundTimes = 0;
    Points = Points - 1;
  }

  //If the team didn't pick 4 of the same colors in a row
  //reset the picks and add 1 to the amound of rounds
  //Make the red led blink wrongish

  if (Times >= 4 && ScoreY < 5 && ScoreG < 5 && ScoreR < 5 && ScoreB < 5) {

    ScoreY = 1;
    ScoreG = 1;
    ScoreR = 1;
    ScoreB = 1;
    Times = 0;
    roundTimes = roundTimes + 1;

    delay(100);
    digitalWrite(ledPin5, HIGH);
    delay(100);
    digitalWrite(ledPin5, LOW);
    delay(100);
    digitalWrite(ledPin5, HIGH);
    delay(100);
    digitalWrite(ledPin5, LOW);
    delay(100);
    digitalWrite(ledPin5, HIGH);
    delay(100);
    digitalWrite(ledPin5, LOW);
    delay(100);
    digitalWrite(ledPin5, HIGH);
    delay(100);
    digitalWrite(ledPin5, LOW);


  }
    // If you hit the reveal button it blinks all the leds as often as the teams score
  if (digitalRead(buttonReveal) == LOW ) {

  

    for (int i = 0; i <= finalPoints; i++) {
      delay(300);
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, HIGH);
      delay(200);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      delay(300);
    }
  }

  //make sure that blocked buttons give visual feedback with the red led

  if (digitalRead(buttonY) == LOW && BlockY == true ) {

    Serial.print("Yellow is blocked");
    digitalWrite(ledPin5, HIGH);
    delay(50);
    digitalWrite(ledPin5, LOW);
  }

  if (digitalRead(buttonG) == LOW && BlockG == true ) {

    Serial.print("Green is blocked");
    digitalWrite(ledPin5, HIGH);
    delay(50);
    digitalWrite(ledPin5, LOW);
  }

  if (digitalRead(buttonR) == LOW && BlockR == true ) {

    Serial.print("Red is blocked");
    digitalWrite(ledPin5, HIGH);
    delay(50);
    digitalWrite(ledPin5, LOW);
  }

  if (digitalRead(buttonB) == LOW && BlockB == true ) {

    Serial.print("Blue is blocked");
    digitalWrite(ledPin5, HIGH);
    delay(50);
    digitalWrite(ledPin5, LOW);
  }

  //if a color button is pressed add 1 to its amount and 1 to the turn amount in the round


  if (digitalRead(buttonY) == LOW && BlockY == false ) {

    Serial.print("Yellow = ");
    Serial.println(ScoreY);
    ScoreY = ScoreY + 1;
    ScoreYall = ScoreYall + 1;
    Times = Times + 1;
    digitalWrite(ledPin1, HIGH);
    delay(300);
    digitalWrite(ledPin1, LOW);


  }

  if (digitalRead(buttonG) == LOW && BlockG == false ) {

    Serial.print("Green = ");
    Serial.println(ScoreG);
    ScoreG = ScoreG + 1;
    ScoreGall = ScoreGall + 1;
    Times = Times + 1;
    digitalWrite(ledPin2, HIGH);
    delay(300);
    digitalWrite(ledPin2, LOW);


  }

  if (digitalRead(buttonR) == LOW && BlockR == false ) {

    Serial.print("Red = ");
    Serial.println(ScoreR);
    ScoreR = ScoreR + 1;
    ScoreRall = ScoreRall + 1;
    Times = Times + 1;
    digitalWrite(ledPin3, HIGH);
    delay(300);
    digitalWrite(ledPin3, LOW);


  }

  if (digitalRead(buttonB) == LOW && BlockB == false ) {

    Serial.print("Blue = ");
    Serial.println(ScoreB);
    ScoreB = ScoreB + 1;
    ScoreBall = ScoreBall + 1;
    Times = Times + 1;
    digitalWrite(ledPin4, HIGH);
    delay(300);
    digitalWrite(ledPin4, LOW);


  }
}
