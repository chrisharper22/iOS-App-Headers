//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSObject;
@protocol IGNavigationEventListener;

@protocol IGNavigationEventAnnouncerProtocol <NSObject>
- (void)removeListener:(NSObject<IGNavigationEventListener> *)arg1;
- (void)addListener:(NSObject<IGNavigationEventListener> *)arg1;
@end

