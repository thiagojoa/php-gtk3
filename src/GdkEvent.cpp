
#include "GdkEvent.h"


/**
 *  c++ constructor
 */
GdkEvent_::GdkEvent_()
{
    
}

// 
GdkEvent *GdkEvent_::get_instance()
{
    return instance;
}

// 
void GdkEvent_::set_instance(GdkEvent *event)
{
    instance = event;
}


void GdkEvent_::populate(GdkEvent *event)
{
    instance = event;
    
   // get self reference as Php::Value object
    Php::Value self(this);

    // initialize a public property
    self["type"] = event->type;
    // self["any"] = Php::Object("GdkEventAny", &event->any);
    // self["expose"] = event->expose;
    // self["visibility"] = event->visibility;
    // self["motion"] = event->motion;
    
    GdkEventButton_ *eventbutton_ = new GdkEventButton_();
    Php::Value gdkeventbutton = Php::Object("GdkEventButton", eventbutton_);
    eventbutton_->populate(event->button);
    self["button"] = eventbutton_;

    // self["touch"] = event->touch;
    // self["scroll"] = event->scroll;
    // self["key"] = event->key;
    // self["crossing"] = event->crossing;
    // self["focus_change"] = event->focus_change;
    // self["configure"] = event->configure;
    // self["property"] = event->property;
    // self["selection"] = event->selection;
    // self["owner_change"] = event->owner_change;
    // self["proximity"] = event->proximity;
    // self["dnd"] = event->dnd;
    // self["window_state"] = event->window_state;
    // self["setting"] = event->setting;
    // self["grab_broken"] = event->grab_broken;
    // self["touchpad_swipe"] = event->touchpad_swipe;
    // self["touchpad_pinch"] = event->touchpad_pinch;
    // self["pad_button"] = event->pad_button;
    // self["pad_axis"] = event->pad_axis;
    // self["pad_group_mode"] = event->pad_group_mode;
    
}