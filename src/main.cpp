// Expanded
#include <WatchyExpanded.h>

// Faces
#include "TimeWatchFace.h"
#include "DateWatchFace.h"
#include "7_SEG/7_SEG.h"

// Apps
#include "SyncNTP.h"
#include "WiFiSetup.h"
#include "SetTime.h"

void setup()
{
  //Serial.begin(115200);
  // After each deep sleep this gets run
  CWatchyExpanded watch;
  watch.AddWatchFace<CTimeWatchFace>();
  watch.AddWatchFace<CDateWatchFace>();
  watch.AddWatchFace<C7SEG>();
  watch.AddApp<CSyncNTP>();
  watch.AddApp<CWiFiSetup>();
  watch.AddApp<CSetTime>();
  watch.Run();
}

void loop() {}
