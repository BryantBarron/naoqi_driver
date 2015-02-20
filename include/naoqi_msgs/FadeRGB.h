// Generated by gencpp from file naoqi_msgs/FadeRGB.msg
// DO NOT EDIT!


#ifndef NAOQI_MSGS_MESSAGE_FADERGB_H
#define NAOQI_MSGS_MESSAGE_FADERGB_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>

namespace naoqi_msgs
{
template <class ContainerAllocator>
struct FadeRGB_
{
  typedef FadeRGB_<ContainerAllocator> Type;

  FadeRGB_()
    : led_name()
    , color()
    , fade_duration()  {
    }
  FadeRGB_(const ContainerAllocator& _alloc)
    : led_name(_alloc)
    , color(_alloc)
    , fade_duration()  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _led_name_type;
  _led_name_type led_name;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _color_type;
  _color_type color;

   typedef ros::Duration _fade_duration_type;
  _fade_duration_type fade_duration;




  typedef boost::shared_ptr< ::naoqi_msgs::FadeRGB_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_msgs::FadeRGB_<ContainerAllocator> const> ConstPtr;

}; // struct FadeRGB_

typedef ::naoqi_msgs::FadeRGB_<std::allocator<void> > FadeRGB;

typedef boost::shared_ptr< ::naoqi_msgs::FadeRGB > FadeRGBPtr;
typedef boost::shared_ptr< ::naoqi_msgs::FadeRGB const> FadeRGBConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_msgs::FadeRGB_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'naoqi_msgs': ['/home/vrabaud/work/master/alrosconverter/msg/naoqi_msgs/msg', '/home/vrabaud/work/master/alrosconverter/msg/devel/share/naoqi_msgs/msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_msgs::FadeRGB_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_msgs::FadeRGB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_msgs::FadeRGB_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0df8c8fbe7f1de5f2168d6117ffced08";
  }

  static const char* value(const ::naoqi_msgs::FadeRGB_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0df8c8fbe7f1de5fULL;
  static const uint64_t static_value2 = 0x2168d6117ffced08ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_msgs/FadeRGB";
  }

  static const char* value(const ::naoqi_msgs::FadeRGB_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Message to fade leds\n\
string led_name\n\
std_msgs/ColorRGBA color\n\
duration fade_duration\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::naoqi_msgs::FadeRGB_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.led_name);
      stream.next(m.color);
      stream.next(m.fade_duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FadeRGB_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_msgs::FadeRGB_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_msgs::FadeRGB_<ContainerAllocator>& v)
  {
    s << indent << "led_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.led_name);
    s << indent << "color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.color);
    s << indent << "fade_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.fade_duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_MSGS_MESSAGE_FADERGB_H
