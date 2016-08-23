// +build !minimal

#pragma once

#ifndef GO_QTXML_H
#define GO_QTXML_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void* QDomAttr_NewQDomAttr();
void* QDomAttr_NewQDomAttr2(void* x);
char* QDomAttr_Name(void* ptr);
long long QDomAttr_NodeType(void* ptr);
void* QDomAttr_OwnerElement(void* ptr);
void QDomAttr_SetValue(void* ptr, char* v);
char QDomAttr_Specified(void* ptr);
char* QDomAttr_Value(void* ptr);
void* QDomCDATASection_NewQDomCDATASection();
void* QDomCDATASection_NewQDomCDATASection2(void* x);
long long QDomCDATASection_NodeType(void* ptr);
void* QDomCharacterData_NewQDomCharacterData();
void* QDomCharacterData_NewQDomCharacterData2(void* x);
void QDomCharacterData_AppendData(void* ptr, char* arg);
char* QDomCharacterData_Data(void* ptr);
void QDomCharacterData_DeleteData(void* ptr, unsigned long offset, unsigned long count);
void QDomCharacterData_InsertData(void* ptr, unsigned long offset, char* arg);
int QDomCharacterData_Length(void* ptr);
long long QDomCharacterData_NodeType(void* ptr);
void QDomCharacterData_ReplaceData(void* ptr, unsigned long offset, unsigned long count, char* arg);
void QDomCharacterData_SetData(void* ptr, char* v);
char* QDomCharacterData_SubstringData(void* ptr, unsigned long offset, unsigned long count);
void* QDomComment_NewQDomComment();
void* QDomComment_NewQDomComment2(void* x);
long long QDomComment_NodeType(void* ptr);
void* QDomDocument_NewQDomDocument();
void* QDomDocument_NewQDomDocument4(void* x);
void* QDomDocument_NewQDomDocument3(void* doctype);
void* QDomDocument_NewQDomDocument2(char* name);
void* QDomDocument_CreateAttribute(void* ptr, char* name);
void* QDomDocument_CreateAttributeNS(void* ptr, char* nsURI, char* qName);
void* QDomDocument_CreateCDATASection(void* ptr, char* value);
void* QDomDocument_CreateComment(void* ptr, char* value);
void* QDomDocument_CreateDocumentFragment(void* ptr);
void* QDomDocument_CreateElement(void* ptr, char* tagName);
void* QDomDocument_CreateElementNS(void* ptr, char* nsURI, char* qName);
void* QDomDocument_CreateEntityReference(void* ptr, char* name);
void* QDomDocument_CreateProcessingInstruction(void* ptr, char* target, char* data);
void* QDomDocument_CreateTextNode(void* ptr, char* value);
void* QDomDocument_Doctype(void* ptr);
void* QDomDocument_DocumentElement(void* ptr);
void* QDomDocument_ElementById(void* ptr, char* elementId);
void* QDomDocument_ElementsByTagName(void* ptr, char* tagname);
void* QDomDocument_ElementsByTagNameNS(void* ptr, char* nsURI, char* localName);
void* QDomDocument_Implementation(void* ptr);
void* QDomDocument_ImportNode(void* ptr, void* importedNode, char deep);
long long QDomDocument_NodeType(void* ptr);
char QDomDocument_SetContent7(void* ptr, void* dev, char* errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent3(void* ptr, void* dev, char namespaceProcessing, char* errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent8(void* ptr, void* source, void* reader, char* errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent4(void* ptr, void* source, char namespaceProcessing, char* errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent5(void* ptr, char* buffer, char* errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent(void* ptr, char* data, char namespaceProcessing, char* errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent6(void* ptr, char* text, char* errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent2(void* ptr, char* text, char namespaceProcessing, char* errorMsg, int errorLine, int errorColumn);
char* QDomDocument_ToByteArray(void* ptr, int indent);
char* QDomDocument_ToString(void* ptr, int indent);
void QDomDocument_DestroyQDomDocument(void* ptr);
void* QDomDocumentFragment_NewQDomDocumentFragment();
void* QDomDocumentFragment_NewQDomDocumentFragment2(void* x);
long long QDomDocumentFragment_NodeType(void* ptr);
void* QDomDocumentType_NewQDomDocumentType();
void* QDomDocumentType_NewQDomDocumentType2(void* n);
void* QDomDocumentType_Entities(void* ptr);
char* QDomDocumentType_InternalSubset(void* ptr);
char* QDomDocumentType_Name(void* ptr);
long long QDomDocumentType_NodeType(void* ptr);
void* QDomDocumentType_Notations(void* ptr);
char* QDomDocumentType_PublicId(void* ptr);
char* QDomDocumentType_SystemId(void* ptr);
void* QDomElement_NewQDomElement();
void* QDomElement_NewQDomElement2(void* x);
char* QDomElement_Attribute(void* ptr, char* name, char* defValue);
char* QDomElement_AttributeNS(void* ptr, char* nsURI, char* localName, char* defValue);
void* QDomElement_AttributeNode(void* ptr, char* name);
void* QDomElement_AttributeNodeNS(void* ptr, char* nsURI, char* localName);
void* QDomElement_Attributes(void* ptr);
void* QDomElement_ElementsByTagName(void* ptr, char* tagname);
void* QDomElement_ElementsByTagNameNS(void* ptr, char* nsURI, char* localName);
char QDomElement_HasAttribute(void* ptr, char* name);
char QDomElement_HasAttributeNS(void* ptr, char* nsURI, char* localName);
long long QDomElement_NodeType(void* ptr);
void QDomElement_RemoveAttribute(void* ptr, char* name);
void QDomElement_RemoveAttributeNS(void* ptr, char* nsURI, char* localName);
void* QDomElement_RemoveAttributeNode(void* ptr, void* oldAttr);
void QDomElement_SetAttribute(void* ptr, char* name, char* value);
void QDomElement_SetAttribute7(void* ptr, char* name, double value);
void QDomElement_SetAttribute6(void* ptr, char* name, float value);
void QDomElement_SetAttribute4(void* ptr, char* name, int value);
void QDomElement_SetAttribute2(void* ptr, char* name, long long value);
void QDomElement_SetAttribute3(void* ptr, char* name, unsigned long long value);
void QDomElement_SetAttribute5(void* ptr, char* name, unsigned int value);
void QDomElement_SetAttributeNS(void* ptr, char* nsURI, char* qName, char* value);
void QDomElement_SetAttributeNS6(void* ptr, char* nsURI, char* qName, double value);
void QDomElement_SetAttributeNS2(void* ptr, char* nsURI, char* qName, int value);
void QDomElement_SetAttributeNS4(void* ptr, char* nsURI, char* qName, long long value);
void QDomElement_SetAttributeNS5(void* ptr, char* nsURI, char* qName, unsigned long long value);
void QDomElement_SetAttributeNS3(void* ptr, char* nsURI, char* qName, unsigned int value);
void* QDomElement_SetAttributeNode(void* ptr, void* newAttr);
void* QDomElement_SetAttributeNodeNS(void* ptr, void* newAttr);
void QDomElement_SetTagName(void* ptr, char* name);
char* QDomElement_TagName(void* ptr);
char* QDomElement_Text(void* ptr);
void* QDomEntity_NewQDomEntity();
void* QDomEntity_NewQDomEntity2(void* x);
long long QDomEntity_NodeType(void* ptr);
char* QDomEntity_NotationName(void* ptr);
char* QDomEntity_PublicId(void* ptr);
char* QDomEntity_SystemId(void* ptr);
void* QDomEntityReference_NewQDomEntityReference();
void* QDomEntityReference_NewQDomEntityReference2(void* x);
long long QDomEntityReference_NodeType(void* ptr);
void* QDomImplementation_NewQDomImplementation();
void* QDomImplementation_NewQDomImplementation2(void* x);
void* QDomImplementation_CreateDocument(void* ptr, char* nsURI, char* qName, void* doctype);
void* QDomImplementation_CreateDocumentType(void* ptr, char* qName, char* publicId, char* systemId);
char QDomImplementation_HasFeature(void* ptr, char* feature, char* version);
long long QDomImplementation_QDomImplementation_InvalidDataPolicy();
char QDomImplementation_IsNull(void* ptr);
void QDomImplementation_QDomImplementation_SetInvalidDataPolicy(long long policy);
void QDomImplementation_DestroyQDomImplementation(void* ptr);
void* QDomNamedNodeMap_NewQDomNamedNodeMap();
void* QDomNamedNodeMap_NewQDomNamedNodeMap2(void* n);
char QDomNamedNodeMap_Contains(void* ptr, char* name);
int QDomNamedNodeMap_Count(void* ptr);
char QDomNamedNodeMap_IsEmpty(void* ptr);
void* QDomNamedNodeMap_Item(void* ptr, int index);
int QDomNamedNodeMap_Length(void* ptr);
void* QDomNamedNodeMap_NamedItem(void* ptr, char* name);
void* QDomNamedNodeMap_NamedItemNS(void* ptr, char* nsURI, char* localName);
void* QDomNamedNodeMap_RemoveNamedItem(void* ptr, char* name);
void* QDomNamedNodeMap_RemoveNamedItemNS(void* ptr, char* nsURI, char* localName);
void* QDomNamedNodeMap_SetNamedItem(void* ptr, void* newNode);
void* QDomNamedNodeMap_SetNamedItemNS(void* ptr, void* newNode);
int QDomNamedNodeMap_Size(void* ptr);
void QDomNamedNodeMap_DestroyQDomNamedNodeMap(void* ptr);
void* QDomNode_NewQDomNode();
void* QDomNode_NewQDomNode2(void* n);
void* QDomNode_AppendChild(void* ptr, void* newChild);
void* QDomNode_Attributes(void* ptr);
void* QDomNode_ChildNodes(void* ptr);
void QDomNode_Clear(void* ptr);
void* QDomNode_CloneNode(void* ptr, char deep);
int QDomNode_ColumnNumber(void* ptr);
void* QDomNode_FirstChild(void* ptr);
void* QDomNode_FirstChildElement(void* ptr, char* tagName);
char QDomNode_HasAttributes(void* ptr);
char QDomNode_HasChildNodes(void* ptr);
void* QDomNode_InsertAfter(void* ptr, void* newChild, void* refChild);
void* QDomNode_InsertBefore(void* ptr, void* newChild, void* refChild);
char QDomNode_IsAttr(void* ptr);
char QDomNode_IsCDATASection(void* ptr);
char QDomNode_IsCharacterData(void* ptr);
char QDomNode_IsComment(void* ptr);
char QDomNode_IsDocument(void* ptr);
char QDomNode_IsDocumentFragment(void* ptr);
char QDomNode_IsDocumentType(void* ptr);
char QDomNode_IsElement(void* ptr);
char QDomNode_IsEntity(void* ptr);
char QDomNode_IsEntityReference(void* ptr);
char QDomNode_IsNotation(void* ptr);
char QDomNode_IsNull(void* ptr);
char QDomNode_IsProcessingInstruction(void* ptr);
char QDomNode_IsSupported(void* ptr, char* feature, char* version);
char QDomNode_IsText(void* ptr);
void* QDomNode_LastChild(void* ptr);
void* QDomNode_LastChildElement(void* ptr, char* tagName);
int QDomNode_LineNumber(void* ptr);
char* QDomNode_LocalName(void* ptr);
void* QDomNode_NamedItem(void* ptr, char* name);
char* QDomNode_NamespaceURI(void* ptr);
void* QDomNode_NextSibling(void* ptr);
void* QDomNode_NextSiblingElement(void* ptr, char* tagName);
char* QDomNode_NodeName(void* ptr);
long long QDomNode_NodeType(void* ptr);
char* QDomNode_NodeValue(void* ptr);
void QDomNode_Normalize(void* ptr);
void* QDomNode_OwnerDocument(void* ptr);
void* QDomNode_ParentNode(void* ptr);
char* QDomNode_Prefix(void* ptr);
void* QDomNode_PreviousSibling(void* ptr);
void* QDomNode_PreviousSiblingElement(void* ptr, char* tagName);
void* QDomNode_RemoveChild(void* ptr, void* oldChild);
void* QDomNode_ReplaceChild(void* ptr, void* newChild, void* oldChild);
void QDomNode_Save(void* ptr, void* stream, int indent, long long encodingPolicy);
void QDomNode_SetNodeValue(void* ptr, char* v);
void QDomNode_SetPrefix(void* ptr, char* pre);
void* QDomNode_ToAttr(void* ptr);
void* QDomNode_ToCDATASection(void* ptr);
void* QDomNode_ToCharacterData(void* ptr);
void* QDomNode_ToComment(void* ptr);
void* QDomNode_ToDocument(void* ptr);
void* QDomNode_ToDocumentFragment(void* ptr);
void* QDomNode_ToDocumentType(void* ptr);
void* QDomNode_ToElement(void* ptr);
void* QDomNode_ToEntity(void* ptr);
void* QDomNode_ToEntityReference(void* ptr);
void* QDomNode_ToNotation(void* ptr);
void* QDomNode_ToProcessingInstruction(void* ptr);
void* QDomNode_ToText(void* ptr);
void QDomNode_DestroyQDomNode(void* ptr);
void* QDomNodeList_NewQDomNodeList();
void* QDomNodeList_NewQDomNodeList2(void* n);
void* QDomNodeList_At(void* ptr, int index);
int QDomNodeList_Count(void* ptr);
char QDomNodeList_IsEmpty(void* ptr);
void* QDomNodeList_Item(void* ptr, int index);
int QDomNodeList_Length(void* ptr);
int QDomNodeList_Size(void* ptr);
void QDomNodeList_DestroyQDomNodeList(void* ptr);
void* QDomNotation_NewQDomNotation();
void* QDomNotation_NewQDomNotation2(void* x);
long long QDomNotation_NodeType(void* ptr);
char* QDomNotation_PublicId(void* ptr);
char* QDomNotation_SystemId(void* ptr);
void* QDomProcessingInstruction_NewQDomProcessingInstruction();
void* QDomProcessingInstruction_NewQDomProcessingInstruction2(void* x);
char* QDomProcessingInstruction_Data(void* ptr);
long long QDomProcessingInstruction_NodeType(void* ptr);
void QDomProcessingInstruction_SetData(void* ptr, char* d);
char* QDomProcessingInstruction_Target(void* ptr);
void* QDomText_NewQDomText();
void* QDomText_NewQDomText2(void* x);
long long QDomText_NodeType(void* ptr);
void* QDomText_SplitText(void* ptr, int offset);
void* QXmlAttributes_NewQXmlAttributes();
void QXmlAttributes_DestroyQXmlAttributes(void* ptr);
void QXmlAttributes_Append(void* ptr, char* qName, char* uri, char* localPart, char* value);
void QXmlAttributes_Clear(void* ptr);
int QXmlAttributes_Count(void* ptr);
int QXmlAttributes_Index2(void* ptr, void* qName);
int QXmlAttributes_Index(void* ptr, char* qName);
int QXmlAttributes_Index3(void* ptr, char* uri, char* localPart);
int QXmlAttributes_Length(void* ptr);
char* QXmlAttributes_LocalName(void* ptr, int index);
char* QXmlAttributes_QName(void* ptr, int index);
char* QXmlAttributes_Type2(void* ptr, char* qName);
char* QXmlAttributes_Type3(void* ptr, char* uri, char* localName);
char* QXmlAttributes_Type(void* ptr, int index);
char* QXmlAttributes_Uri(void* ptr, int index);
char* QXmlAttributes_Value3(void* ptr, void* qName);
char* QXmlAttributes_Value2(void* ptr, char* qName);
char* QXmlAttributes_Value4(void* ptr, char* uri, char* localName);
char* QXmlAttributes_Value(void* ptr, int index);
char QXmlContentHandler_Characters(void* ptr, char* ch);
char QXmlContentHandler_EndDocument(void* ptr);
char QXmlContentHandler_EndElement(void* ptr, char* namespaceURI, char* localName, char* qName);
char QXmlContentHandler_EndPrefixMapping(void* ptr, char* prefix);
char* QXmlContentHandler_ErrorString(void* ptr);
char QXmlContentHandler_IgnorableWhitespace(void* ptr, char* ch);
char QXmlContentHandler_ProcessingInstruction(void* ptr, char* target, char* data);
void QXmlContentHandler_SetDocumentLocator(void* ptr, void* locator);
char QXmlContentHandler_SkippedEntity(void* ptr, char* name);
char QXmlContentHandler_StartDocument(void* ptr);
char QXmlContentHandler_StartElement(void* ptr, char* namespaceURI, char* localName, char* qName, void* atts);
char QXmlContentHandler_StartPrefixMapping(void* ptr, char* prefix, char* uri);
void QXmlContentHandler_DestroyQXmlContentHandler(void* ptr);
char* QXmlDTDHandler_ErrorString(void* ptr);
char QXmlDTDHandler_NotationDecl(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDTDHandler_UnparsedEntityDecl(void* ptr, char* name, char* publicId, char* systemId, char* notationName);
void QXmlDTDHandler_DestroyQXmlDTDHandler(void* ptr);
char QXmlDeclHandler_AttributeDecl(void* ptr, char* eName, char* aName, char* ty, char* valueDefault, char* value);
char* QXmlDeclHandler_ErrorString(void* ptr);
char QXmlDeclHandler_ExternalEntityDecl(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDeclHandler_InternalEntityDecl(void* ptr, char* name, char* value);
void QXmlDeclHandler_DestroyQXmlDeclHandler(void* ptr);
void* QXmlDefaultHandler_NewQXmlDefaultHandler();
void QXmlDefaultHandler_DestroyQXmlDefaultHandler(void* ptr);
char QXmlDefaultHandler_AttributeDecl(void* ptr, char* eName, char* aName, char* ty, char* valueDefault, char* value);
char QXmlDefaultHandler_AttributeDeclDefault(void* ptr, char* eName, char* aName, char* ty, char* valueDefault, char* value);
char QXmlDefaultHandler_Characters(void* ptr, char* ch);
char QXmlDefaultHandler_CharactersDefault(void* ptr, char* ch);
char QXmlDefaultHandler_Comment(void* ptr, char* ch);
char QXmlDefaultHandler_CommentDefault(void* ptr, char* ch);
char QXmlDefaultHandler_EndCDATA(void* ptr);
char QXmlDefaultHandler_EndCDATADefault(void* ptr);
char QXmlDefaultHandler_EndDTD(void* ptr);
char QXmlDefaultHandler_EndDTDDefault(void* ptr);
char QXmlDefaultHandler_EndDocument(void* ptr);
char QXmlDefaultHandler_EndDocumentDefault(void* ptr);
char QXmlDefaultHandler_EndElement(void* ptr, char* namespaceURI, char* localName, char* qName);
char QXmlDefaultHandler_EndElementDefault(void* ptr, char* namespaceURI, char* localName, char* qName);
char QXmlDefaultHandler_EndEntity(void* ptr, char* name);
char QXmlDefaultHandler_EndEntityDefault(void* ptr, char* name);
char QXmlDefaultHandler_EndPrefixMapping(void* ptr, char* prefix);
char QXmlDefaultHandler_EndPrefixMappingDefault(void* ptr, char* prefix);
char QXmlDefaultHandler_Error(void* ptr, void* exception);
char QXmlDefaultHandler_ErrorDefault(void* ptr, void* exception);
char* QXmlDefaultHandler_ErrorString(void* ptr);
char* QXmlDefaultHandler_ErrorStringDefault(void* ptr);
char QXmlDefaultHandler_ExternalEntityDecl(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDefaultHandler_ExternalEntityDeclDefault(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDefaultHandler_FatalError(void* ptr, void* exception);
char QXmlDefaultHandler_FatalErrorDefault(void* ptr, void* exception);
char QXmlDefaultHandler_IgnorableWhitespace(void* ptr, char* ch);
char QXmlDefaultHandler_IgnorableWhitespaceDefault(void* ptr, char* ch);
char QXmlDefaultHandler_InternalEntityDecl(void* ptr, char* name, char* value);
char QXmlDefaultHandler_InternalEntityDeclDefault(void* ptr, char* name, char* value);
char QXmlDefaultHandler_NotationDecl(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDefaultHandler_NotationDeclDefault(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDefaultHandler_ProcessingInstruction(void* ptr, char* target, char* data);
char QXmlDefaultHandler_ProcessingInstructionDefault(void* ptr, char* target, char* data);
char QXmlDefaultHandler_ResolveEntity(void* ptr, char* publicId, char* systemId, void* ret);
char QXmlDefaultHandler_ResolveEntityDefault(void* ptr, char* publicId, char* systemId, void* ret);
void QXmlDefaultHandler_SetDocumentLocator(void* ptr, void* locator);
void QXmlDefaultHandler_SetDocumentLocatorDefault(void* ptr, void* locator);
char QXmlDefaultHandler_SkippedEntity(void* ptr, char* name);
char QXmlDefaultHandler_SkippedEntityDefault(void* ptr, char* name);
char QXmlDefaultHandler_StartCDATA(void* ptr);
char QXmlDefaultHandler_StartCDATADefault(void* ptr);
char QXmlDefaultHandler_StartDTD(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDefaultHandler_StartDTDDefault(void* ptr, char* name, char* publicId, char* systemId);
char QXmlDefaultHandler_StartDocument(void* ptr);
char QXmlDefaultHandler_StartDocumentDefault(void* ptr);
char QXmlDefaultHandler_StartElement(void* ptr, char* namespaceURI, char* localName, char* qName, void* atts);
char QXmlDefaultHandler_StartElementDefault(void* ptr, char* namespaceURI, char* localName, char* qName, void* atts);
char QXmlDefaultHandler_StartEntity(void* ptr, char* name);
char QXmlDefaultHandler_StartEntityDefault(void* ptr, char* name);
char QXmlDefaultHandler_StartPrefixMapping(void* ptr, char* prefix, char* uri);
char QXmlDefaultHandler_StartPrefixMappingDefault(void* ptr, char* prefix, char* uri);
char QXmlDefaultHandler_UnparsedEntityDecl(void* ptr, char* name, char* publicId, char* systemId, char* notationName);
char QXmlDefaultHandler_UnparsedEntityDeclDefault(void* ptr, char* name, char* publicId, char* systemId, char* notationName);
char QXmlDefaultHandler_Warning(void* ptr, void* exception);
char QXmlDefaultHandler_WarningDefault(void* ptr, void* exception);
char* QXmlEntityResolver_ErrorString(void* ptr);
char QXmlEntityResolver_ResolveEntity(void* ptr, char* publicId, char* systemId, void* ret);
void QXmlEntityResolver_DestroyQXmlEntityResolver(void* ptr);
char QXmlErrorHandler_Error(void* ptr, void* exception);
char* QXmlErrorHandler_ErrorString(void* ptr);
char QXmlErrorHandler_FatalError(void* ptr, void* exception);
char QXmlErrorHandler_Warning(void* ptr, void* exception);
void QXmlErrorHandler_DestroyQXmlErrorHandler(void* ptr);
void* QXmlInputSource_NewQXmlInputSource();
void* QXmlInputSource_NewQXmlInputSource2(void* dev);
char* QXmlInputSource_Data(void* ptr);
char* QXmlInputSource_DataDefault(void* ptr);
void QXmlInputSource_FetchData(void* ptr);
void QXmlInputSource_FetchDataDefault(void* ptr);
char* QXmlInputSource_FromRawData(void* ptr, char* data, char beginning);
char* QXmlInputSource_FromRawDataDefault(void* ptr, char* data, char beginning);
void* QXmlInputSource_Next(void* ptr);
void* QXmlInputSource_NextDefault(void* ptr);
void QXmlInputSource_Reset(void* ptr);
void QXmlInputSource_ResetDefault(void* ptr);
void QXmlInputSource_SetData2(void* ptr, char* dat);
void QXmlInputSource_SetData2Default(void* ptr, char* dat);
void QXmlInputSource_SetData(void* ptr, char* dat);
void QXmlInputSource_SetDataDefault(void* ptr, char* dat);
void QXmlInputSource_DestroyQXmlInputSource(void* ptr);
unsigned short QXmlInputSource_QXmlInputSource_EndOfData();
unsigned short QXmlInputSource_QXmlInputSource_EndOfDocument();
char QXmlLexicalHandler_Comment(void* ptr, char* ch);
char QXmlLexicalHandler_EndCDATA(void* ptr);
char QXmlLexicalHandler_EndDTD(void* ptr);
char QXmlLexicalHandler_EndEntity(void* ptr, char* name);
char* QXmlLexicalHandler_ErrorString(void* ptr);
char QXmlLexicalHandler_StartCDATA(void* ptr);
char QXmlLexicalHandler_StartDTD(void* ptr, char* name, char* publicId, char* systemId);
char QXmlLexicalHandler_StartEntity(void* ptr, char* name);
void QXmlLexicalHandler_DestroyQXmlLexicalHandler(void* ptr);
void* QXmlLocator_NewQXmlLocator();
int QXmlLocator_ColumnNumber(void* ptr);
int QXmlLocator_LineNumber(void* ptr);
void QXmlLocator_DestroyQXmlLocator(void* ptr);
void* QXmlNamespaceSupport_NewQXmlNamespaceSupport();
void QXmlNamespaceSupport_PopContext(void* ptr);
char* QXmlNamespaceSupport_Prefix(void* ptr, char* uri);
char* QXmlNamespaceSupport_Prefixes(void* ptr);
char* QXmlNamespaceSupport_Prefixes2(void* ptr, char* uri);
void QXmlNamespaceSupport_ProcessName(void* ptr, char* qname, char isAttribute, char* nsuri, char* localname);
void QXmlNamespaceSupport_PushContext(void* ptr);
void QXmlNamespaceSupport_Reset(void* ptr);
void QXmlNamespaceSupport_SetPrefix(void* ptr, char* pre, char* uri);
void QXmlNamespaceSupport_SplitName(void* ptr, char* qname, char* prefix, char* localname);
char* QXmlNamespaceSupport_Uri(void* ptr, char* prefix);
void QXmlNamespaceSupport_DestroyQXmlNamespaceSupport(void* ptr);
void* QXmlParseException_NewQXmlParseException(char* name, int c, int l, char* p, char* s);
void* QXmlParseException_NewQXmlParseException2(void* other);
int QXmlParseException_ColumnNumber(void* ptr);
int QXmlParseException_LineNumber(void* ptr);
char* QXmlParseException_Message(void* ptr);
char* QXmlParseException_PublicId(void* ptr);
char* QXmlParseException_SystemId(void* ptr);
void QXmlParseException_DestroyQXmlParseException(void* ptr);
void* QXmlReader_DTDHandler(void* ptr);
void* QXmlReader_ContentHandler(void* ptr);
void* QXmlReader_DeclHandler(void* ptr);
void* QXmlReader_EntityResolver(void* ptr);
void* QXmlReader_ErrorHandler(void* ptr);
char QXmlReader_Feature(void* ptr, char* name, char ok);
char QXmlReader_HasFeature(void* ptr, char* name);
char QXmlReader_HasProperty(void* ptr, char* name);
void* QXmlReader_LexicalHandler(void* ptr);
char QXmlReader_Parse(void* ptr, void* input);
void* QXmlReader_Property(void* ptr, char* name, char ok);
void QXmlReader_SetContentHandler(void* ptr, void* handler);
void QXmlReader_SetDTDHandler(void* ptr, void* handler);
void QXmlReader_SetDeclHandler(void* ptr, void* handler);
void QXmlReader_SetEntityResolver(void* ptr, void* handler);
void QXmlReader_SetErrorHandler(void* ptr, void* handler);
void QXmlReader_SetFeature(void* ptr, char* name, char value);
void QXmlReader_SetLexicalHandler(void* ptr, void* handler);
void QXmlReader_SetProperty(void* ptr, char* name, void* value);
void QXmlReader_DestroyQXmlReader(void* ptr);
void* QXmlSimpleReader_DTDHandler(void* ptr);
void* QXmlSimpleReader_DTDHandlerDefault(void* ptr);
void* QXmlSimpleReader_NewQXmlSimpleReader();
void* QXmlSimpleReader_ContentHandler(void* ptr);
void* QXmlSimpleReader_ContentHandlerDefault(void* ptr);
void* QXmlSimpleReader_DeclHandler(void* ptr);
void* QXmlSimpleReader_DeclHandlerDefault(void* ptr);
void* QXmlSimpleReader_EntityResolver(void* ptr);
void* QXmlSimpleReader_EntityResolverDefault(void* ptr);
void* QXmlSimpleReader_ErrorHandler(void* ptr);
void* QXmlSimpleReader_ErrorHandlerDefault(void* ptr);
char QXmlSimpleReader_Feature(void* ptr, char* name, char ok);
char QXmlSimpleReader_FeatureDefault(void* ptr, char* name, char ok);
char QXmlSimpleReader_HasFeature(void* ptr, char* name);
char QXmlSimpleReader_HasFeatureDefault(void* ptr, char* name);
char QXmlSimpleReader_HasProperty(void* ptr, char* name);
char QXmlSimpleReader_HasPropertyDefault(void* ptr, char* name);
void* QXmlSimpleReader_LexicalHandler(void* ptr);
void* QXmlSimpleReader_LexicalHandlerDefault(void* ptr);
char QXmlSimpleReader_Parse(void* ptr, void* input);
char QXmlSimpleReader_ParseDefault(void* ptr, void* input);
char QXmlSimpleReader_Parse2(void* ptr, void* input);
char QXmlSimpleReader_Parse2Default(void* ptr, void* input);
char QXmlSimpleReader_Parse3(void* ptr, void* input, char incremental);
char QXmlSimpleReader_Parse3Default(void* ptr, void* input, char incremental);
char QXmlSimpleReader_ParseContinue(void* ptr);
char QXmlSimpleReader_ParseContinueDefault(void* ptr);
void* QXmlSimpleReader_Property(void* ptr, char* name, char ok);
void* QXmlSimpleReader_PropertyDefault(void* ptr, char* name, char ok);
void QXmlSimpleReader_SetContentHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetContentHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetDTDHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetDTDHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetDeclHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetDeclHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetEntityResolver(void* ptr, void* handler);
void QXmlSimpleReader_SetEntityResolverDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetErrorHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetErrorHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetFeature(void* ptr, char* name, char enable);
void QXmlSimpleReader_SetFeatureDefault(void* ptr, char* name, char enable);
void QXmlSimpleReader_SetLexicalHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetLexicalHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetProperty(void* ptr, char* name, void* value);
void QXmlSimpleReader_SetPropertyDefault(void* ptr, char* name, void* value);
void QXmlSimpleReader_DestroyQXmlSimpleReader(void* ptr);

#ifdef __cplusplus
}
#endif

#endif