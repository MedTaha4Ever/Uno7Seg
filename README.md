# Uno7Seg
Arduino UNO basic 7 Segment display

TinkerCad Circuit : [link!](https://www.tinkercad.com/things/iIAhQGvAwhP-fantastic-allis/editel?tenant=circuits?sharecode=4hB2AxAZLD706_VaGh0wfAvsJ0_SMmDMlY--lHIjs0M=)

```C++
//defining Segments Pins
#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

//Declaring segments pins Array
int    seg[7] = {A, B, C, D, E, F, G};

//Declaring 10 digits (Common Cathode Truth Table) <you can add letters too A,B,C,D,...>
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

//Displaying a Selected Number
int segments(int number[7]) {
  int i;
  for (i = 0; i < 7; i++) {
    digitalWrite(seg[i], number[i]);
  }
}

//Preparing Pins
void setup() {
  int i;
  for (i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
}

//Testing the Output
void loop() {
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
```
