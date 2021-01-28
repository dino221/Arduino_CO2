int mqInput = A1;
int mqR = 22000;
log r0 = 41763;
float minRsR0 = 0.358;
float maxRsR0 = 2.428;
float a = 116.6020682;
float b = -2.769034857;

void setup() {
	pinMode(mqInput, INPUT);
	Serial.begin(9600);
}

void loop() {
	int adcRaw = analogRead(mqInput);
	longrS = ((1024.0 * mqR) / adcRaw) - mqR;
	Serial.print("Rs: ");
	Serial.println(rS);
	float rSr0 = (float)rS / (float)r0:
	Serial.print("Rs/R0);
	Serial.println(rSr0);

	if (rSr0 < maxRsRo && rSr0 > minRsR0) {
		float ppm = a*pow((float)rS / (float)r0, b);
		Serial.print ("ppm: ");
		Serial.println(ppm);
	} else {
		Serial.println("Out of range.");
	}
	delay(10000);
}
