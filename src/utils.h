#include <osquery/sdk.h>
#include <osquery/system.h>

#include "BrokerManager.h"

#include <broker/broker.hh>
#include <broker/endpoint.hh>
#include <broker/message_queue.hh>
#include <broker/report.hh>

#include <iostream>

namespace osquery {

    Status createSubscriptionRequest(const broker::message& msg, std::string incoming_topic, SubscriptionRequest& sr);

/////////////////////////////////////////////////////////
//////////////// Print Debug Methods/////////////////////
/////////////////////////////////////////////////////////

void printColumnsInfo(const std::string& q);

Status printQueryLogItemJSON(const std::string& json_string);

Status printQueryLogItem(const QueryLogItem& item);

void printDiffResults(const DiffResults& results);

void printQueryData(const QueryData& data);

void printDecorations(const std::map<std::string, std::string>& deco);
}
