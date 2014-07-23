/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef CONFIG_OPENFLOW_PLUGIN_H
#define CONFIG_OPENFLOW_PLUGIN_H 

#include "../scope.h"

/**
* @file openflow_scope.h 
* @author Marc Sune<marc.sune (at) bisdn.de>
*
* @brief Openflow libconfig file hierarchy 
* 
*/

namespace xdpd {

class openflow_scope:public scope {
	
public:
	openflow_scope(std::string scope_name="openflow", bool mandatory=true);
		
protected:
	
};

class of_lsis_scope:public scope {
	
public:
	of_lsis_scope(std::string scope_name="logical-switches", bool mandatory=true);
		
protected:
	
	virtual void pre_validate(libconfig::Setting& setting, bool dry_run);
};

}// namespace xdpd 

#endif /* CONFIG_OPENFLOW_PLUGIN_H_ */


