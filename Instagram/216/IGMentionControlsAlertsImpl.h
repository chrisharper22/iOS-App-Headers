//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMentionControlsAlertsIntf-Protocol.h"

@class NSString;

@interface IGMentionControlsAlertsImpl : NSObject <IGMentionControlsAlertsIntf>
{
}

+ (void)showAlertInBioCreationForUsers:(id)arg1 isCauseBlockedUser:(_Bool)arg2 userSession:(id)arg3 presentingViewController:(id)arg4 analyticsModule:(id)arg5;
+ (void)showAlertInCommentCreationForUsers:(id)arg1 isCauseBlockedUser:(_Bool)arg2 userSession:(id)arg3 presentingViewController:(id)arg4 analyticsModule:(id)arg5 editCommentBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;
+ (void)showAlertInSearchForUser:(id)arg1 userSession:(id)arg2 entryPoint:(unsigned long long)arg3 presentingViewController:(id)arg4 presentingView:(id)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

