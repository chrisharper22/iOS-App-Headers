//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFXCALManager, IGFacebookHelper, IGGraphQLService, NSArray;
@protocol IGRoomsRoomTabAnnouncer;

@interface IGMessengerRoomService : NSObject
{
    IGGraphQLService *_graphQLService;
    IGFXCALManager *_FXCALManager;
    IGFacebookHelper *_facebookHelper;
    id <IGRoomsRoomTabAnnouncer> _announcer;
    NSArray *_fetchedRoomsCache;
}

- (void).cxx_destruct;
- (void)_optimisticallyEndRoom:(id)arg1;
- (_Bool)_accessTokenIsValid:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)getRoomsFromCache;
- (void)dealloc;
- (void)fetchRoomsFromServer;
- (void)endRoomForLinkHash:(id)arg1 funnelSessionId:(id)arg2;
- (void)createNewRoomForSurface:(id)arg1 funnelSessionId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectToFBFromViewController:(id)arg1 userSession:(id)arg2 logger:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_getUserFbid;
- (id)initWithGraphQLService:(id)arg1 facebookHelper:(id)arg2 fxCALManager:(id)arg3 igUser:(id)arg4 launcherSet:(id)arg5;

@end
