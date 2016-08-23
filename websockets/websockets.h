// +build !minimal

#pragma once

#ifndef GO_QTWEBSOCKETS_H
#define GO_QTWEBSOCKETS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void* QMaskGenerator_NewQMaskGenerator(void* parent);
unsigned int QMaskGenerator_NextMask(void* ptr);
char QMaskGenerator_Seed(void* ptr);
void QMaskGenerator_DestroyQMaskGenerator(void* ptr);
void QMaskGenerator_TimerEvent(void* ptr, void* event);
void QMaskGenerator_TimerEventDefault(void* ptr, void* event);
void QMaskGenerator_ChildEvent(void* ptr, void* event);
void QMaskGenerator_ChildEventDefault(void* ptr, void* event);
void QMaskGenerator_ConnectNotify(void* ptr, void* sign);
void QMaskGenerator_ConnectNotifyDefault(void* ptr, void* sign);
void QMaskGenerator_CustomEvent(void* ptr, void* event);
void QMaskGenerator_CustomEventDefault(void* ptr, void* event);
void QMaskGenerator_DeleteLater(void* ptr);
void QMaskGenerator_DeleteLaterDefault(void* ptr);
void QMaskGenerator_DisconnectNotify(void* ptr, void* sign);
void QMaskGenerator_DisconnectNotifyDefault(void* ptr, void* sign);
char QMaskGenerator_Event(void* ptr, void* e);
char QMaskGenerator_EventDefault(void* ptr, void* e);
char QMaskGenerator_EventFilter(void* ptr, void* watched, void* event);
char QMaskGenerator_EventFilterDefault(void* ptr, void* watched, void* event);
void* QMaskGenerator_MetaObject(void* ptr);
void* QMaskGenerator_MetaObjectDefault(void* ptr);
void QWebSocket_Abort(void* ptr);
void QWebSocket_ConnectAboutToClose(void* ptr);
void QWebSocket_DisconnectAboutToClose(void* ptr);
void QWebSocket_AboutToClose(void* ptr);
void QWebSocket_ConnectBinaryFrameReceived(void* ptr);
void QWebSocket_DisconnectBinaryFrameReceived(void* ptr);
void QWebSocket_BinaryFrameReceived(void* ptr, char* frame, char isLastFrame);
void QWebSocket_ConnectBinaryMessageReceived(void* ptr);
void QWebSocket_DisconnectBinaryMessageReceived(void* ptr);
void QWebSocket_BinaryMessageReceived(void* ptr, char* message);
void QWebSocket_ConnectBytesWritten(void* ptr);
void QWebSocket_DisconnectBytesWritten(void* ptr);
void QWebSocket_BytesWritten(void* ptr, long long bytes);
char* QWebSocket_CloseReason(void* ptr);
void QWebSocket_ConnectConnected(void* ptr);
void QWebSocket_DisconnectConnected(void* ptr);
void QWebSocket_Connected(void* ptr);
void QWebSocket_ConnectDisconnected(void* ptr);
void QWebSocket_DisconnectDisconnected(void* ptr);
void QWebSocket_Disconnected(void* ptr);
void QWebSocket_ConnectError2(void* ptr);
void QWebSocket_DisconnectError2(void* ptr);
void QWebSocket_Error2(void* ptr, long long error);
long long QWebSocket_Error(void* ptr);
char* QWebSocket_ErrorString(void* ptr);
char QWebSocket_Flush(void* ptr);
void QWebSocket_IgnoreSslErrors(void* ptr);
char QWebSocket_IsValid(void* ptr);
void* QWebSocket_LocalAddress(void* ptr);
unsigned short QWebSocket_LocalPort(void* ptr);
void* QWebSocket_MaskGenerator(void* ptr);
void QWebSocket_Open2(void* ptr, void* request);
void QWebSocket_Open(void* ptr, void* url);
char* QWebSocket_Origin(void* ptr);
long long QWebSocket_PauseMode(void* ptr);
void* QWebSocket_PeerAddress(void* ptr);
char* QWebSocket_PeerName(void* ptr);
unsigned short QWebSocket_PeerPort(void* ptr);
void QWebSocket_Ping(void* ptr, char* payload);
void QWebSocket_ConnectPong(void* ptr);
void QWebSocket_DisconnectPong(void* ptr);
void QWebSocket_Pong(void* ptr, unsigned long long elapsedTime, char* payload);
void* QWebSocket_Proxy(void* ptr);
void QWebSocket_ConnectProxyAuthenticationRequired(void* ptr);
void QWebSocket_DisconnectProxyAuthenticationRequired(void* ptr);
void QWebSocket_ProxyAuthenticationRequired(void* ptr, void* proxy, void* authenticator);
long long QWebSocket_ReadBufferSize(void* ptr);
void QWebSocket_ConnectReadChannelFinished(void* ptr);
void QWebSocket_DisconnectReadChannelFinished(void* ptr);
void QWebSocket_ReadChannelFinished(void* ptr);
void* QWebSocket_Request(void* ptr);
void* QWebSocket_RequestUrl(void* ptr);
char* QWebSocket_ResourceName(void* ptr);
void QWebSocket_Resume(void* ptr);
long long QWebSocket_SendBinaryMessage(void* ptr, char* data);
long long QWebSocket_SendTextMessage(void* ptr, char* message);
void QWebSocket_SetMaskGenerator(void* ptr, void* maskGenerator);
void QWebSocket_SetPauseMode(void* ptr, long long pauseMode);
void QWebSocket_SetProxy(void* ptr, void* networkProxy);
void QWebSocket_SetReadBufferSize(void* ptr, long long size);
void QWebSocket_SetSslConfiguration(void* ptr, void* sslConfiguration);
void* QWebSocket_SslConfiguration(void* ptr);
long long QWebSocket_State(void* ptr);
void QWebSocket_ConnectStateChanged(void* ptr);
void QWebSocket_DisconnectStateChanged(void* ptr);
void QWebSocket_StateChanged(void* ptr, long long state);
void QWebSocket_ConnectTextFrameReceived(void* ptr);
void QWebSocket_DisconnectTextFrameReceived(void* ptr);
void QWebSocket_TextFrameReceived(void* ptr, char* frame, char isLastFrame);
void QWebSocket_ConnectTextMessageReceived(void* ptr);
void QWebSocket_DisconnectTextMessageReceived(void* ptr);
void QWebSocket_TextMessageReceived(void* ptr, char* message);
void QWebSocket_DestroyQWebSocket(void* ptr);
void QWebSocket_TimerEvent(void* ptr, void* event);
void QWebSocket_TimerEventDefault(void* ptr, void* event);
void QWebSocket_ChildEvent(void* ptr, void* event);
void QWebSocket_ChildEventDefault(void* ptr, void* event);
void QWebSocket_ConnectNotify(void* ptr, void* sign);
void QWebSocket_ConnectNotifyDefault(void* ptr, void* sign);
void QWebSocket_CustomEvent(void* ptr, void* event);
void QWebSocket_CustomEventDefault(void* ptr, void* event);
void QWebSocket_DeleteLater(void* ptr);
void QWebSocket_DeleteLaterDefault(void* ptr);
void QWebSocket_DisconnectNotify(void* ptr, void* sign);
void QWebSocket_DisconnectNotifyDefault(void* ptr, void* sign);
char QWebSocket_Event(void* ptr, void* e);
char QWebSocket_EventDefault(void* ptr, void* e);
char QWebSocket_EventFilter(void* ptr, void* watched, void* event);
char QWebSocket_EventFilterDefault(void* ptr, void* watched, void* event);
void* QWebSocket_MetaObject(void* ptr);
void* QWebSocket_MetaObjectDefault(void* ptr);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator3(void* other);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator(char* origin);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator2(void* other);
char QWebSocketCorsAuthenticator_Allowed(void* ptr);
char* QWebSocketCorsAuthenticator_Origin(void* ptr);
void QWebSocketCorsAuthenticator_SetAllowed(void* ptr, char allowed);
void QWebSocketCorsAuthenticator_Swap(void* ptr, void* other);
void QWebSocketCorsAuthenticator_DestroyQWebSocketCorsAuthenticator(void* ptr);
void* QWebSocketServer_NewQWebSocketServer(char* serverName, long long secureMode, void* parent);
void QWebSocketServer_ConnectAcceptError(void* ptr);
void QWebSocketServer_DisconnectAcceptError(void* ptr);
void QWebSocketServer_AcceptError(void* ptr, long long socketError);
void QWebSocketServer_Close(void* ptr);
void QWebSocketServer_ConnectClosed(void* ptr);
void QWebSocketServer_DisconnectClosed(void* ptr);
void QWebSocketServer_Closed(void* ptr);
char* QWebSocketServer_ErrorString(void* ptr);
char QWebSocketServer_HasPendingConnections(void* ptr);
char QWebSocketServer_IsListening(void* ptr);
char QWebSocketServer_Listen(void* ptr, void* address, unsigned short port);
int QWebSocketServer_MaxPendingConnections(void* ptr);
void QWebSocketServer_ConnectNewConnection(void* ptr);
void QWebSocketServer_DisconnectNewConnection(void* ptr);
void QWebSocketServer_NewConnection(void* ptr);
void* QWebSocketServer_NextPendingConnection(void* ptr);
void* QWebSocketServer_NextPendingConnectionDefault(void* ptr);
void QWebSocketServer_ConnectOriginAuthenticationRequired(void* ptr);
void QWebSocketServer_DisconnectOriginAuthenticationRequired(void* ptr);
void QWebSocketServer_OriginAuthenticationRequired(void* ptr, void* authenticator);
void QWebSocketServer_PauseAccepting(void* ptr);
void QWebSocketServer_ConnectPeerVerifyError(void* ptr);
void QWebSocketServer_DisconnectPeerVerifyError(void* ptr);
void QWebSocketServer_PeerVerifyError(void* ptr, void* error);
void* QWebSocketServer_Proxy(void* ptr);
void QWebSocketServer_ResumeAccepting(void* ptr);
long long QWebSocketServer_SecureMode(void* ptr);
void* QWebSocketServer_ServerAddress(void* ptr);
char* QWebSocketServer_ServerName(void* ptr);
unsigned short QWebSocketServer_ServerPort(void* ptr);
void* QWebSocketServer_ServerUrl(void* ptr);
void QWebSocketServer_SetMaxPendingConnections(void* ptr, int numConnections);
void QWebSocketServer_SetProxy(void* ptr, void* networkProxy);
void QWebSocketServer_SetServerName(void* ptr, char* serverName);
char QWebSocketServer_SetSocketDescriptor(void* ptr, int socketDescriptor);
void QWebSocketServer_SetSslConfiguration(void* ptr, void* sslConfiguration);
int QWebSocketServer_SocketDescriptor(void* ptr);
void* QWebSocketServer_SslConfiguration(void* ptr);
void QWebSocketServer_DestroyQWebSocketServer(void* ptr);
void QWebSocketServer_TimerEvent(void* ptr, void* event);
void QWebSocketServer_TimerEventDefault(void* ptr, void* event);
void QWebSocketServer_ChildEvent(void* ptr, void* event);
void QWebSocketServer_ChildEventDefault(void* ptr, void* event);
void QWebSocketServer_ConnectNotify(void* ptr, void* sign);
void QWebSocketServer_ConnectNotifyDefault(void* ptr, void* sign);
void QWebSocketServer_CustomEvent(void* ptr, void* event);
void QWebSocketServer_CustomEventDefault(void* ptr, void* event);
void QWebSocketServer_DeleteLater(void* ptr);
void QWebSocketServer_DeleteLaterDefault(void* ptr);
void QWebSocketServer_DisconnectNotify(void* ptr, void* sign);
void QWebSocketServer_DisconnectNotifyDefault(void* ptr, void* sign);
char QWebSocketServer_Event(void* ptr, void* e);
char QWebSocketServer_EventDefault(void* ptr, void* e);
char QWebSocketServer_EventFilter(void* ptr, void* watched, void* event);
char QWebSocketServer_EventFilterDefault(void* ptr, void* watched, void* event);
void* QWebSocketServer_MetaObject(void* ptr);
void* QWebSocketServer_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif