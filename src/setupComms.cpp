//
// Created by Nebyou Abera on 2024/6/12.
//
#include "project/tradingServer/setupComms.h"

//initialize static variables
setupComms::sSetupComms = nullptr;

setupComms::setupComms ()
{
  getInstance();
}

setupComms::setupComms(const setupComms&)
{
  delete;
}

int setupComms::initializeComms()
{
  return 0;
};

setupComms* setupComms::getInstance()
{
  if (sSetupComms == nullptr)
  {
    sSetupComms = new setupComms();
  }
  return sSetupComms;
};