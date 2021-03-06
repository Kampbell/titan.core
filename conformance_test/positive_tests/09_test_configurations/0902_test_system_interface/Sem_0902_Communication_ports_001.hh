// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/5 R4A
// for eadrkir (eadrkir@eadrkir-VirtualBox) on Mon Jan 18 12:27:53 2016

// Copyright (c) 2000-2015 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef Sem__0902__Communication__ports__001_HH
#define Sem__0902__Communication__ports__001_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>

#if TTCN3_VERSION != 50400
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

#undef Sem__0902__Communication__ports__001_HH
#endif

namespace Sem__0902__Communication__ports__001 {

/* Forward declarations of classes */

class loopbackPort;
class IntegerOutputPortType_BASE;
class IntegerOutputPortType;

} /* end of namespace */

#ifndef Sem__0902__Communication__ports__001_HH
#define Sem__0902__Communication__ports__001_HH

namespace Sem__0902__Communication__ports__001 {

/* Type definitions */

typedef COMPONENT GeneralComp;
typedef COMPONENT_template GeneralComp_template;
typedef COMPONENT MyTestSystemInterface;
typedef COMPONENT_template MyTestSystemInterface_template;

/* Class definitions */

class loopbackPort : public PORT {
enum msg_selection { MESSAGE_0 };
struct msg_queue_item : public msg_queue_item_base {
msg_selection item_selection;
union {
INTEGER *message_0;
};
component sender_component;
};

void remove_msg_queue_head();
protected:
void clear_queue();
public:
loopbackPort(const char *par_port_name = NULL);
~loopbackPort();
void send(const INTEGER& send_par, const COMPONENT& destination_component);
void send(const INTEGER& send_par);
void send(const INTEGER_template& send_par, const COMPONENT& destination_component);
void send(const INTEGER_template& send_par);
alt_status receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const INTEGER_template& value_template, INTEGER *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const INTEGER_template& value_template, INTEGER *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const INTEGER_template& value_template, INTEGER *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
private:
void incoming_message(const INTEGER& incoming_par, component sender_component);
protected:
boolean process_message(const char *message_type, Text_Buf& incoming_buf, component sender_component, OCTETSTRING& slider);
};

class IntegerOutputPortType_BASE : public PORT {
enum msg_selection { MESSAGE_0 };
struct msg_queue_item : public msg_queue_item_base {
msg_selection item_selection;
union {
INTEGER *message_0;
};
component sender_component;
};

void remove_msg_queue_head();
protected:
void clear_queue();
public:
IntegerOutputPortType_BASE(const char *par_port_name);
~IntegerOutputPortType_BASE();
void send(const INTEGER& send_par, const COMPONENT& destination_component);
void send(const INTEGER& send_par);
void send(const INTEGER_template& send_par, const COMPONENT& destination_component);
void send(const INTEGER_template& send_par);
protected:
virtual void outgoing_send(const INTEGER& send_par) = 0;
public:
alt_status receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const INTEGER_template& value_template, INTEGER *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const INTEGER_template& value_template, INTEGER *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const INTEGER_template& value_template, INTEGER *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
private:
void incoming_message(const INTEGER& incoming_par, component sender_component);
protected:
inline void incoming_message(const INTEGER& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
boolean process_message(const char *message_type, Text_Buf& incoming_buf, component sender_component, OCTETSTRING& slider);
};


/* Function prototypes */

extern verdicttype testcase_TC__Sem__0902__Communication__ports__001(boolean has_timer, double timer_value);

/* Global variable declarations */

extern const TTCN_Typedescriptor_t& GeneralComp_descr_;
extern IntegerOutputPortType GeneralComp_component_MycomportA;
extern const TTCN_Typedescriptor_t& MyTestSystemInterface_descr_;
extern loopbackPort MyTestSystemInterface_component_messagePort;
extern TTCN_Module module_object;

} /* end of namespace */

/* Test port header files */

#include "IntegerOutputPortType.hh"

#endif
