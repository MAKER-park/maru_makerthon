void check_status(String url) {
//  Serial.print("Fetching " + url + "... ");

  HTTPClient http;
  http.begin(url);

  int httpResponseCode = http.GET();
  if (httpResponseCode > 0) {
    //Serial.print("HTTP ");
    //Serial.println(httpResponseCode);
    String payload = http.getString();
    Serial.println();
    Serial.println(payload);
    //---------------get data-------------------
    //1. 대여상태
    String rent = json_parser(payload, "rent_state");
//    response.remove(0, 1);
    Serial.println("rent : " + rent);
    if(rent.equals("true")){
      rent_state = "1";
    }else{
      rent_state = "0";
    }
  }
  else {
    //if connection error init variable rent state
    Serial.print("Error code: ");
    Serial.println(httpResponseCode);
    Serial.println(":-(");
    rent_state = "0";
  }


}

void get_http(String url) {
//  Serial.print("Fetching " + url + "... ");

  HTTPClient http;
  http.begin(url);

  int httpResponseCode = http.GET();
  if (httpResponseCode > 0) {
    Serial.print("HTTP ");
    Serial.println(httpResponseCode);
    String payload = http.getString();
    Serial.println();
    Serial.println(payload);
  }
  else {
    Serial.print("Error code: ");
    Serial.println(httpResponseCode);
    Serial.println(":-(");
  }
}


//------------------------json parsing-------------------
String json_parser(String s, String a) {
  String val;
  if (s.indexOf(a) != -1) {
    int st_index = s.indexOf(a);
    int val_index = s.indexOf(':', st_index);
    if (s.charAt(val_index + 1) == '"') {
      int ed_index = s.indexOf('"', val_index + 2);
      val = s.substring(val_index + 2, ed_index);
    }
    else {
      int ed_index = s.indexOf(',', val_index + 1);
      val = s.substring(val_index + 1, ed_index);
    }
  }
  else {
    Serial.print(a); Serial.println(F(" is not available"));
  }
  return val;
}
