/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MVChatConnection.h"
#import <Foundation/Foundation.h>

@class NSMutableDictionary, NSDictionary, MVChatUser, NSMutableSet, NSString, NSMutableArray, NSError, NSTimer, NSArray, NSDate, NSSet, NSURL, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface MVChatConnection : NSObject {
	NSMutableSet* _supportedFeatures;
	int _status;
	int _outgoingChatFormat;
	unsigned _encoding;
	NSString* uniqueID;
	NSString* _npassword;
	NSMutableDictionary* _joinedRooms;
	MVChatUser* _localUser;
	NSMutableDictionary* _roomsCache;
	NSMutableArray* _roomsListArray;
	NSMutableSet* _chatUserWatchRules;
	NSDate* _cachedDate;
	NSDate* _lastConnectAttempt;
	NSTimer* _reconnectTimer;
	NSString* _awayMessage;
	NSMutableDictionary* _persistentInformation;
	NSError* _lastError;
	int _proxy;
	NSString* _proxyServer;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	unsigned short _proxyServerPort;
	BOOL _secure;
	BOOL _roomListDirty;
	NSArray* _alternateNicks;
	unsigned short _nextAltNickIndex;
	unsigned _hash;
}
@property(readonly, assign) unsigned lag;
@property(readonly, assign) int status;
@property(readonly, assign, getter=isWaitingToReconnect) BOOL waitingToReconnect;
@property(readonly, assign, getter=isConnected) BOOL connected;
@property(copy) NSString* awayStatusMessage;
@property(readonly, assign) NSSet* chatUserWatchRules;
@property(readonly, assign) MVChatUser* localUser;
@property(readonly, assign) NSSet* knownChatUsers;
@property(readonly, assign) NSCharacterSet* chatRoomNamePrefixes;
@property(readonly, assign) NSSet* joinedChatRooms;
@property(assign) unsigned short proxyServerPort;
@property(copy) NSString* proxyServer;
@property(assign) int proxyType;
@property(copy) NSDictionary* persistentInformation;
@property(assign, getter=isSecure) BOOL secure;
@property(copy) NSString* proxyPassword;
@property(copy) NSString* proxyUsername;
@property(assign) int outgoingChatFormat;
@property(assign) unsigned short serverPort;
@property(copy) NSString* server;
@property(copy) NSString* username;
@property(copy) NSString* password;
@property(readonly, assign) NSString* certificatePassword;
@property(readonly, assign) NSString* certificateServiceName;
@property(copy) NSString* nicknamePassword;
@property(readonly, assign) NSString* nextAlternateNickname;
@property(copy) NSArray* alternateNicknames;
@property(readonly, assign) NSString* preferredNickname;
@property(copy) NSString* nickname;
@property(copy) NSString* realName;
@property(assign) unsigned encoding;
@property(readonly, assign) NSURL* url;
@property(readonly, assign) NSString* urlScheme;
@property(readonly, assign) NSError* lastError;
@property(readonly, assign) unsigned* supportedStringEncodings;
@property(readonly, assign) NSSet* supportedFeatures;
@property(readonly, assign) int type;
@property(retain) NSString* uniqueID;
+(BOOL)supportsURLScheme:(id)scheme;
+(id)defaultServerPortsForType:(int)type;
-(id)init;
-(id)_newStringWithBytes:(const char*)bytes length:(unsigned)length;
-(id)initWithType:(int)type;
-(id)initWithURL:(id)url;
-(id)initWithServer:(id)server type:(int)type port:(unsigned short)port user:(id)user;
-(void)finalize;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)selector;
-(unsigned)hash;
-(BOOL)supportsFeature:(id)feature;
-(BOOL)supportsStringEncoding:(unsigned)encoding;
-(void)connect;
-(void)connectToServer:(id)server onPort:(unsigned short)port asUser:(id)user;
-(void)disconnect;
-(void)disconnectWithReason:(NSString*)reason;
-(BOOL)setCertificatePassword:(id)password;
-(void)publicKeyVerified:(id)verified andAccepted:(BOOL)accepted andAlwaysAccept:(BOOL)accept;
-(void)sendUserCommand:(id)command withArguments:(id)arguments;
-(void)sendRawMessage:(id)message;
-(void)sendRawMessage:(id)message immediately:(BOOL)immediately;
-(void)sendRawMessageWithFormat:(id)format;
-(void)sendRawMessageImmediatelyWithFormat:(id)format;
-(void)sendRawMessageWithComponents:(id)components;
-(void)sendRawMessageImmediatelyWithComponents:(id)components;
-(void)joinChatRoomsNamed:(id)named;
-(void)joinChatRoomNamed:(id)named;
-(void)joinChatRoomNamed:(id)named withPassphrase:(id)passphrase;
-(id)joinedChatRoomWithUniqueIdentifier:(id)uniqueIdentifier;
-(id)joinedChatRoomWithName:(id)name;
-(id)properNameForChatRoomNamed:(id)chatRoomNamed;
-(id)chatUsersWithNickname:(id)nickname;
-(id)chatUsersWithFingerprint:(id)fingerprint;
-(id)chatUserWithUniqueIdentifier:(id)uniqueIdentifier;
-(void)addChatUserWatchRule:(id)rule;
-(void)removeChatUserWatchRule:(id)rule;
-(void)fetchChatRoomList;
-(void)stopFetchingChatRoomList;
-(id)chatRoomListResults;
-(id)roomsListArray;
-(void)scheduleReconnectAttemptEvery:(double)every;
-(void)cancelPendingReconnectAttempts;
-(id)connectionThread;
-(void)disconn;
@end

@interface MVChatConnection (MVChatConnectionPrivate)
-(void)_systemWillSleep:(id)_system;
-(void)_systemDidWake:(id)_system;
-(void)_applicationWillTerminate:(id)_application;
-(void)_willConnect;
-(void)_didConnect;
-(void)_didNotConnect;
-(void)_willDisconnect;
-(void)disconn;
-(void)_didDisconnect;
-(void)clearRooms;
-(void)_postError:(id)error;
-(void)_setStatus:(int)status;
-(void)_addRoomToCache:(id)cache;
-(void)_sendRoomListUpdatedNotification;
-(void)_addJoinedRoom:(id)room;
-(void)_removeJoinedRoom:(id)room;
-(unsigned)_watchRulesMatchingUser:(id)user;
-(void)_markUserAsOnline:(id)online;
-(void)_markUserAsOffline:(id)offline;
@end

