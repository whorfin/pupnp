#ifndef UPNPEXTRAHEADERS_H
#define UPNPEXTRAHEADERS_H

/*!
 * \file
 *
 * \brief Header file for UpnpExtraHeaders methods.
 *
 * Do not edit this file, it is automatically generated. Please look at generator.c.
 *
 * \author Marcelo Roberto Jimenez
 */
#include <stdlib.h> /* for size_t */

#include "UpnpGlobal.h" /* for EXPORT_SPEC */

#include "list.h"
#include "UpnpString.h"
#include "ixml.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*!
 * UpnpExtraHeaders
 */
typedef struct s_UpnpExtraHeaders UpnpExtraHeaders;

/*! Constructor */
EXPORT_SPEC UpnpExtraHeaders *UpnpExtraHeaders_new();
/*! Destructor */
EXPORT_SPEC void UpnpExtraHeaders_delete(UpnpExtraHeaders *p);
/*! Copy Constructor */
EXPORT_SPEC UpnpExtraHeaders *UpnpExtraHeaders_dup(const UpnpExtraHeaders *p);
/*! Assignment operator */
EXPORT_SPEC int UpnpExtraHeaders_assign(UpnpExtraHeaders *p, const UpnpExtraHeaders *q);

/*! UpnpExtraHeaders_get_node */
EXPORT_SPEC const UpnpListHead *UpnpExtraHeaders_get_node(const UpnpExtraHeaders *p);
/*! UpnpExtraHeaders_set_node */
EXPORT_SPEC int UpnpExtraHeaders_set_node(UpnpExtraHeaders *p, const UpnpListHead *q);
/*! UpnpExtraHeaders_add_to_list_node */
EXPORT_SPEC void UpnpExtraHeaders_add_to_list_node(UpnpExtraHeaders *p, UpnpListHead *head);

/*! UpnpExtraHeaders_get_name */
EXPORT_SPEC const UpnpString *UpnpExtraHeaders_get_name(const UpnpExtraHeaders *p);
/*! UpnpExtraHeaders_set_name */
EXPORT_SPEC int UpnpExtraHeaders_set_name(UpnpExtraHeaders *p, const UpnpString *s);
/*! UpnpExtraHeaders_get_name_Length */
EXPORT_SPEC size_t UpnpExtraHeaders_get_name_Length(const UpnpExtraHeaders *p);
/*! UpnpExtraHeaders_get_name_cstr */
EXPORT_SPEC const char *UpnpExtraHeaders_get_name_cstr(const UpnpExtraHeaders *p);
/*! UpnpExtraHeaders_strcpy_name */
EXPORT_SPEC int UpnpExtraHeaders_strcpy_name(UpnpExtraHeaders *p, const char *s);
/*! UpnpExtraHeaders_strncpy_name */
EXPORT_SPEC int UpnpExtraHeaders_strncpy_name(UpnpExtraHeaders *p, const char *s, size_t n); 
/*! UpnpExtraHeaders_clear_name */
EXPORT_SPEC void UpnpExtraHeaders_clear_name(UpnpExtraHeaders *p); 

/*! UpnpExtraHeaders_get_value */
EXPORT_SPEC const UpnpString *UpnpExtraHeaders_get_value(const UpnpExtraHeaders *p);
/*! UpnpExtraHeaders_set_value */
EXPORT_SPEC int UpnpExtraHeaders_set_value(UpnpExtraHeaders *p, const UpnpString *s);
/*! UpnpExtraHeaders_get_value_Length */
EXPORT_SPEC size_t UpnpExtraHeaders_get_value_Length(const UpnpExtraHeaders *p);
/*! UpnpExtraHeaders_get_value_cstr */
EXPORT_SPEC const char *UpnpExtraHeaders_get_value_cstr(const UpnpExtraHeaders *p);
/*! UpnpExtraHeaders_strcpy_value */
EXPORT_SPEC int UpnpExtraHeaders_strcpy_value(UpnpExtraHeaders *p, const char *s);
/*! UpnpExtraHeaders_strncpy_value */
EXPORT_SPEC int UpnpExtraHeaders_strncpy_value(UpnpExtraHeaders *p, const char *s, size_t n); 
/*! UpnpExtraHeaders_clear_value */
EXPORT_SPEC void UpnpExtraHeaders_clear_value(UpnpExtraHeaders *p); 

/*! UpnpExtraHeaders_get_resp */
EXPORT_SPEC const DOMString UpnpExtraHeaders_get_resp(const UpnpExtraHeaders *p); 
/*! UpnpExtraHeaders_set_resp */
EXPORT_SPEC int UpnpExtraHeaders_set_resp(UpnpExtraHeaders *p, const DOMString s); 
/*! UpnpExtraHeaders_get_resp_cstr */
EXPORT_SPEC const char *UpnpExtraHeaders_get_resp_cstr(const UpnpExtraHeaders *p); 

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* UPNPEXTRAHEADERS_H */

