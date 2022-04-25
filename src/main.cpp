// Expanded
#include <WatchyExpanded.h>

// Faces
#include "TimeWatchFace.h"
#include "DateWatchFace.h"

// Apps
#include "SyncNTP.h"
#include "WiFiSetup.h"

void setup()
{
  //Serial.begin(115200);
  // After each deep sleep this gets run
  CWatchyExpanded watch;
  watch.AddWatchFace<CTimeWatchFace>();
  watch.AddWatchFace<CDateWatchFace>();
  watch.AddApp<CSyncNTP>();
  watch.AddApp<CWiFiSetup>();
  watch.Run();
}

void loop() {}
