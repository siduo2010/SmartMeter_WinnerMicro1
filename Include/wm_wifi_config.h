#ifndef __WM_WIFI_CONFIG_H__
#define __WM_WIFI_CONFIG_H__

#define	CFG_WIFI_ON								1
#define CFG_WIFI_OFF								0

/*******************WIFI INFO**************************
  			Below Switch Only for Reference!!!
********************************************************/
#define  TLS_CONFIG_AP        				CFG_WIFI_ON
#define  TLS_CONFIG_IBSS		 			CFG_WIFI_OFF
#define  TLS_CONFIG_11N                     CFG_WIFI_ON

#define  TLS_CONFIG_AP_OPT_PS              (CFG_ON && TLS_CONFIG_AP)/* SOFTAP POWER SAVE */
#define  TLS_CONFIG_AP_OPT_FWD             (CFG_ON && TLS_CONFIG_AP)/* IP PACKET FORWARD */

#define  TLS_CONFIG_WPS       				CFG_WIFI_ON /* WPS&EAPOL should be enabled together */
#define  TLS_IEEE8021X_EAPOL   				CFG_WIFI_ON

#define WIFI_MEM_START_ADDR		0x2003C000ul
#endif /*__WM_WIFI_CONFIG_H__*/

