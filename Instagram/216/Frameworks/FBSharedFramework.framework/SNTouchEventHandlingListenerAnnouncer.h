//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import <FBSharedFramework/SNTouchEventHandlingListener-Protocol.h>

@class NSString;

@interface SNTouchEventHandlingListenerAnnouncer : FBAnnouncerBase <SNTouchEventHandlingListener>
{
}

- (void)handleNonInteractionTouchEvent;
- (void)handleCloseCurrentDocumentWithAction:(id)arg1;
- (void)handleLaunchDocumentNamed:(id)arg1 inPlayer:(id)arg2 action:(id)arg3;
- (void)handleLaunchNativeViewWithType:(id)arg1 value:(id)arg2 action:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

