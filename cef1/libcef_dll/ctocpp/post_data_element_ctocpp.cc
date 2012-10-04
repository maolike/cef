// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/post_data_element_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefPostDataElement> CefPostDataElement::CreatePostDataElement() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_post_data_element_t* _retval = cef_post_data_element_create();

  // Return type: refptr_same
  return CefPostDataElementCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

void CefPostDataElementCToCpp::SetToEmpty() {
  if (CEF_MEMBER_MISSING(struct_, set_to_empty))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_to_empty(struct_);
}

void CefPostDataElementCToCpp::SetToFile(const CefString& fileName) {
  if (CEF_MEMBER_MISSING(struct_, set_to_file))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: fileName; type: string_byref_const
  DCHECK(!fileName.empty());
  if (fileName.empty())
    return;

  // Execute
  struct_->set_to_file(struct_,
      fileName.GetStruct());
}

void CefPostDataElementCToCpp::SetToBytes(size_t size, const void* bytes) {
  if (CEF_MEMBER_MISSING(struct_, set_to_bytes))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: bytes; type: simple_byaddr
  DCHECK(bytes);
  if (!bytes)
    return;

  // Execute
  struct_->set_to_bytes(struct_,
      size,
      bytes);
}

CefPostDataElement::Type CefPostDataElementCToCpp::GetType() {
  if (CEF_MEMBER_MISSING(struct_, get_type))
    return PDE_TYPE_EMPTY;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_postdataelement_type_t _retval = struct_->get_type(struct_);

  // Return type: simple
  return _retval;
}

CefString CefPostDataElementCToCpp::GetFile() {
  if (CEF_MEMBER_MISSING(struct_, get_file))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_file(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

size_t CefPostDataElementCToCpp::GetBytesCount() {
  if (CEF_MEMBER_MISSING(struct_, get_bytes_count))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = struct_->get_bytes_count(struct_);

  // Return type: simple
  return _retval;
}

size_t CefPostDataElementCToCpp::GetBytes(size_t size, void* bytes) {
  if (CEF_MEMBER_MISSING(struct_, get_bytes))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: bytes; type: simple_byaddr
  DCHECK(bytes);
  if (!bytes)
    return 0;

  // Execute
  size_t _retval = struct_->get_bytes(struct_,
      size,
      bytes);

  // Return type: simple
  return _retval;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefPostDataElementCToCpp, CefPostDataElement,
    cef_post_data_element_t>::DebugObjCt = 0;
#endif

