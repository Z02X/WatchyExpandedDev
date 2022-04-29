// Expanded
#include <WatchyExpanded.h>

// Fonts
#include <Fonts/FreeMonoBold9pt7b.h>

void _setup()
{
  GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display(GxEPD2_154_D67(wcd::kCS, wcd::kDC, wcd::kReset, wcd::kBusy));
 	display.setFullWindow();
	display.fillScreen(GxEPD_BLACK);
	display.setFont(&FreeMonoBold9pt7b);
	display.setCursor(0, 15);
  display.print("Text on screen!");
}
