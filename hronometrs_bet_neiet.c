enum custom_variables {
  start_pin = 34,
  stop_pin = 35,
  pin_a = 23,
  pin_b = 21,
  pin_c = 5,
  pin_d = 18,
  pin_e = 19,
  pin_f = 22,
  pin_g = 17,

  pin_dig1 = 4,
  pin_dig2 = 0,
  pin_dig3 = 2,
  pin_dig4 = 15,
};

bool read_button(int button)
{
  unsigned long i = 0;
  while(i<1000)
  {
    if(digitalRead(button))
    {
      i=1000;
      return true;
    }
    else
    {
      i++;
      delay(1);
    }
  }
  return false;
}

//mājās pārtaisīt uz if
int display(int digit)
{
  switch (digit) {
    case 0:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,0);
      digitalWrite(pin_e,0);
      digitalWrite(pin_f,0);
      digitalWrite(pin_g,1);
    }
    break;
    case 1:
    {
      digitalWrite(pin_a,1);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,1);
      digitalWrite(pin_e,1);
      digitalWrite(pin_f,1);
      digitalWrite(pin_g,1);
    }
    break;
    case 2:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,1);
      digitalWrite(pin_d,0);
      digitalWrite(pin_e,0);
      digitalWrite(pin_f,1);
      digitalWrite(pin_g,0);
    }
    break;
    case 3:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,0);
      digitalWrite(pin_e,1);
      digitalWrite(pin_f,1);
      digitalWrite(pin_g,0);
    }
    break;
    case 4:
    {
      digitalWrite(pin_a,1);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,1);
      digitalWrite(pin_e,1);
      digitalWrite(pin_f,0);
      digitalWrite(pin_g,0);
    }
    break;
    case 5:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,1);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,0);
      digitalWrite(pin_e,1);
      digitalWrite(pin_f,0);
      digitalWrite(pin_g,0);
    }
    break;
    case 6:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,1);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,0);
      digitalWrite(pin_e,0);
      digitalWrite(pin_f,0);
      digitalWrite(pin_g,0);
    }
    break;
    case 7:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,1);
      digitalWrite(pin_e,1);
      digitalWrite(pin_f,1);
      digitalWrite(pin_g,1);
    }
    break;
    case 8:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,0);
      digitalWrite(pin_e,0);
      digitalWrite(pin_f,0);
      digitalWrite(pin_g,0);
    }
    break;
    case 9:
    {
      digitalWrite(pin_a,0);
      digitalWrite(pin_b,0);
      digitalWrite(pin_c,0);
      digitalWrite(pin_d,0);
      digitalWrite(pin_e,1);
      digitalWrite(pin_f,0);
      digitalWrite(pin_g,0);
    }
    break;
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(start_pin, INPUT);
  pinMode(stop_pin, INPUT);
  
  //test
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);

  pinMode(pin_a,OUTPUT);
  pinMode(pin_b,OUTPUT);
  pinMode(pin_c,OUTPUT);
  pinMode(pin_d,OUTPUT);
  pinMode(pin_e,OUTPUT);
  pinMode(pin_f,OUTPUT);
  pinMode(pin_g,OUTPUT);

  pinMode(pin_dig1,OUTPUT);
  pinMode(pin_dig2,OUTPUT);
  pinMode(pin_dig3,OUTPUT);
  pinMode(pin_dig4,OUTPUT);

}

void loop() {

  if (digitalRead(start_pin))
  {
    while(!read_button(stop_pin))
    {
    //skaita
    //display
    }
  }

  if (digitalRead(stop_pin))
  {
    while(!read_button(stop_pin))
    {
    //skaita
    //display
    }
  }
  
  digitalWrite(pin_dig2,1);


  // :(
  display(1);
  digitalWrite(pin_dig2,1);
  display(2);
  digitalWrite(pin_dig2,1);
  display(3);
  digitalWrite(pin_dig2,1);
  display(4);

 delay(1000);
  Serial.println();
}
