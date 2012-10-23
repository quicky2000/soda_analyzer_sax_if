#ifndef _SAX_ANALYZER_IF_H_
#define _SAX_ANALYZER_IF_H_

#include "general_analyzer_if.h"
#include <string>

namespace osm_diff_analyzer_sax_if
{
  class sax_analyzer_if: public osm_diff_analyzer_if::general_analyzer_if
  {
  public:
    virtual void start_element(const std::string & p_name)=0;

    virtual void get_attribute(const std::string & p_name,
			       const std::string & p_value)=0;

    virtual void end_element(const std::string & p_name)=0;

    inline virtual ~sax_analyzer_if(void){};
  };
}
#endif
//EOF
