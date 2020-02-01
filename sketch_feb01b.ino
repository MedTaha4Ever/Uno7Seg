#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

int    seg[7] = {A, B, C, D, E, F, G};

int   zero[7] = {1, 1, 1, 1, 1, 1, 0};
int    one[7] = {0, 1, 1, 0, 0, 0, 0};
int    two[7] = {1, 1, 0, 1, 1, 0, 1};
int  three[7] = {1, 1, 1, 1, 0, 0, 1};
int   four[7] = {0, 1, 1, 0, 0, 1, 1};
int   five[7] = {1, 0, 1, 1, 0, 1, 1};
int    six[7] = {1, 0, 1, 1, 1, 1, 1};
int  seven[7] = {1, 1, 1, 0, 0, 0, 0};
int  eight[7] = {1, 1, 1, 1, 1, 1, 0};
int   nine[7] = {1, 1, 1, 0, 0, 1, 1};

int segments(int number[7]) {
  int i;
  for (i = 0; i < 7; i++) {
    digitalWrite(seg[i], number[i]);
  }
}

void setup() {
  // put your setup code here, to run once:
  int i;
  for (i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  segments(zero);
  delay(1000);
  segments(one);
  delay(1000);
  segments(two);
  delay(1000);
  segments(three);
  delay(1000);
  segments(four);
  delay(1000);
  segments(five);
  delay(1000);
  segments(six);
  delay(1000);
  segments(seven);
  delay(1000);
  segments(eight);
  delay(1000);
  segments(nine);
  delay(1000);
}
