String weekDay = "Friday";
String message = "";
void setup()
{
  Serial.begin(115200);
}

void loop()
{
  if (weekDay == "Monday")
  {
    message = "เรียนวิชาภาษาอังกฤษ";
  }
  else if (weekDay == "Tuesday")
  {
    message = "เรียนวิชาไมโครคอนโทรลเลอร์";
  }
  else if (weekDay == "Wednesday")
  {
    message = "เรียนวิชาโครงงาน";
  }
  else if (weekDay == "Thursday")
  {
    message = "เรียนวิชาโครงงาน";
  }
  else if (weekDay == "Friday")
  {
    message = "เรียนวิชาพื้นฐานอิเล็กทรอนิกส์อัจฉริยะ";
  }
  else
  {
    message = "วันหยุดเสาร์-อาทิตย์";
  }
  Serial.println(message);
  delay(2000);
}
