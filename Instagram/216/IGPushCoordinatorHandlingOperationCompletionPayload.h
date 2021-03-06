//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionPayload-Protocol.h"

@class IGPushNotificationHandlerIntent, IGPushNotificationInfo, NSString;

@interface IGPushCoordinatorHandlingOperationCompletionPayload : NSObject <IGUserSessionPayload>
{
    _Bool _needToSwitchAccounts;
    _Bool _isFromColdStart;
    IGPushNotificationHandlerIntent *_intent;
    IGPushNotificationInfo *_notificationInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFromColdStart; // @synthesize isFromColdStart=_isFromColdStart;
@property(readonly, nonatomic) _Bool needToSwitchAccounts; // @synthesize needToSwitchAccounts=_needToSwitchAccounts;
@property(readonly, retain, nonatomic) IGPushNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(readonly, retain, nonatomic) IGPushNotificationHandlerIntent *intent; // @synthesize intent=_intent;
- (id)initWithIntent:(id)arg1 notificationInfo:(id)arg2 needToSwitchAccounts:(_Bool)arg3 isFromColdStart:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

