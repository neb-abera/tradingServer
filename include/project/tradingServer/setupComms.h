//
// Created by Nebyou Abera on 2024/6/10.
//

#ifndef TRADINGSERVER_SETUPCOMMS_H
#define TRADINGSERVER_SETUPCOMMS_H
#endif  // TRADINGSERVER_SETUPCOMMS_H

class setupComms
{
 private:
  int initialized;
  static setupComms* sSetupComms;
  setupComms();
  setupComms(const setupComms&);
 public:
  setupComms* getInstance();
  int initializeComms();

};